/-
Copyright (c) 2014 Parikshit Khanna. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Parikshit Khanna, Jeremy Avigad, Leonardo de Moura, Floris van Doorn, Mario Carneiro
-/
prelude
import Init.Data.Bool
import Init.Data.Option.Lemmas
import Init.Data.List.BasicAux
import Init.Data.List.Control
import Init.PropLemmas
import Init.Control.Lawful.Basic
import Init.Hints

/-! # Theorems about `List` operations.

For each `List` operation, we would like theorems describing the following, when relevant:
* if it is a "convenience" function, a `@[simp]` lemma reducing it to more basic operations
  (e.g. `List.partition_eq_filter_filter`), and otherwise:
* any special cases of equational lemmas that require additional hypotheses
* lemmas for special cases of the arguments (e.g. `List.map_id`)
* the length of the result `(f L).length`
* the `i`-th element, described via `(f L)[i]` and/or `(f L)[i]?` (these should typically be `@[simp]`)
* consequences for `f L` of the fact `x ∈ L` or `x ∉ L`
* conditions characterising `x ∈ f L` (often but not always `@[simp]`)
* injectivity statements, or congruence statements of the form `p L M → f L = f M`.
* conditions characterising the result, i.e. of the form `f L = M ↔ p M` for some predicate `p`,
  along with special cases of `M` (e.g. `List.append_eq_nil : L ++ M = [] ↔ L = [] ∧ M = []`)
* negative characterisations are also useful, e.g. `List.cons_ne_nil`
* interactions with all previously described `List` operations where possible
  (some of these should be `@[simp]`, particularly if the result can be described by a single operation)
* characterising `(∀ (i) (_ : i ∈ f L), P i)`, for some predicate `P`

Of course for any individual operation, not all of these will be relevant or helpful, so some judgement is required.

General principles for `simp` normal forms for `List` operations:
* Conversion operations (e.g. `toArray`, or `length`) should be moved inwards aggressively,
  to make the conversion effective.
* Similarly, operations which work on elements should be moved inwards in preference to
  "structural" operations on the list, e.g. we prefer to simplify
  `List.map f (L ++ M) ~> (List.map f L) ++ (List.map f M)`,
  `List.map f L.reverse ~> (List.map f L).reverse`, and
  `List.map f (L.take n) ~> (List.map f L).take n`.
* Arithmetic operations are "light", so e.g. we prefer to simplify `drop i (drop j L)` to `drop (i + j) L`,
  rather than the other way round.
* Function compositions are "light", so we prefer to simplify `(L.map f).map g` to `L.map (g ∘ f)`.
* We try to avoid non-linear left hand sides (i.e. with subexpressions appearing multiple times),
  but this is only a weak preference.
* Generally, we prefer that the right hand side does not introduce duplication,
  however generally duplication of higher order arguments (functions, predicates, etc) is allowed,
  as we expect to be able to compute these once they reach ground terms.

-/
namespace List

open Nat

/-! ## Preliminaries -/

-- We may want to replace these `simp` attributes with explicit equational lemmas,
-- as we already have for all the non-monadic functions.
attribute [simp] mapA forA filterAuxM firstM anyM allM findM? findSomeM?

-- Previously `range.loop`, `mapM.loop`, `filterMapM.loop`, `forIn.loop`, `forIn'.loop`
-- had attribute `@[simp]`.
-- We don't currently provide simp lemmas,
-- as this is an internal implementation and they don't seem to be needed.

/-! ### cons -/

theorem cons_ne_nil (a : α) (l : List α) : a :: l ≠ [] := nofun

@[simp]
theorem cons_ne_self (a : α) (l : List α) : a :: l ≠ l := mt (congrArg length) (Nat.succ_ne_self _)

theorem head_eq_of_cons_eq (H : h₁ :: t₁ = h₂ :: t₂) : h₁ = h₂ := (cons.inj H).1

theorem tail_eq_of_cons_eq (H : h₁ :: t₁ = h₂ :: t₂) : t₁ = t₂ := (cons.inj H).2

theorem cons_inj_right (a : α) {l l' : List α} : a :: l = a :: l' ↔ l = l' :=
  ⟨tail_eq_of_cons_eq, congrArg _⟩

@[deprecated (since := "2024-06-15")] abbrev cons_inj := @cons_inj_right

theorem cons_eq_cons {a b : α} {l l' : List α} : a :: l = b :: l' ↔ a = b ∧ l = l' :=
  List.cons.injEq .. ▸ .rfl

theorem exists_cons_of_ne_nil : ∀ {l : List α}, l ≠ [] → ∃ b L, l = b :: L
  | c :: l', _ => ⟨c, l', rfl⟩

/-! ### length -/

theorem eq_nil_of_length_eq_zero (_ : length l = 0) : l = [] := match l with | [] => rfl

theorem ne_nil_of_length_eq_add_one (_ : length l = n + 1) : l ≠ [] := fun _ => nomatch l

@[deprecated ne_nil_of_length_eq_add_one (since := "2024-06-16")]
abbrev ne_nil_of_length_eq_succ := @ne_nil_of_length_eq_add_one

theorem ne_nil_of_length_pos (_ : 0 < length l) : l ≠ [] := fun _ => nomatch l

@[simp] theorem length_eq_zero : length l = 0 ↔ l = [] :=
  ⟨eq_nil_of_length_eq_zero, fun h => h ▸ rfl⟩

theorem length_pos_of_mem {a : α} : ∀ {l : List α}, a ∈ l → 0 < length l
  | _::_, _ => Nat.zero_lt_succ _

theorem exists_mem_of_length_pos : ∀ {l : List α}, 0 < length l → ∃ a, a ∈ l
  | _::_, _ => ⟨_, .head ..⟩

theorem length_pos_iff_exists_mem {l : List α} : 0 < length l ↔ ∃ a, a ∈ l :=
  ⟨exists_mem_of_length_pos, fun ⟨_, h⟩ => length_pos_of_mem h⟩

theorem exists_cons_of_length_pos : ∀ {l : List α}, 0 < l.length → ∃ h t, l = h :: t
  | _::_, _ => ⟨_, _, rfl⟩

theorem length_pos_iff_exists_cons :
    ∀ {l : List α}, 0 < l.length ↔ ∃ h t, l = h :: t :=
  ⟨exists_cons_of_length_pos, fun ⟨_, _, eq⟩ => eq ▸ Nat.succ_pos _⟩

theorem exists_cons_of_length_eq_add_one :
    ∀ {l : List α}, l.length = n + 1 → ∃ h t, l = h :: t
  | _::_, _ => ⟨_, _, rfl⟩

theorem length_pos {l : List α} : 0 < length l ↔ l ≠ [] :=
  Nat.pos_iff_ne_zero.trans (not_congr length_eq_zero)

theorem length_eq_one {l : List α} : length l = 1 ↔ ∃ a, l = [a] :=
  ⟨fun h => match l, h with | [_], _ => ⟨_, rfl⟩, fun ⟨_, h⟩ => by simp [h]⟩

/-! ## L[i] and L[i]? -/

/-! ### `get` and `get?`.

We simplify `l.get i` to `l[i.1]'i.2` and `l.get? i` to `l[i]?`.
-/

@[simp] theorem get_cons_zero : get (a::l) (0 : Fin (l.length + 1)) = a := rfl

@[simp] theorem get_cons_succ {as : List α} {h : i + 1 < (a :: as).length} :
  (a :: as).get ⟨i+1, h⟩ = as.get ⟨i, Nat.lt_of_succ_lt_succ h⟩ := rfl

@[simp] theorem get_cons_succ' {as : List α} {i : Fin as.length} :
  (a :: as).get i.succ = as.get i := rfl

@[deprecated (since := "2024-07-09")]
theorem get_cons_cons_one : (a₁ :: a₂ :: as).get (1 : Fin (as.length + 2)) = a₂ := rfl

theorem get_mk_zero : ∀ {l : List α} (h : 0 < l.length), l.get ⟨0, h⟩ = l.head (length_pos.mp h)
  | _::_, _ => rfl

/--
If one has `l.get i` in an expression (with `i : Fin l.length`) and `h : l = l'`,
`rw [h]` will give a "motive it not type correct" error, as it cannot rewrite the
`i : Fin l.length` to `Fin l'.length` directly. The theorem `get_of_eq` can be used to make
such a rewrite, with `rw [get_of_eq h]`.
-/
theorem get_of_eq {l l' : List α} (h : l = l') (i : Fin l.length) :
    get l i = get l' ⟨i, h ▸ i.2⟩ := by cases h; rfl

theorem get?_zero (l : List α) : l.get? 0 = l.head? := by cases l <;> rfl

theorem get?_len_le : ∀ {l : List α} {n}, length l ≤ n → l.get? n = none
  | [], _, _ => rfl
  | _ :: l, _+1, h => get?_len_le (l := l) <| Nat.le_of_succ_le_succ h

theorem get?_eq_get : ∀ {l : List α} {n} (h : n < l.length), l.get? n = some (get l ⟨n, h⟩)
  | _ :: _, 0, _ => rfl
  | _ :: l, _+1, _ => get?_eq_get (l := l) _

theorem get?_eq_some : l.get? n = some a ↔ ∃ h, get l ⟨n, h⟩ = a :=
  ⟨fun e =>
    have : n < length l := Nat.gt_of_not_le fun hn => by cases get?_len_le hn ▸ e
    ⟨this, by rwa [get?_eq_get this, Option.some.injEq] at e⟩,
  fun ⟨h, e⟩ => e ▸ get?_eq_get _⟩

theorem get?_eq_none : l.get? n = none ↔ length l ≤ n :=
  ⟨fun e => Nat.ge_of_not_lt (fun h' => by cases e ▸ get?_eq_some.2 ⟨h', rfl⟩), get?_len_le⟩

@[simp] theorem get?_eq_getElem? (l : List α) (i : Nat) : l.get? i = l[i]? := by
  simp only [getElem?, decidableGetElem?]; split
  · exact (get?_eq_get ‹_›)
  · exact (get?_eq_none.2 <| Nat.not_lt.1 ‹_›)

@[simp] theorem get_eq_getElem (l : List α) (i : Fin l.length) : l.get i = l[i.1]'i.2 := rfl

/-! ### getD

We simplify away `getD`, replacing `getD l n a` with `(l[n]?).getD a`.
Because of this, there is only minimal API for `getD`.
-/

@[simp] theorem getD_eq_getElem?_getD (l) (n) (a : α) : getD l n a = (l[n]?).getD a := by
  simp [getD]

@[deprecated getD_eq_getElem?_getD (since := "2024-06-12")]
theorem getD_eq_get? : ∀ l n (a : α), getD l n a = (get? l n).getD a := by simp

/-! ### get!

We simplify `l.get! n` to `l[n]!`.
-/

theorem get!_of_get? [Inhabited α] : ∀ {l : List α} {n}, get? l n = some a → get! l n = a
  | _a::_, 0, rfl => rfl
  | _::l, _+1, e => get!_of_get? (l := l) e

theorem get!_eq_getD [Inhabited α] : ∀ (l : List α) n, l.get! n = l.getD n default
  | [], _      => rfl
  | _a::_, 0   => rfl
  | _a::l, n+1 => get!_eq_getD l n

theorem get!_len_le [Inhabited α] : ∀ {l : List α} {n}, length l ≤ n → l.get! n = (default : α)
  | [], _, _ => rfl
  | _ :: l, _+1, h => get!_len_le (l := l) <| Nat.le_of_succ_le_succ h

@[simp] theorem get!_eq_getElem! [Inhabited α] (l : List α) (n) : l.get! n = l[n]! := by
  simp [get!_eq_getD]
  rfl

/-! ### getElem! -/

@[simp] theorem getElem!_nil [Inhabited α] {n : Nat} : ([] : List α)[n]! = default := rfl

@[simp] theorem getElem!_cons_zero [Inhabited α] {l : List α} : (a::l)[0]! = a := by
  rw [getElem!_pos] <;> simp

@[simp] theorem getElem!_cons_succ [Inhabited α] {l : List α} : (a::l)[n+1]! = l[n]! := by
  by_cases h : n < l.length
  · rw [getElem!_pos, getElem!_pos] <;> simp_all [Nat.succ_lt_succ_iff]
  · rw [getElem!_neg, getElem!_neg] <;> simp_all [Nat.succ_lt_succ_iff]

/-! ### getElem? and getElem -/

@[simp] theorem getElem?_eq_getElem {l : List α} {n} (h : n < l.length) : l[n]? = some l[n] := by
  simp only [← get?_eq_getElem?, get?_eq_get, h, get_eq_getElem]

theorem getElem?_eq_some {l : List α} : l[n]? = some a ↔ ∃ h : n < l.length, l[n] = a := by
  simp only [← get?_eq_getElem?, get?_eq_some, get_eq_getElem]

@[simp] theorem getElem?_eq_none_iff : l[n]? = none ↔ length l ≤ n := by
  simp only [← get?_eq_getElem?, get?_eq_none]

theorem getElem?_eq_none (h : length l ≤ n) : l[n]? = none := getElem?_eq_none_iff.mpr h

theorem getElem_eq_iff {l : List α} {n : Nat} {h : n < l.length} : l[n] = x ↔ l[n]? = some x := by
  simp only [getElem?_eq_some]
  exact ⟨fun w => ⟨h, w⟩, fun h => h.2⟩

@[simp] theorem getElem?_nil {n : Nat} : ([] : List α)[n]? = none := rfl

theorem getElem?_cons_zero {l : List α} : (a::l)[0]? = some a := by simp

@[simp] theorem getElem?_cons_succ {l : List α} : (a::l)[n+1]? = l[n]? := by
  simp only [← get?_eq_getElem?]
  rfl

theorem getElem?_len_le : ∀ {l : List α} {n}, length l ≤ n → l[n]? = none
  | [], _, _ => rfl
  | _ :: l, _+1, h => by
    rw [getElem?_cons_succ, getElem?_len_le (l := l) <| Nat.le_of_succ_le_succ h]

/--
If one has `l[i]` in an expression and `h : l = l'`,
`rw [h]` will give a "motive it not type correct" error, as it cannot rewrite the
implicit `i < l.length` to `i < l'.length` directly. The theorem `getElem_of_eq` can be used to make
such a rewrite, with `rw [getElem_of_eq h]`.
-/
theorem getElem_of_eq {l l' : List α} (h : l = l') {i : Nat} (w : i < l.length) :
    l[i] = l'[i]'(h ▸ w) := by cases h; rfl

@[simp] theorem getElem_singleton (a : α) (h : i < 1) : [a][i] = a :=
  match i, h with
  | 0, _ => rfl

@[deprecated getElem_singleton (since := "2024-06-12")]
theorem get_singleton (a : α) (n : Fin 1) : get [a] n = a := by simp

theorem getElem_zero {l : List α} (h : 0 < l.length) : l[0] = l.head (length_pos.mp h) :=
  match l, h with
  | _ :: _, _ => rfl

theorem getElem!_of_getElem? [Inhabited α] : ∀ {l : List α} {n : Nat}, l[n]? = some a → l[n]! = a
  | _a::_, 0, _ => by
    rw [getElem!_pos] <;> simp_all
  | _::l, _+1, e => by
    simp at e
    simp_all [getElem!_of_getElem? (l := l) e]

@[ext] theorem ext_getElem? {l₁ l₂ : List α} (h : ∀ n : Nat, l₁[n]? = l₂[n]?) : l₁ = l₂ :=
  ext_get? fun n => by simp_all

theorem ext_getElem {l₁ l₂ : List α} (hl : length l₁ = length l₂)
    (h : ∀ (n : Nat) (h₁ : n < l₁.length) (h₂ : n < l₂.length), l₁[n]'h₁ = l₂[n]'h₂) : l₁ = l₂ :=
  ext_getElem? fun n =>
    if h₁ : n < length l₁ then by
      simp_all [getElem?_eq_getElem]
    else by
      have h₁ := Nat.le_of_not_lt h₁
      rw [getElem?_len_le h₁, getElem?_len_le]; rwa [← hl]

theorem ext_get {l₁ l₂ : List α} (hl : length l₁ = length l₂)
    (h : ∀ n h₁ h₂, get l₁ ⟨n, h₁⟩ = get l₂ ⟨n, h₂⟩) : l₁ = l₂ :=
  ext_getElem hl (by simp_all)

@[simp] theorem getElem_concat_length : ∀ (l : List α) (a : α) (i) (_ : i = l.length) (w), (l ++ [a])[i]'w = a
  | [], a, _, h, _ => by subst h; simp
  | _ :: l, a, _, h, _ => by simp [getElem_concat_length, h]

theorem getElem?_concat_length (l : List α) (a : α) : (l ++ [a])[l.length]? = some a := by
  simp

@[deprecated getElem?_concat_length (since := "2024-06-12")]
theorem get?_concat_length (l : List α) (a : α) : (l ++ [a]).get? l.length = some a := by simp

/-! ### mem -/

@[simp] theorem not_mem_nil (a : α) : ¬ a ∈ [] := nofun

@[simp] theorem mem_cons : a ∈ (b :: l) ↔ a = b ∨ a ∈ l :=
  ⟨fun h => by cases h <;> simp [Membership.mem, *],
   fun | Or.inl rfl => by constructor | Or.inr h => by constructor; assumption⟩

theorem mem_cons_self (a : α) (l : List α) : a ∈ a :: l := .head ..

theorem mem_cons_of_mem (y : α) {a : α} {l : List α} : a ∈ l → a ∈ y :: l := .tail _

theorem exists_mem_of_ne_nil (l : List α) (h : l ≠ []) : ∃ x, x ∈ l :=
  exists_mem_of_length_pos (length_pos.2 h)

theorem eq_nil_iff_forall_not_mem {l : List α} : l = [] ↔ ∀ a, a ∉ l := by
  cases l <;> simp [-not_or]

theorem eq_of_mem_singleton : a ∈ [b] → a = b
  | .head .. => rfl

@[simp 1100] theorem mem_singleton {a b : α} : a ∈ [b] ↔ a = b :=
  ⟨eq_of_mem_singleton, (by simp [·])⟩

theorem forall_mem_cons {p : α → Prop} {a : α} {l : List α} :
    (∀ x, x ∈ a :: l → p x) ↔ p a ∧ ∀ x, x ∈ l → p x :=
  ⟨fun H => ⟨H _ (.head ..), fun _ h => H _ (.tail _ h)⟩,
   fun ⟨H₁, H₂⟩ _ => fun | .head .. => H₁ | .tail _ h => H₂ _ h⟩

@[simp]
theorem forall_mem_ne {a : α} {l : List α} : (∀ a' : α, a' ∈ l → ¬a = a') ↔ a ∉ l :=
  ⟨fun h m => h _ m rfl, fun h _ m e => h (e.symm ▸ m)⟩

@[simp]
theorem forall_mem_ne' {a : α} {l : List α} : (∀ a' : α, a' ∈ l → ¬a' = a) ↔ a ∉ l :=
  ⟨fun h m => h _ m rfl, fun h _ m e => h (e.symm ▸ m)⟩

@[simp]
theorem any_beq [BEq α] [LawfulBEq α] {l : List α} : (l.any fun x => a == x) ↔ a ∈ l := by
  induction l <;> simp_all

@[simp]
theorem any_beq' [BEq α] [LawfulBEq α] {l : List α} : (l.any fun x => x == a) ↔ a ∈ l := by
  induction l <;> simp_all [eq_comm (a := a)]

@[simp]
theorem all_bne [BEq α] [LawfulBEq α] {l : List α} : (l.all fun x => a != x) ↔ a ∉ l := by
  induction l <;> simp_all

@[simp]
theorem all_bne' [BEq α] [LawfulBEq α] {l : List α} : (l.all fun x => x != a) ↔ a ∉ l := by
  induction l <;> simp_all [eq_comm (a := a)]

theorem exists_mem_nil (p : α → Prop) : ¬ (∃ x, ∃ _ : x ∈ @nil α, p x) := nofun

theorem forall_mem_nil (p : α → Prop) : ∀ (x) (_ : x ∈ @nil α), p x := nofun

theorem exists_mem_cons {p : α → Prop} {a : α} {l : List α} :
    (∃ x, ∃ _ : x ∈ a :: l, p x) ↔ p a ∨ ∃ x, ∃ _ : x ∈ l, p x := by simp

theorem forall_mem_singleton {p : α → Prop} {a : α} : (∀ (x) (_ : x ∈ [a]), p x) ↔ p a := by
  simp only [mem_singleton, forall_eq]

theorem mem_nil_iff (a : α) : a ∈ ([] : List α) ↔ False := by simp

theorem mem_singleton_self (a : α) : a ∈ [a] := mem_cons_self _ _

theorem mem_of_mem_cons_of_mem : ∀ {a b : α} {l : List α}, a ∈ b :: l → b ∈ l → a ∈ l
  | _, _, _, .head .., h | _, _, _, .tail _ h, _ => h

theorem eq_or_ne_mem_of_mem {a b : α} {l : List α} (h' : a ∈ b :: l) : a = b ∨ (a ≠ b ∧ a ∈ l) :=
  (Classical.em _).imp_right fun h => ⟨h, (mem_cons.1 h').resolve_left h⟩

theorem ne_nil_of_mem {a : α} {l : List α} (h : a ∈ l) : l ≠ [] := by cases h <;> nofun

theorem elem_iff [BEq α] [LawfulBEq α] {a : α} {as : List α} :
    elem a as = true ↔ a ∈ as := ⟨mem_of_elem_eq_true, elem_eq_true_of_mem⟩

@[simp] theorem elem_eq_mem [BEq α] [LawfulBEq α] (a : α) (as : List α) :
    elem a as = decide (a ∈ as) := by rw [Bool.eq_iff_iff, elem_iff, decide_eq_true_iff]

theorem mem_of_ne_of_mem {a y : α} {l : List α} (h₁ : a ≠ y) (h₂ : a ∈ y :: l) : a ∈ l :=
  Or.elim (mem_cons.mp h₂) (absurd · h₁) (·)

theorem ne_of_not_mem_cons {a b : α} {l : List α} : a ∉ b::l → a ≠ b := mt (· ▸ .head _)

theorem not_mem_of_not_mem_cons {a b : α} {l : List α} : a ∉ b::l → a ∉ l := mt (.tail _)

theorem not_mem_cons_of_ne_of_not_mem {a y : α} {l : List α} : a ≠ y → a ∉ l → a ∉ y::l :=
  mt ∘ mem_of_ne_of_mem

theorem ne_and_not_mem_of_not_mem_cons {a y : α} {l : List α} : a ∉ y::l → a ≠ y ∧ a ∉ l :=
  fun p => ⟨ne_of_not_mem_cons p, not_mem_of_not_mem_cons p⟩

theorem getElem_of_mem : ∀ {a} {l : List α}, a ∈ l → ∃ (n : Nat) (h : n < l.length), l[n]'h = a
  | _, _ :: _, .head .. => ⟨0, Nat.succ_pos _, rfl⟩
  | _, _ :: _, .tail _ m => let ⟨n, h, e⟩ := getElem_of_mem m; ⟨n+1, Nat.succ_lt_succ h, e⟩

theorem get_of_mem {a} {l : List α} (h : a ∈ l) : ∃ n, get l n = a := by
  obtain ⟨n, h, e⟩ := getElem_of_mem h
  exact ⟨⟨n, h⟩, e⟩

theorem getElem_mem : ∀ (l : List α) n (h : n < l.length), l[n]'h ∈ l
  | _ :: _, 0, _ => .head ..
  | _ :: l, _+1, _ => .tail _ (getElem_mem l ..)

theorem get_mem : ∀ (l : List α) n h, get l ⟨n, h⟩ ∈ l
  | _ :: _, 0, _ => .head ..
  | _ :: l, _+1, _ => .tail _ (get_mem l ..)

theorem mem_iff_getElem {a} {l : List α} : a ∈ l ↔ ∃ (n : Nat) (h : n < l.length), l[n]'h = a :=
  ⟨getElem_of_mem, fun ⟨_, _, e⟩ => e ▸ getElem_mem ..⟩

theorem mem_iff_get {a} {l : List α} : a ∈ l ↔ ∃ n, get l n = a :=
  ⟨get_of_mem, fun ⟨_, e⟩ => e ▸ get_mem ..⟩

theorem getElem?_of_mem {a} {l : List α} (h : a ∈ l) : ∃ n : Nat, l[n]? = some a :=
  let ⟨n, _, e⟩ := getElem_of_mem h; ⟨n, e ▸ getElem?_eq_getElem _⟩

theorem get?_of_mem {a} {l : List α} (h : a ∈ l) : ∃ n, l.get? n = some a :=
  let ⟨⟨n, _⟩, e⟩ := get_of_mem h; ⟨n, e ▸ get?_eq_get _⟩

theorem getElem?_mem {l : List α} {n : Nat} {a : α} (e : l[n]? = some a) : a ∈ l :=
  let ⟨_, e⟩ := getElem?_eq_some.1 e; e ▸ getElem_mem ..

theorem get?_mem {l : List α} {n a} (e : l.get? n = some a) : a ∈ l :=
  let ⟨_, e⟩ := get?_eq_some.1 e; e ▸ get_mem ..

theorem mem_iff_getElem? {a} {l : List α} : a ∈ l ↔ ∃ n : Nat, l[n]? = some a := by
  simp [getElem?_eq_some, mem_iff_getElem]

theorem mem_iff_get? {a} {l : List α} : a ∈ l ↔ ∃ n, l.get? n = some a := by
  simp [getElem?_eq_some, Fin.exists_iff, mem_iff_get]

theorem forall_getElem (l : List α) (p : α → Prop) :
    (∀ (n : Nat) h, p (l[n]'h)) ↔ ∀ a, a ∈ l → p a := by
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [length_cons, mem_cons, forall_eq_or_imp]
    constructor
    · intro w
      constructor
      · exact w 0 (by simp)
      · apply ih.1
        intro n h
        simpa using w (n+1) (Nat.add_lt_add_right h 1)
    · rintro ⟨h, w⟩
      rintro (_ | n) h
      · simpa
      · apply w
        simp only [getElem_cons_succ]
        exact getElem_mem l n (lt_of_succ_lt_succ h)

@[simp] theorem decide_mem_cons [BEq α] [LawfulBEq α] {l : List α} :
    decide (y ∈ a :: l) = (y == a || decide (y ∈ l)) := by
  cases h : y == a <;> simp_all

/-! ### `isEmpty` -/

theorem isEmpty_iff {l : List α} : l.isEmpty ↔ l = [] := by
  cases l <;> simp

theorem isEmpty_false_iff_exists_mem (xs : List α) :
    (List.isEmpty xs = false) ↔ ∃ x, x ∈ xs := by
  cases xs <;> simp

theorem isEmpty_iff_length_eq_zero {l : List α} : l.isEmpty ↔ l.length = 0 := by
  rw [isEmpty_iff, length_eq_zero]

@[simp] theorem isEmpty_eq_true {l : List α} : l.isEmpty ↔ l = [] := by
  cases l <;> simp

@[simp] theorem isEmpty_eq_false {l : List α} : ¬ l.isEmpty ↔ l ≠ [] := by
  cases l <;> simp

/-! ### any / all -/

theorem any_eq {l : List α} : l.any p = decide (∃ x, x ∈ l ∧ p x) := by induction l <;> simp [*]

theorem all_eq {l : List α} : l.all p = decide (∀ x, x ∈ l →  p x) := by induction l <;> simp [*]

@[simp] theorem any_eq_true {l : List α} : l.any p ↔ ∃ x, x ∈ l ∧ p x := by simp [any_eq]

@[simp] theorem all_eq_true {l : List α} : l.all p ↔ ∀ x, x ∈ l →  p x := by simp [all_eq]

/-! ### set -/

-- As `List.set` is defined in `Init.Prelude`, we write the basic simplification lemmas here.
@[simp] theorem set_nil (n : Nat) (a : α) : [].set n a = [] := rfl
@[simp] theorem set_cons_zero (x : α) (xs : List α) (a : α) :
  (x :: xs).set 0 a = a :: xs := rfl
@[simp] theorem set_cons_succ (x : α) (xs : List α) (n : Nat) (a : α) :
  (x :: xs).set (n + 1) a = x :: xs.set n a := rfl

@[simp] theorem getElem_set_eq {l : List α} {i : Nat} {a : α} (h : i < (l.set i a).length) :
    (l.set i a)[i] = a :=
  match l, i with
  | [], _ => by
    simp at h
  | _ :: _, 0 => by simp
  | _ :: l, i + 1 => by simp [getElem_set_eq]

@[deprecated getElem_set_eq (since := "2024-06-12")]
theorem get_set_eq {l : List α} {i : Nat} {a : α} (h : i < (l.set i a).length) :
    (l.set i a).get ⟨i, h⟩ = a := by
  simp

@[simp] theorem getElem?_set_eq {l : List α} {i : Nat} {a : α} (h : i < l.length) :
    (l.set i a)[i]? = some a := by
  simp_all [getElem?_eq_some]

@[simp]
theorem getElem?_set_eq' {l : List α} {i : Nat} {a : α} : (set l i a)[i]? = (fun _ => a) <$> l[i]? := by
  by_cases h : i < l.length
  · simp [getElem?_set_eq h, getElem?_eq_getElem h]
  · simp only [Nat.not_lt] at h
    simpa [getElem?_eq_none_iff.2 h]

@[simp] theorem getElem_set_ne {l : List α} {i j : Nat} (h : i ≠ j) {a : α}
    (hj : j < (l.set i a).length) :
    (l.set i a)[j] = l[j]'(by simp at hj; exact hj) :=
  match l, i, j with
  | [], _, _ => by simp
  | _ :: _, 0, 0 => by contradiction
  | _ :: _, 0, _ + 1 => by simp
  | _ :: _, _ + 1, 0 => by simp
  | _ :: l, i + 1, j + 1 => by
    have g : i ≠ j := h ∘ congrArg (· + 1)
    simp [getElem_set_ne g]

@[deprecated getElem_set_ne (since := "2024-06-12")]
theorem get_set_ne {l : List α} {i j : Nat} (h : i ≠ j) {a : α}
    (hj : j < (l.set i a).length) :
    (l.set i a).get ⟨j, hj⟩ = l.get ⟨j, by simp at hj; exact hj⟩ := by
  simp [h]

@[simp] theorem getElem?_set_ne {l : List α} {i j : Nat} (h : i ≠ j) {a : α}  :
    (l.set i a)[j]? = l[j]? := by
  by_cases hj : j < (l.set i a).length
  · rw [getElem?_eq_getElem hj, getElem?_eq_getElem (by simp_all)]
    simp_all
  · rw [getElem?_eq_none (by simp_all), getElem?_eq_none (by simp_all)]

theorem getElem_set {l : List α} {m n} {a} (h) :
    (set l m a)[n]'h = if m = n then a else l[n]'(length_set .. ▸ h) := by
  if h : m = n then
    subst m; simp only [getElem_set_eq, ↓reduceIte]
  else
    simp [h]

@[deprecated getElem_set (since := "2024-06-12")]
theorem get_set {l : List α} {m n} {a : α} (h) :
    (set l m a).get ⟨n, h⟩ = if m = n then a else l.get ⟨n, length_set .. ▸ h⟩ := by
  simp [getElem_set]

theorem getElem?_set {l : List α} {i j : Nat} {a : α} :
    (l.set i a)[j]? = if i = j then if i < l.length then some a else none else l[j]? := by
  if h : i = j then
    subst h
    rw [if_pos rfl]
    split <;> rename_i h
    · simp only [getElem?_set_eq (by simpa), h]
    · simp_all
  else
    simp [h]

theorem getElem?_set' {l : List α} {i j : Nat} {a : α} :
    (set l i a)[j]? = if i = j then (fun _ => a) <$> l[j]? else l[j]? := by
  by_cases i = j
  · simp only [getElem?_set_eq', Option.map_eq_map, ↓reduceIte, *]
  · simp only [ne_eq, not_false_eq_true, getElem?_set_ne, ↓reduceIte, *]

theorem set_eq_of_length_le {l : List α} {n : Nat} (h : l.length ≤ n) {a : α} :
    l.set n a = l := by
  induction l generalizing n with
  | nil => simp_all
  | cons a l ih =>
    induction n
    · simp_all
    · simp only [set_cons_succ, cons.injEq, true_and]
      rw [ih]
      exact Nat.succ_le_succ_iff.mp h

@[simp] theorem set_eq_nil (l : List α) (n : Nat) (a : α) : l.set n a = [] ↔ l = [] := by
  cases l <;> cases n <;> simp only [set]

theorem set_comm (a b : α) : ∀ {n m : Nat} (l : List α), n ≠ m →
    (l.set n a).set m b = (l.set m b).set n a
  | _, _, [], _ => by simp
  | n+1, 0, _ :: _, _ => by simp [set]
  | 0, m+1, _ :: _, _ => by simp [set]
  | n+1, m+1, x :: t, h =>
    congrArg _ <| set_comm a b t fun h' => h <| Nat.succ_inj'.mpr h'

@[simp]
theorem set_set (a b : α) : ∀ (l : List α) (n : Nat), (l.set n a).set n b = l.set n b
  | [], _ => by simp
  | _ :: _, 0 => by simp [set]
  | _ :: _, _+1 => by simp [set, set_set]

theorem mem_set (l : List α) (n : Nat) (h : n < l.length) (a : α) :
    a ∈ l.set n a := by
  simp [mem_iff_getElem]
  exact ⟨n, (by simpa using h), by simp⟩

theorem mem_or_eq_of_mem_set : ∀ {l : List α} {n : Nat} {a b : α}, a ∈ l.set n b → a ∈ l ∨ a = b
  | _ :: _, 0, _, _, h => ((mem_cons ..).1 h).symm.imp_left (.tail _)
  | _ :: _, _+1, _, _, .head .. => .inl (.head ..)
  | _ :: _, _+1, _, _, .tail _ h => (mem_or_eq_of_mem_set h).imp_left (.tail _)

-- See also `set_eq_take_append_cons_drop` in `Init.Data.List.TakeDrop`.

/-! ### Lexicographic ordering -/

theorem lt_irrefl' [LT α] (lt_irrefl : ∀ x : α, ¬x < x) (l : List α) : ¬l < l := by
  induction l with
  | nil => nofun
  | cons a l ih => intro
    | .head _ _ h => exact lt_irrefl _ h
    | .tail _ _ h => exact ih h

theorem lt_trans' [LT α] [DecidableRel (@LT.lt α _)]
    (lt_trans : ∀ {x y z : α}, x < y → y < z → x < z)
    (le_trans : ∀ {x y z : α}, ¬x < y → ¬y < z → ¬x < z)
    {l₁ l₂ l₃ : List α} (h₁ : l₁ < l₂) (h₂ : l₂ < l₃) : l₁ < l₃ := by
  induction h₁ generalizing l₃ with
  | nil => let _::_ := l₃; exact List.lt.nil ..
  | @head a l₁ b l₂ ab =>
    match h₂ with
    | .head l₂ l₃ bc => exact List.lt.head _ _ (lt_trans ab bc)
    | .tail _ cb ih =>
      exact List.lt.head _ _ <| Decidable.by_contra (le_trans · cb ab)
  | @tail a l₁ b l₂ ab ba h₁ ih2 =>
    match h₂ with
    | .head l₂ l₃ bc =>
      exact List.lt.head _ _ <| Decidable.by_contra (le_trans ba · bc)
    | .tail bc cb ih =>
      exact List.lt.tail (le_trans ab bc) (le_trans cb ba) (ih2 ih)

theorem lt_antisymm' [LT α]
    (lt_antisymm : ∀ {x y : α}, ¬x < y → ¬y < x → x = y)
    {l₁ l₂ : List α} (h₁ : ¬l₁ < l₂) (h₂ : ¬l₂ < l₁) : l₁ = l₂ := by
  induction l₁ generalizing l₂ with
  | nil =>
    cases l₂ with
    | nil => rfl
    | cons b l₂ => cases h₁ (.nil ..)
  | cons a l₁ ih =>
    cases l₂ with
    | nil => cases h₂ (.nil ..)
    | cons b l₂ =>
      have ab : ¬a < b := fun ab => h₁ (.head _ _ ab)
      cases lt_antisymm ab (fun ba => h₂ (.head _ _ ba))
      rw [ih (fun ll => h₁ (.tail ab ab ll)) (fun ll => h₂ (.tail ab ab ll))]

/-! ### foldlM and foldrM -/

@[simp] theorem foldlM_reverse [Monad m] (l : List α) (f : β → α → m β) (b) :
    l.reverse.foldlM f b = l.foldrM (fun x y => f y x) b := rfl

@[simp] theorem foldlM_append [Monad m] [LawfulMonad m] (f : β → α → m β) (b) (l l' : List α) :
    (l ++ l').foldlM f b = l.foldlM f b >>= l'.foldlM f := by
  induction l generalizing b <;> simp [*]

@[simp] theorem foldrM_cons [Monad m] [LawfulMonad m] (a : α) (l) (f : α → β → m β) (b) :
    (a :: l).foldrM f b = l.foldrM f b >>= f a := by
  simp only [foldrM]
  induction l <;> simp_all

theorem foldl_eq_foldlM (f : β → α → β) (b) (l : List α) :
    l.foldl f b = l.foldlM (m := Id) f b := by
  induction l generalizing b <;> simp [*, foldl]

theorem foldr_eq_foldrM (f : α → β → β) (b) (l : List α) :
    l.foldr f b = l.foldrM (m := Id) f b := by
  induction l <;> simp [*, foldr]

/-! ### foldl and foldr -/

@[simp] theorem foldr_self_append (l : List α) : l.foldr cons l' = l ++ l' := by
  induction l <;> simp [*]

theorem foldr_self (l : List α) : l.foldr cons [] = l := by simp

theorem foldl_map (f : β₁ → β₂) (g : α → β₂ → α) (l : List β₁) (init : α) :
    (l.map f).foldl g init = l.foldl (fun x y => g x (f y)) init := by
  induction l generalizing init <;> simp [*]

theorem foldr_map (f : α₁ → α₂) (g : α₂ → β → β) (l : List α₁) (init : β) :
    (l.map f).foldr g init = l.foldr (fun x y => g (f x) y) init := by
  induction l generalizing init <;> simp [*]

theorem foldl_map' {α β : Type u} (g : α → β) (f : α → α → α) (f' : β → β → β) (a : α) (l : List α)
    (h : ∀ x y, f' (g x) (g y) = g (f x y)) :
    (l.map g).foldl f' (g a) = g (l.foldl f a) := by
  induction l generalizing a
  · simp
  · simp [*, h]

theorem foldr_map' {α β : Type u} (g : α → β) (f : α → α → α) (f' : β → β → β) (a : α) (l : List α)
    (h : ∀ x y, f' (g x) (g y) = g (f x y)) :
    (l.map g).foldr f' (g a) = g (l.foldr f a) := by
  induction l generalizing a
  · simp
  · simp [*, h]

theorem foldl_hom (f : α₁ → α₂) (g₁ : α₁ → β → α₁) (g₂ : α₂ → β → α₂) (l : List β) (init : α₁)
    (H : ∀ x y, g₂ (f x) y = f (g₁ x y)) : l.foldl g₂ (f init) = f (l.foldl g₁ init) := by
  induction l generalizing init <;> simp [*, H]

theorem foldr_hom (f : β₁ → β₂) (g₁ : α → β₁ → β₁) (g₂ : α → β₂ → β₂) (l : List α) (init : β₁)
    (H : ∀ x y, g₂ x (f y) = f (g₁ x y)) : l.foldr g₂ (f init) = f (l.foldr g₁ init) := by
  induction l <;> simp [*, H]

/-! ### getLast -/

theorem getLast_eq_getElem : ∀ (l : List α) (h : l ≠ []),
    getLast l h = l[l.length - 1]'(by
      match l with
      | [] => contradiction
      | a :: l => exact Nat.le_refl _)
  | [a], h => rfl
  | a :: b :: l, h => by
    simp [getLast, get, Nat.succ_sub_succ, getLast_eq_getElem]

@[deprecated getLast_eq_getElem (since := "2024-07-15")]
theorem getLast_eq_get (l : List α) (h : l ≠ []) :
    getLast l h = l.get ⟨l.length - 1, by
      match l with
      | [] => contradiction
      | a :: l => exact Nat.le_refl _⟩ := by
  simp [getLast_eq_getElem]

theorem getLast_cons {a : α} {l : List α} : ∀ (h : l ≠ nil),
    getLast (a :: l) (cons_ne_nil a l) = getLast l h := by
  induction l <;> intros; {contradiction}; rfl

theorem getLast_eq_getLastD (a l h) : @getLast α (a::l) h = getLastD l a := by
  cases l <;> rfl

@[simp] theorem getLastD_eq_getLast? (a l) : @getLastD α l a = (getLast? l).getD a := by
  cases l <;> rfl

@[simp] theorem getLast_singleton (a h) : @getLast α [a] h = a := rfl

theorem getLast!_cons [Inhabited α] : @getLast! α _ (a::l) = getLastD l a := by
  simp [getLast!, getLast_eq_getLastD]

theorem getLast_mem : ∀ {l : List α} (h : l ≠ []), getLast l h ∈ l
  | [], h => absurd rfl h
  | [_], _ => .head ..
  | _::a::l, _ => .tail _ <| getLast_mem (cons_ne_nil a l)

theorem getLastD_mem_cons : ∀ (l : List α) (a : α), getLastD l a ∈ a::l
  | [], _ => .head ..
  | _::_, _ => .tail _ <| getLast_mem _

theorem getElem_cons_length (x : α) (xs : List α) (n : Nat) (h : n = xs.length) :
    (x :: xs)[n]'(by simp [h]) = (x :: xs).getLast (cons_ne_nil x xs) := by
  rw [getLast_eq_getElem]; cases h; rfl

@[deprecated getElem_cons_length (since := "2024-06-12")]
theorem get_cons_length (x : α) (xs : List α) (n : Nat) (h : n = xs.length) :
    (x :: xs).get ⟨n, by simp [h]⟩ = (x :: xs).getLast (cons_ne_nil x xs) := by
  simp [getElem_cons_length, h]

/-! ### getLast? -/

theorem getLast?_cons : @getLast? α (a::l) = getLastD l a := by
  simp only [getLast?, getLast_eq_getLastD]

@[simp] theorem getLast?_singleton (a : α) : getLast? [a] = a := rfl

theorem getLast?_eq_getLast : ∀ l h, @getLast? α l = some (getLast l h)
  | [], h => nomatch h rfl
  | _::_, _ => rfl

theorem getLast?_eq_getElem? : ∀ (l : List α), getLast? l = l[l.length - 1]?
  | [] => rfl
  | a::l => by
    rw [getLast?_eq_getLast (a::l) nofun, getLast_eq_getElem, getElem?_eq_getElem]

@[deprecated getLast?_eq_getElem? (since := "2024-07-07")]
theorem getLast?_eq_get? (l : List α) : getLast? l = l.get? (l.length - 1) := by
  simp [getLast?_eq_getElem?]

@[simp] theorem getLast?_concat (l : List α) : getLast? (l ++ [a]) = some a := by
  simp [getLast?_eq_getElem?, Nat.succ_sub_succ]

@[simp] theorem getLastD_concat (a b l) : @getLastD α (l ++ [b]) a = b := by
  rw [getLastD_eq_getLast?, getLast?_concat]; rfl

/-! ## Head and tail -/

/-! ### head -/

theorem head!_of_head? [Inhabited α] : ∀ {l : List α}, head? l = some a → head! l = a
  | _a::_l, rfl => rfl

theorem head?_eq_head : ∀ {l} h, @head? α l = some (head l h)
  | _::_, _ => rfl

theorem head?_eq_getElem? : ∀ l : List α, head? l = l[0]?
  | [] => rfl
  | a::l => by simp

@[simp] theorem head?_eq_none_iff : l.head? = none ↔ l = [] := by
  cases l <;> simp

@[simp] theorem head_mem : ∀ {l : List α} (h : l ≠ []), head l h ∈ l
  | [], h => absurd rfl h
  | _::_, _ => .head ..

/-! ### headD -/

/-- `simp` unfolds `headD` in terms of `head?` and `Option.getD`. -/
@[simp] theorem headD_eq_head?_getD {l : List α} : headD l a = (head? l).getD a := by
  cases l <;> simp [headD]

/-! ### tailD -/

/-- `simp` unfolds `tailD` in terms of `tail?` and `Option.getD`. -/
@[simp] theorem tailD_eq_tail? (l l' : List α) : tailD l l' = (tail? l).getD l' := by
  cases l <;> rfl

/-! ### tail -/

@[simp] theorem length_tail (l : List α) : length (tail l) = length l - 1 := by cases l <;> rfl

theorem tail_eq_tailD (l) : @tail α l = tailD l [] := by cases l <;> rfl

theorem tail_eq_tail? (l) : @tail α l = (tail? l).getD [] := by simp [tail_eq_tailD]

/-! ## Basic operations -/

/-! ### map -/

@[simp] theorem map_id (l : List α) : map id l = l := by induction l <;> simp_all

@[simp] theorem map_id' (l : List α) : map (fun a => a) l = l := by induction l <;> simp_all

theorem map_id'' {f : α → α} (h : ∀ x, f x = x) (l : List α) : map f l = l := by
  simp [show f = id from funext h]

theorem map_singleton (f : α → β) (a : α) : map f [a] = [f a] := rfl

@[simp] theorem length_map (as : List α) (f : α → β) : (as.map f).length = as.length := by
  induction as with
  | nil => simp [List.map]
  | cons _ as ih => simp [List.map, ih]

@[simp] theorem getElem?_map (f : α → β) : ∀ (l : List α) (n : Nat), (map f l)[n]? = Option.map f l[n]?
  | [], _ => rfl
  | _ :: _, 0 => by simp
  | _ :: l, n+1 => by simp [getElem?_map f l n]

@[deprecated getElem?_map (since := "2024-06-12")]
theorem get?_map (f : α → β) : ∀ l n, (map f l).get? n = (l.get? n).map f
  | [], _ => rfl
  | _ :: _, 0 => rfl
  | _ :: l, n+1 => get?_map f l n

@[simp] theorem getElem_map (f : α → β) {l} {n : Nat} {h : n < (map f l).length} :
    (map f l)[n] = f (l[n]'(length_map l f ▸ h)) :=
  Option.some.inj <| by rw [← getElem?_eq_getElem, getElem?_map, getElem?_eq_getElem]; rfl

@[deprecated getElem_map (since := "2024-06-12")]
theorem get_map (f : α → β) {l n} :
    get (map f l) n = f (get l ⟨n, length_map l f ▸ n.2⟩) := by
  simp

@[simp] theorem mem_map {f : α → β} : ∀ {l : List α}, b ∈ l.map f ↔ ∃ a, a ∈ l ∧ f a = b
  | [] => by simp
  | _ :: l => by simp [mem_map (l := l), eq_comm (a := b)]

theorem exists_of_mem_map (h : b ∈ map f l) : ∃ a, a ∈ l ∧ f a = b := mem_map.1 h

theorem mem_map_of_mem (f : α → β) (h : a ∈ l) : f a ∈ map f l := mem_map.2 ⟨_, h, rfl⟩

theorem forall_mem_map {f : α → β} {l : List α} {P : β → Prop} :
    (∀ (i) (_ : i ∈ l.map f), P i) ↔ ∀ (j) (_ : j ∈ l), P (f j) := by
  simp

@[deprecated forall_mem_map (since := "2024-07-25")] abbrev forall_mem_map_iff := @forall_mem_map

@[simp] theorem map_inj_left {f g : α → β} : map f l = map g l ↔ ∀ a ∈ l, f a = g a := by
  induction l <;> simp_all

theorem map_congr_left (h : ∀ a ∈ l, f a = g a) : map f l = map g l :=
  map_inj_left.2 h

theorem map_inj : map f = map g ↔ f = g := by
  constructor
  · intro h; ext a; replace h := congrFun h [a]; simpa using h
  · intro h; subst h; rfl

@[simp] theorem map_eq_nil {f : α → β} {l : List α} : map f l = [] ↔ l = [] := by
  constructor <;> exact fun _ => match l with | [] => rfl

theorem eq_nil_of_map_eq_nil {f : α → β} {l : List α} (h : map f l = []) : l = [] :=
  map_eq_nil.mp h

theorem map_eq_cons {f : α → β} {l : List α} :
    map f l = b :: l₂ ↔ l.head?.map f = some b ∧ l.tail?.map (map f) = some l₂ := by
  induction l <;> simp_all

theorem map_eq_cons' {f : α → β} {l : List α} :
    map f l = b :: l₂ ↔ ∃ a l₁, l = a :: l₁ ∧ f a = b ∧ map f l₁ = l₂ := by
  cases l
  case nil => simp
  case cons a l₁ =>
    simp only [map_cons, cons.injEq]
    constructor
    · rintro ⟨rfl, rfl⟩
      exact ⟨a, l₁, ⟨rfl, rfl⟩, ⟨rfl, rfl⟩⟩
    · rintro ⟨a, l₁, ⟨rfl, rfl⟩, ⟨rfl, rfl⟩⟩
      constructor <;> rfl

theorem map_eq_map_iff : map f l = map g l ↔ ∀ a ∈ l, f a = g a := by
  induction l <;> simp

theorem map_eq_iff : map f l = l' ↔ ∀ i : Nat, l'[i]? = l[i]?.map f := by
  constructor
  · rintro rfl i
    simp
  · intro h
    ext1 i
    simp_all

theorem map_eq_foldr (f : α → β) (l : List α) : map f l = foldr (fun a bs => f a :: bs) [] l := by
  induction l <;> simp [*]

@[simp] theorem set_map {f : α → β} {l : List α} {n : Nat} {a : α} :
    (map f l).set n (f a) = map f (l.set n a) := by
  induction l generalizing n with
  | nil => simp
  | cons b l ih => cases n <;> simp_all

@[simp] theorem head_map (f : α → β) (l : List α) (w) :
    head (map f l) w = f (head l (by simpa using w)) := by
  cases l
  · simp at w
  · simp_all

@[simp] theorem head?_map (f : α → β) (l : List α) : head? (map f l) = (head? l).map f := by
  cases l <;> rfl

@[simp] theorem tail?_map (f : α → β) (l : List α) : tail? (map f l) = (tail? l).map (map f) := by
  cases l <;> rfl

theorem headD_map (f : α → β) (l : List α) (a : α) : headD (map f l) (f a) = f (headD l a) := by
  cases l <;> rfl

theorem tailD_map (f : α → β) (l : List α) (l' : List α) :
    tailD (map f l) (map f l') = map f (tailD l l') := by simp

@[simp] theorem getLast_map (f : α → β) (l : List α) (h) :
    getLast (map f l) h = f (getLast l (by simpa using h)) := by
  cases l
  · simp at h
  · simp only [← getElem_cons_length _ _ _ rfl]
    simp only [map_cons]
    simp only [← getElem_cons_length _ _ _ rfl]
    simp only [← map_cons, getElem_map]
    simp

@[simp] theorem getLast?_map (f : α → β) (l : List α) : getLast? (map f l) = (getLast? l).map f := by
  cases l
  · simp
  · rw [getLast?_eq_getLast, getLast?_eq_getLast, getLast_map] <;> simp

theorem getLastD_map (f : α → β) (l : List α) (a : α) : getLastD (map f l) (f a) = f (getLastD l a) := by
  simp

@[simp] theorem map_map (g : β → γ) (f : α → β) (l : List α) :
  map g (map f l) = map (g ∘ f) l := by induction l <;> simp_all

/-! ### filter -/

@[simp] theorem filter_cons_of_pos {p : α → Bool} {a : α} {l} (pa : p a) :
    filter p (a :: l) = a :: filter p l := by rw [filter, pa]

@[simp] theorem filter_cons_of_neg {p : α → Bool} {a : α} {l} (pa : ¬ p a) :
    filter p (a :: l) = filter p l := by rw [filter, eq_false_of_ne_true pa]

theorem filter_cons :
    (x :: xs : List α).filter p = if p x then x :: (xs.filter p) else xs.filter p := by
  split <;> simp [*]

theorem length_filter_le (p : α → Bool) (l : List α) :
    (l.filter p).length ≤ l.length := by
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [filter_cons, length_cons, succ_eq_add_one]
    split
    · simp only [length_cons, succ_eq_add_one]
      exact Nat.succ_le_succ ih
    · exact Nat.le_trans ih (Nat.le_add_right _ _)

@[simp]
theorem filter_eq_self {l} : filter p l = l ↔ ∀ a ∈ l, p a := by
  induction l with simp
  | cons a l ih =>
    cases h : p a <;> simp [*]
    intro h; exact Nat.lt_irrefl _ (h ▸ length_filter_le p l)

@[simp]
theorem filter_length_eq_length {l} : (filter p l).length = l.length ↔ ∀ a ∈ l, p a := by
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [filter_cons, length_cons, succ_eq_add_one, mem_cons, forall_eq_or_imp]
    split <;> rename_i h
    · simp_all [Nat.add_one_inj] -- Why does the simproc not fire here?
    · have := Nat.ne_of_lt (Nat.lt_succ.mpr (length_filter_le p l))
      simp_all

@[simp] theorem mem_filter : x ∈ filter p as ↔ x ∈ as ∧ p x := by
  induction as with
  | nil => simp [filter]
  | cons a as ih =>
    by_cases h : p a
    · simp_all [or_and_left]
    · simp_all [or_and_right]

theorem filter_eq_nil {l} : filter p l = [] ↔ ∀ a, a ∈ l → ¬p a := by
  simp only [eq_nil_iff_forall_not_mem, mem_filter, not_and]

theorem forall_mem_filter {l : List α} {p : α → Bool} {P : α → Prop} :
    (∀ (i) (_ : i ∈ l.filter p), P i) ↔ ∀ (j) (_ : j ∈ l), p j → P j := by
  simp

@[deprecated forall_mem_filter (since := "2024-07-25")] abbrev forall_mem_filter_iff := @forall_mem_filter

@[simp] theorem filter_filter (q) : ∀ l, filter p (filter q l) = filter (fun a => p a ∧ q a) l
  | [] => rfl
  | a :: l => by by_cases hp : p a <;> by_cases hq : q a <;> simp [hp, hq, filter_filter _ l]

theorem filter_map (f : β → α) (l : List β) : filter p (map f l) = map f (filter (p ∘ f) l) := by
  induction l with
  | nil => rfl
  | cons a l IH => by_cases h : p (f a) <;> simp [*]

@[deprecated filter_map (since := "2024-06-15")] abbrev map_filter := @filter_map

theorem map_filter_eq_foldr (f : α → β) (p : α → Bool) (as : List α) :
    map f (filter p as) = foldr (fun a bs => bif p a then f a :: bs else bs) [] as := by
  induction as with
  | nil => rfl
  | cons head _ ih =>
    simp only [foldr]
    cases hp : p head <;> simp [filter, *]

@[simp] theorem filter_append {p : α → Bool} :
    ∀ (l₁ l₂ : List α), filter p (l₁ ++ l₂) = filter p l₁ ++ filter p l₂
  | [], l₂ => rfl
  | a :: l₁, l₂ => by simp [filter]; split <;> simp [filter_append l₁]

theorem filter_eq_cons {l} {a} {as} :
    filter p l = a :: as ↔
      ∃ l₁ l₂, l = l₁ ++ a :: l₂ ∧ (∀ x, x ∈ l₁ → ¬p x) ∧ p a ∧ filter p l₂ = as := by
  constructor
  · induction l with
    | nil => simp
    | cons x l ih =>
      intro h
      simp only [filter_cons] at h
      split at h <;> rename_i w
      · simp only [cons.injEq] at h
        obtain ⟨rfl, rfl⟩ := h
        refine ⟨[], l, ?_⟩
        simp [w]
      · specialize ih h
        obtain ⟨l₁, l₂, rfl, w₁, w₂, w₃⟩ := ih
        refine ⟨x :: l₁, l₂, ?_⟩
        simp_all
  · rintro ⟨l₁, l₂, rfl, h₁, h, h₂⟩
    simp [h₂, filter_cons, filter_eq_nil.mpr h₁, h]

theorem filter_congr {p q : α → Bool} :
    ∀ {l : List α}, (∀ x ∈ l, p x = q x) → filter p l = filter q l
  | [], _ => rfl
  | a :: l, h => by
    rw [forall_mem_cons] at h; by_cases pa : p a
    · simp [pa, h.1 ▸ pa, filter_congr h.2]
    · simp [pa, h.1 ▸ pa, filter_congr h.2]

@[deprecated filter_congr (since := "2024-06-20")] abbrev filter_congr' := @filter_congr

theorem head_filter_of_pos {p : α → Bool} {l : List α} (w : l ≠ []) (h : p (l.head w)) :
    (filter p l).head ((ne_nil_of_mem (mem_filter.2 ⟨head_mem w, h⟩))) = l.head w := by
  cases l with
  | nil => simp
  | cons =>
    simp only [head_cons] at h
    simp [filter_cons, h]

@[simp] theorem filter_sublist {p : α → Bool} : ∀ (l : List α), filter p l <+ l
  | [] => .slnil
  | a :: l => by rw [filter]; split <;> simp [Sublist.cons, Sublist.cons₂, filter_sublist l]

/-! ### filterMap -/

@[simp] theorem filterMap_cons_none {f : α → Option β} {a : α} {l : List α} (h : f a = none) :
    filterMap f (a :: l) = filterMap f l := by simp only [filterMap, h]

@[simp] theorem filterMap_cons_some {f : α → Option β} {a : α} {l : List α} {b : β} (h : f a = some b) :
    filterMap f (a :: l) = b :: filterMap f l := by simp only [filterMap, h]

@[simp]
theorem filterMap_eq_map (f : α → β) : filterMap (some ∘ f) = map f := by
  funext l; induction l <;> simp [*, filterMap_cons]

@[simp] theorem filterMap_some (l : List α) : filterMap some l = l := by
  erw [filterMap_eq_map, map_id]

theorem map_filterMap_some_eq_filter_map_isSome (f : α → Option β) (l : List α) :
    (l.filterMap f).map some = (l.map f).filter fun b => b.isSome := by
  induction l <;> simp [filterMap_cons]; split <;> simp [*]

theorem length_filterMap_le (f : α → Option β) (l : List α) :
    (filterMap f l).length ≤ l.length := by
  rw [← length_map _ some, map_filterMap_some_eq_filter_map_isSome, ← length_map _ f]
  apply length_filter_le

@[simp]
theorem filterMap_length_eq_length {l} :
    (filterMap f l).length = l.length ↔ ∀ a ∈ l, (f a).isSome := by
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [filterMap_cons, length_cons, succ_eq_add_one, mem_cons, forall_eq_or_imp]
    split <;> rename_i h
    · have := Nat.ne_of_lt (Nat.lt_succ.mpr (length_filterMap_le f l))
      simp_all
    · simp_all [Nat.add_one_inj] -- Why does the simproc not fire here?

@[simp]
theorem filterMap_eq_filter (p : α → Bool) :
    filterMap (Option.guard (p ·)) = filter p := by
  funext l
  induction l with
  | nil => rfl
  | cons a l IH => by_cases pa : p a <;> simp [filterMap_cons, Option.guard, pa, ← IH]

theorem filterMap_filterMap (f : α → Option β) (g : β → Option γ) (l : List α) :
    filterMap g (filterMap f l) = filterMap (fun x => (f x).bind g) l := by
  induction l with
  | nil => rfl
  | cons a l IH => cases h : f a <;> simp [filterMap_cons, *]

theorem map_filterMap (f : α → Option β) (g : β → γ) (l : List α) :
    map g (filterMap f l) = filterMap (fun x => (f x).map g) l := by
  simp only [← filterMap_eq_map, filterMap_filterMap, Option.map_eq_bind]

@[simp]
theorem filterMap_map (f : α → β) (g : β → Option γ) (l : List α) :
    filterMap g (map f l) = filterMap (g ∘ f) l := by
  rw [← filterMap_eq_map, filterMap_filterMap]; rfl

theorem filter_filterMap (f : α → Option β) (p : β → Bool) (l : List α) :
    filter p (filterMap f l) = filterMap (fun x => (f x).filter p) l := by
  rw [← filterMap_eq_filter, filterMap_filterMap]
  congr; funext x; cases f x <;> simp [Option.filter, Option.guard]

theorem filterMap_filter (p : α → Bool) (f : α → Option β) (l : List α) :
    filterMap f (filter p l) = filterMap (fun x => if p x then f x else none) l := by
  rw [← filterMap_eq_filter, filterMap_filterMap]
  congr; funext x; by_cases h : p x <;> simp [Option.guard, h]

@[simp] theorem mem_filterMap {f : α → Option β} {l : List α} {b : β} :
    b ∈ filterMap f l ↔ ∃ a, a ∈ l ∧ f a = some b := by
  induction l <;> simp [filterMap_cons]; split <;> simp [*, eq_comm]

theorem forall_mem_filterMap {f : α → Option β} {l : List α} {P : β → Prop} :
    (∀ (i) (_ : i ∈ filterMap f l), P i) ↔ ∀ (j) (_ : j ∈ l) (b), f j = some b → P b := by
  simp only [mem_filterMap, forall_exists_index, and_imp]
  rw [forall_comm]
  apply forall_congr'
  intro a
  rw [forall_comm]

@[deprecated forall_mem_filterMap (since := "2024-07-25")] abbrev forall_mem_filterMap_iff := @forall_mem_filterMap

@[simp] theorem filterMap_append {α β : Type _} (l l' : List α) (f : α → Option β) :
    filterMap f (l ++ l') = filterMap f l ++ filterMap f l' := by
  induction l <;> simp [filterMap_cons]; split <;> simp [*]

theorem map_filterMap_of_inv (f : α → Option β) (g : β → α) (H : ∀ x : α, (f x).map g = some x)
    (l : List α) : map g (filterMap f l) = l := by simp only [map_filterMap, H, filterMap_some]

theorem head_filterMap_of_eq_some {f : α → Option β} {l : List α} (w : l ≠ []) {b : β} (h : f (l.head w) = some b) :
    (filterMap f l).head ((ne_nil_of_mem (mem_filterMap.2 ⟨_, head_mem w, h⟩))) =
      b := by
  cases l with
  | nil => simp at w
  | cons a l =>
    simp only [head_cons] at h
    simp [filterMap_cons, h]

theorem forall_none_of_filterMap_eq_nil (h : filterMap f xs = []) : ∀ x ∈ xs, f x = none := by
  intro x hx
  induction xs with
  | nil => contradiction
  | cons y ys ih =>
    simp only [filterMap_cons] at h
    split at h
    · cases hx with
      | head => assumption
      | tail _ hmem => exact ih h hmem
    · contradiction

theorem filterMap_eq_nil {l} : filterMap f l = [] ↔ ∀ a ∈ l, f a = none := by
  constructor
  · exact forall_none_of_filterMap_eq_nil
  · intro h
    induction l with
    | nil => rfl
    | cons a l ih =>
      simp only [filterMap_cons]
      split
      · apply ih
        simp_all
      · simp_all

theorem filterMap_eq_cons {l} {b} {bs} :
    filterMap f l = b :: bs ↔
      ∃ l₁ a l₂, l = l₁ ++ a :: l₂ ∧ (∀ x, x ∈ l₁ → f x = none) ∧ f a = some b ∧
        filterMap f l₂ = bs := by
  constructor
  · induction l with
    | nil => simp
    | cons a l ih =>
      cases h : f a with
      | none =>
        simp only [filterMap_cons_none h]
        intro w
        specialize ih w
        obtain ⟨l₁, a', l₂, rfl, w₁, w₂, w₃⟩ := ih
        exact ⟨a :: l₁, a', l₂, by simp_all⟩
      | some b =>
        simp only [filterMap_cons_some h, cons.injEq, and_imp]
        rintro rfl rfl
        refine ⟨[], a, l, by simp [h]⟩
  · rintro ⟨l₁, a, l₂, rfl, h₁, h₂, h₃⟩
    simp_all [filterMap_eq_nil.mpr h₁, filterMap_cons_some h₂]

/-! ### append -/

theorem getElem?_append_right : ∀ {l₁ l₂ : List α} {n : Nat}, l₁.length ≤ n →
  (l₁ ++ l₂)[n]? = l₂[n - l₁.length]?
| [], _, n, _ => rfl
| a :: l, _, n+1, h₁ => by
  rw [cons_append]
  simp [Nat.succ_sub_succ_eq_sub, getElem?_append_right (Nat.lt_succ.1 h₁)]

@[deprecated getElem?_append_right (since := "2024-06-12")]
theorem get?_append_right {l₁ l₂ : List α} {n : Nat} (h : l₁.length ≤ n) :
    (l₁ ++ l₂).get? n = l₂.get? (n - l₁.length) := by
  simp [getElem?_append_right, h]

theorem getElem_append_right' {l₁ l₂ : List α} {n : Nat} (h₁ : l₁.length ≤ n) (h₂) :
    (l₁ ++ l₂)[n]'h₂ =
      l₂[n - l₁.length]'(by rw [length_append] at h₂; exact Nat.sub_lt_left_of_lt_add h₁ h₂) :=
  Option.some.inj <| by rw [← getElem?_eq_getElem, ← getElem?_eq_getElem, getElem?_append_right h₁]

theorem getElem_append_right'' (l₁ : List α) {l₂ : List α} {n : Nat} (hn : n < l₂.length) :
    l₂[n] = (l₁ ++ l₂)[n + l₁.length]'(by simpa [Nat.add_comm] using Nat.add_lt_add_left hn _) := by
  rw [getElem_append_right] <;> simp [*, le_add_left]

@[deprecated (since := "2024-06-12")]
theorem get_append_right_aux {l₁ l₂ : List α} {n : Nat}
  (h₁ : l₁.length ≤ n) (h₂ : n < (l₁ ++ l₂).length) : n - l₁.length < l₂.length := by
  rw [length_append] at h₂
  exact Nat.sub_lt_left_of_lt_add h₁ h₂

set_option linter.deprecated false in
@[deprecated getElem_append_right' (since := "2024-06-12")]
theorem get_append_right' {l₁ l₂ : List α} {n : Nat} (h₁ : l₁.length ≤ n) (h₂) :
    (l₁ ++ l₂).get ⟨n, h₂⟩ = l₂.get ⟨n - l₁.length, get_append_right_aux h₁ h₂⟩ :=
  Option.some.inj <| by rw [← get?_eq_get, ← get?_eq_get, get?_append_right h₁]

theorem getElem_of_append {l : List α} (eq : l = l₁ ++ a :: l₂) (h : l₁.length = n) :
    l[n]'(eq ▸ h ▸ by simp_arith) = a := Option.some.inj <| by
  rw [← getElem?_eq_getElem, eq, getElem?_append_right (h ▸ Nat.le_refl _), h]
  simp

@[deprecated (since := "2024-06-12")]
theorem get_of_append_proof {l : List α}
    (eq : l = l₁ ++ a :: l₂) (h : l₁.length = n) : n < length l := eq ▸ h ▸ by simp_arith

set_option linter.deprecated false in
@[deprecated getElem_of_append (since := "2024-06-12")]
theorem get_of_append {l : List α} (eq : l = l₁ ++ a :: l₂) (h : l₁.length = n) :
    l.get ⟨n, get_of_append_proof eq h⟩ = a := Option.some.inj <| by
  rw [← get?_eq_get, eq, get?_append_right (h ▸ Nat.le_refl _), h, Nat.sub_self]; rfl

theorem append_of_mem {a : α} {l : List α} : a ∈ l → ∃ s t : List α, l = s ++ a :: t
  | .head l => ⟨[], l, rfl⟩
  | .tail b h => let ⟨s, t, h'⟩ := append_of_mem h; ⟨b::s, t, by rw [h', cons_append]⟩

@[simp 1100] theorem singleton_append : [x] ++ l = x :: l := rfl

theorem append_inj :
    ∀ {s₁ s₂ t₁ t₂ : List α}, s₁ ++ t₁ = s₂ ++ t₂ → length s₁ = length s₂ → s₁ = s₂ ∧ t₁ = t₂
  | [], [], t₁, t₂, h, _ => ⟨rfl, h⟩
  | a :: s₁, b :: s₂, t₁, t₂, h, hl => by
    simp [append_inj (cons.inj h).2 (Nat.succ.inj hl)] at h ⊢; exact h

theorem append_inj_right (h : s₁ ++ t₁ = s₂ ++ t₂) (hl : length s₁ = length s₂) : t₁ = t₂ :=
  (append_inj h hl).right

theorem append_inj_left (h : s₁ ++ t₁ = s₂ ++ t₂) (hl : length s₁ = length s₂) : s₁ = s₂ :=
  (append_inj h hl).left

theorem append_inj' (h : s₁ ++ t₁ = s₂ ++ t₂) (hl : length t₁ = length t₂) : s₁ = s₂ ∧ t₁ = t₂ :=
  append_inj h <| @Nat.add_right_cancel _ (length t₁) _ <| by
  let hap := congrArg length h; simp only [length_append, ← hl] at hap; exact hap

theorem append_inj_right' (h : s₁ ++ t₁ = s₂ ++ t₂) (hl : length t₁ = length t₂) : t₁ = t₂ :=
  (append_inj' h hl).right

theorem append_inj_left' (h : s₁ ++ t₁ = s₂ ++ t₂) (hl : length t₁ = length t₂) : s₁ = s₂ :=
  (append_inj' h hl).left

theorem append_right_inj {t₁ t₂ : List α} (s) : s ++ t₁ = s ++ t₂ ↔ t₁ = t₂ :=
  ⟨fun h => append_inj_right h rfl, congrArg _⟩

theorem append_left_inj {s₁ s₂ : List α} (t) : s₁ ++ t = s₂ ++ t ↔ s₁ = s₂ :=
  ⟨fun h => append_inj_left' h rfl, congrArg (· ++ _)⟩

@[simp] theorem append_eq_nil : p ++ q = [] ↔ p = [] ∧ q = [] := by
  cases p <;> simp

@[simp] theorem getLast_concat {a : α} : ∀ (l : List α), getLast (l ++ [a]) (by simp) = a
  | [] => rfl
  | a::t => by
    simp [getLast_cons _, getLast_concat t]

theorem getElem_append : ∀ {l₁ l₂ : List α} (n : Nat) (h : n < l₁.length),
    (l₁ ++ l₂)[n]'(length_append .. ▸ Nat.lt_add_right _ h) = l₁[n]
| a :: l, _, 0, h => rfl
| a :: l, _, n+1, h => by simp only [get, cons_append]; apply getElem_append

@[deprecated getElem_append (since := "2024-06-12")]
theorem get_append {l₁ l₂ : List α} (n : Nat) (h : n < l₁.length) :
    (l₁ ++ l₂).get ⟨n, length_append .. ▸ Nat.lt_add_right _ h⟩ = l₁.get ⟨n, h⟩ := by
  simp [getElem_append, h]

@[deprecated getElem_append_left (since := "2024-06-12")]
theorem get_append_left (as bs : List α) (h : i < as.length) {h'} :
    (as ++ bs).get ⟨i, h'⟩ = as.get ⟨i, h⟩ := by
  simp [getElem_append_left, h, h']

@[deprecated getElem_append_right (since := "2024-06-12")]
theorem get_append_right (as bs : List α) (h : ¬ i < as.length) {h' h''} :
    (as ++ bs).get ⟨i, h'⟩ = bs.get ⟨i - as.length, h''⟩ := by
  simp [getElem_append_right, h, h', h'']

theorem getElem?_append {l₁ l₂ : List α} {n : Nat} (hn : n < l₁.length) :
    (l₁ ++ l₂)[n]? = l₁[n]? := by
  have hn' : n < (l₁ ++ l₂).length := Nat.lt_of_lt_of_le hn <|
    length_append .. ▸ Nat.le_add_right ..
  simp_all [getElem?_eq_getElem, getElem_append]

@[deprecated (since := "2024-06-12")]
theorem get?_append {l₁ l₂ : List α} {n : Nat} (hn : n < l₁.length) :
    (l₁ ++ l₂).get? n = l₁.get? n := by
  simp [getElem?_append hn]

@[simp] theorem head_append_of_ne_nil {l : List α} (w : l ≠ []) :
    head (l ++ l') (by simp_all) = head l w := by
  match l, w with
  | a :: l, _ => rfl

theorem head_append {l₁ l₂ : List α} (w : l₁ ++ l₂ ≠ []) :
    head (l₁ ++ l₂) w =
      if h : l₁.isEmpty then
        head l₂ (by simp_all [isEmpty_iff])
      else
        head l₁ (by simp_all [isEmpty_iff]) := by
  split <;> rename_i h
  · simp [isEmpty_iff] at h
    subst h
    simp
  · simp [isEmpty_iff] at h
    simp [h]

@[simp] theorem head?_append {l : List α} : (l ++ l').head? = l.head?.or l'.head? := by
  cases l <;> rfl

-- Note:
-- `getLast_append_of_ne_nil`, `getLast_append` and `getLast?_append`
-- are stated and proved later in the `reverse` section.

@[simp] theorem nil_eq_append : [] = a ++ b ↔ a = [] ∧ b = [] := by
  rw [eq_comm, append_eq_nil]

theorem append_ne_nil_of_left_ne_nil {s : List α} (h : s ≠ []) (t : List α) : s ++ t ≠ [] := by simp_all
theorem append_ne_nil_of_right_ne_nil (s : List α) : t ≠ [] → s ++ t ≠ [] := by simp_all

@[deprecated append_ne_nil_of_left_ne_nil (since := "2024-07-24")]
theorem append_ne_nil_of_ne_nil_left {s : List α} (h : s ≠ []) (t : List α) : s ++ t ≠ [] := by simp_all
@[deprecated append_ne_nil_of_right_ne_nil (since := "2024-07-24")]
theorem append_ne_nil_of_ne_nil_right (s : List α) : t ≠ [] → s ++ t ≠ [] := by simp_all

theorem append_eq_cons :
    a ++ b = x :: c ↔ (a = [] ∧ b = x :: c) ∨ (∃ a', a = x :: a' ∧ c = a' ++ b) := by
  cases a with simp | cons a as => ?_
  exact ⟨fun h => ⟨as, by simp [h]⟩, fun ⟨a', ⟨aeq, aseq⟩, h⟩ => ⟨aeq, by rw [aseq, h]⟩⟩

theorem cons_eq_append :
    x :: c = a ++ b ↔ (a = [] ∧ b = x :: c) ∨ (∃ a', a = x :: a' ∧ c = a' ++ b) := by
  rw [eq_comm, append_eq_cons]

theorem append_eq_append_iff {a b c d : List α} :
    a ++ b = c ++ d ↔ (∃ a', c = a ++ a' ∧ b = a' ++ d) ∨ ∃ c', a = c ++ c' ∧ d = c' ++ b := by
  induction a generalizing c with
  | nil => simp_all
  | cons a as ih => cases c <;> simp [eq_comm, and_assoc, ih, and_or_left]

@[simp] theorem mem_append {a : α} {s t : List α} : a ∈ s ++ t ↔ a ∈ s ∨ a ∈ t := by
  induction s <;> simp_all [or_assoc]

theorem not_mem_append {a : α} {s t : List α} (h₁ : a ∉ s) (h₂ : a ∉ t) : a ∉ s ++ t :=
  mt mem_append.1 $ not_or.mpr ⟨h₁, h₂⟩

theorem mem_append_eq (a : α) (s t : List α) : (a ∈ s ++ t) = (a ∈ s ∨ a ∈ t) :=
  propext mem_append

theorem mem_append_left {a : α} {l₁ : List α} (l₂ : List α) (h : a ∈ l₁) : a ∈ l₁ ++ l₂ :=
  mem_append.2 (Or.inl h)

theorem mem_append_right {a : α} (l₁ : List α) {l₂ : List α} (h : a ∈ l₂) : a ∈ l₁ ++ l₂ :=
  mem_append.2 (Or.inr h)

theorem mem_iff_append {a : α} {l : List α} : a ∈ l ↔ ∃ s t : List α, l = s ++ a :: t :=
  ⟨append_of_mem, fun ⟨s, t, e⟩ => e ▸ by simp⟩

theorem forall_mem_append {p : α → Prop} {l₁ l₂ : List α} :
    (∀ (x) (_ : x ∈ l₁ ++ l₂), p x) ↔ (∀ (x) (_ : x ∈ l₁), p x) ∧ (∀ (x) (_ : x ∈ l₂), p x) := by
  simp only [mem_append, or_imp, forall_and]

theorem set_append {s t : List α} :
    (s ++ t).set i x = if i < s.length then s.set i x ++ t else s ++ t.set (i - s.length) x := by
  induction s generalizing i with
  | nil => simp
  | cons a as ih => cases i with
    | zero => simp
    | succ i =>
      simp [Nat.add_one_lt_add_one_iff, ih]
      split
      · rfl
      · congr 3; rw [Nat.add_sub_add_right]

@[simp] theorem set_append_left {s t : List α} (i : Nat) (x : α) (h : i < s.length) :
    (s ++ t).set i x = s.set i x ++ t := by
  simp [set_append, h]

@[simp] theorem set_append_right {s t : List α} (i : Nat) (x : α) (h : ¬ i < s.length) :
    (s ++ t).set i x = s ++ t.set (i - s.length) x := by
  simp [set_append, h]

@[simp] theorem foldrM_append [Monad m] [LawfulMonad m] (f : α → β → m β) (b) (l l' : List α) :
    (l ++ l').foldrM f b = l'.foldrM f b >>= l.foldrM f := by
  induction l <;> simp [*]

@[simp] theorem foldl_append {β : Type _} (f : β → α → β) (b) (l l' : List α) :
    (l ++ l').foldl f b = l'.foldl f (l.foldl f b) := by simp [foldl_eq_foldlM]

@[simp] theorem foldr_append (f : α → β → β) (b) (l l' : List α) :
    (l ++ l').foldr f b = l.foldr f (l'.foldr f b) := by simp [foldr_eq_foldrM]

@[simp] theorem map_append (f : α → β) : ∀ l₁ l₂, map f (l₁ ++ l₂) = map f l₁ ++ map f l₂ := by
  intro l₁; induction l₁ <;> intros <;> simp_all

/-! ### concat

Note that `concat_eq_append` is a `@[simp]` lemma, so `concat` should usually not appear in goals.
As such there's no need for a thorough set of lemmas describing `concat`.
-/

-- As `List.concat` is defined in `Init.Prelude`, we write the basic simplification lemmas here.
theorem concat_nil (a : α) : concat [] a = [a] :=
  rfl
theorem concat_cons (a b : α) (l : List α) : concat (a :: l) b = a :: concat l b :=
  rfl

theorem init_eq_of_concat_eq {a b : α} {l₁ l₂ : List α} : concat l₁ a = concat l₂ b → l₁ = l₂ := by
  simp only [concat_eq_append]
  intro h
  apply append_inj_left' h (by simp)

theorem last_eq_of_concat_eq {a b : α} {l₁ l₂ : List α} : concat l₁ a = concat l₂ b → a = b := by
  simp only [concat_eq_append]
  intro h
  simpa using append_inj_right' h (by simp)

theorem concat_inj_left {l l' : List α} (a : α) : concat l a = concat l' a ↔ l = l' :=
  ⟨init_eq_of_concat_eq, by simp⟩

theorem concat_eq_concat {l l' : List α} {a b : α} : concat l a = concat l' b ↔ l = l' ∧ a = b :=
  ⟨fun h => ⟨init_eq_of_concat_eq h, last_eq_of_concat_eq h⟩, by rintro ⟨rfl, rfl⟩; rfl⟩

theorem concat_ne_nil (a : α) (l : List α) : concat l a ≠ [] := by cases l <;> simp

theorem concat_append (a : α) (l₁ l₂ : List α) : concat l₁ a ++ l₂ = l₁ ++ a :: l₂ := by simp

theorem append_concat (a : α) (l₁ l₂ : List α) : l₁ ++ concat l₂ a = concat (l₁ ++ l₂) a := by simp

theorem map_concat (f : α → β) (a : α) (l : List α) : map f (concat l a) = concat (map f l) (f a) := by
  induction l with
  | nil => rfl
  | cons x xs ih => simp [ih]

theorem eq_nil_or_concat : ∀ l : List α, l = [] ∨ ∃ L b, l = concat L b
  | [] => .inl rfl
  | a::l => match l, eq_nil_or_concat l with
    | _, .inl rfl => .inr ⟨[], a, rfl⟩
    | _, .inr ⟨L, b, rfl⟩ => .inr ⟨a::L, b, rfl⟩

/-! ### join -/

@[simp] theorem length_join (L : List (List α)) : (join L).length = Nat.sum (L.map length) := by
  induction L with
  | nil => rfl
  | cons =>
    simp [join, length_append, *]

@[simp] theorem mem_join : ∀ {L : List (List α)}, a ∈ L.join ↔ ∃ l, l ∈ L ∧ a ∈ l
  | [] => by simp
  | b :: l => by simp [mem_join, or_and_right, exists_or]

@[simp] theorem join_eq_nil_iff {L : List (List α)} : L.join = [] ↔ ∀ l ∈ L, l = [] := by
  induction L <;> simp_all

theorem exists_of_mem_join : a ∈ join L → ∃ l, l ∈ L ∧ a ∈ l := mem_join.1

theorem mem_join_of_mem (lL : l ∈ L) (al : a ∈ l) : a ∈ join L := mem_join.2 ⟨l, lL, al⟩

theorem forall_mem_join {p : α → Prop} {L : List (List α)} :
    (∀ (x) (_ : x ∈ join L), p x) ↔ ∀ (l) (_ : l ∈ L) (x) (_ : x ∈ l), p x := by
  simp only [mem_join, forall_exists_index, and_imp]
  constructor <;> (intros; solve_by_elim)

theorem join_eq_bind {L : List (List α)} : join L = L.bind id := by
  induction L <;> simp [List.bind]

theorem head?_join {L : List (List α)} : (join L).head? = L.findSome? fun l => l.head? := by
  induction L with
  | nil => rfl
  | cons =>
    simp only [findSome?_cons]
    split <;> simp_all

-- `getLast?_join` is proved later, after the `reverse` section

theorem foldl_join (f : β → α → β) (b : β) (L : List (List α)) :
    (join L).foldl f b = L.foldl (fun b l => l.foldl f b) b := by
  induction L generalizing b <;> simp_all

theorem foldr_join (f : α → β → β) (b : β) (L : List (List α)) :
    (join L).foldr f b = L.foldr (fun l b => l.foldr f b) b := by
  induction L <;> simp_all

@[simp] theorem map_join (f : α → β) (L : List (List α)) : map f (join L) = join (map (map f) L) := by
  induction L <;> simp_all

@[simp] theorem filterMap_join (f : α → Option β) (L : List (List α)) :
    filterMap f (join L) = join (map (filterMap f) L) := by
  induction L <;> simp [*, filterMap_append]

@[simp] theorem filter_join (p : α → Bool) (L : List (List α)) :
    filter p (join L) = join (map (filter p) L) := by
  induction L <;> simp [*, filter_append]

@[simp] theorem join_append (L₁ L₂ : List (List α)) : join (L₁ ++ L₂) = join L₁ ++ join L₂ := by
  induction L₁ <;> simp_all

theorem join_concat (L : List (List α)) (l : List α) : join (L ++ [l]) = join L ++ l := by
  simp

theorem join_join {L : List (List (List α))} : join (join L) = join (map join L) := by
  induction L <;> simp_all

/-! ### bind -/

theorem bind_def (l : List α) (f : α → List β) : l.bind f = join (map f l) := by rfl

@[simp] theorem bind_id (l : List (List α)) : List.bind l id = l.join := by simp [bind_def]

@[simp] theorem mem_bind {f : α → List β} {b} {l : List α} : b ∈ l.bind f ↔ ∃ a, a ∈ l ∧ b ∈ f a := by
  simp [bind_def, mem_join]
  exact ⟨fun ⟨_, ⟨a, h₁, rfl⟩, h₂⟩ => ⟨a, h₁, h₂⟩, fun ⟨a, h₁, h₂⟩ => ⟨_, ⟨a, h₁, rfl⟩, h₂⟩⟩

theorem exists_of_mem_bind {b : β} {l : List α} {f : α → List β} :
    b ∈ l.bind f → ∃ a, a ∈ l ∧ b ∈ f a := mem_bind.1

theorem mem_bind_of_mem {b : β} {l : List α} {f : α → List β} {a} (al : a ∈ l) (h : b ∈ f a) :
    b ∈ l.bind f := mem_bind.2 ⟨a, al, h⟩

theorem forall_mem_bind {p : β → Prop} {l : List α} {f : α → List β} :
    (∀ (x) (_ : x ∈ l.bind f), p x) ↔ ∀ (a) (_ : a ∈ l) (b) (_ : b ∈ f a), p b := by
  simp only [mem_bind, forall_exists_index, and_imp]
  constructor <;> (intros; solve_by_elim)

theorem bind_singleton (f : α → List β) (x : α) : [x].bind f = f x :=
  append_nil (f x)

@[simp] theorem bind_singleton' (l : List α) : (l.bind fun x => [x]) = l := by
  induction l <;> simp [*]

theorem head?_bind {l : List α} {f : α → List β} :
    (l.bind f).head? = l.findSome? fun a => (f a).head? := by
  induction l with
  | nil => rfl
  | cons =>
    simp only [findSome?_cons]
    split <;> simp_all

@[simp] theorem bind_append (xs ys : List α) (f : α → List β) :
    (xs ++ ys).bind f = xs.bind f ++ ys.bind f := by
  induction xs; {rfl}; simp_all [bind_cons, append_assoc]

@[deprecated bind_append (since := "2024-07-24")] abbrev append_bind := @bind_append

theorem bind_assoc {α β} (l : List α) (f : α → List β) (g : β → List γ) :
    (l.bind f).bind g = l.bind fun x => (f x).bind g := by
  induction l <;> simp [*]

theorem map_bind (f : β → γ) (g : α → List β) :
    ∀ l : List α, (l.bind g).map f = l.bind fun a => (g a).map f
  | [] => rfl
  | a::l => by simp only [bind_cons, map_append, map_bind _ _ l]

theorem bind_map (f : α → β) (g : β → List γ) (l : List α) : (map f l).bind g = l.bind (fun a => g (f a)) := by
  induction l <;> simp [bind_cons, *]

theorem map_eq_bind {α β} (f : α → β) (l : List α) : map f l = l.bind fun x => [f x] := by
  simp only [← map_singleton]
  rw [← bind_singleton' l, map_bind, bind_singleton']

theorem filterMap_bind {β γ} (l : List α) (g : α → List β) (f : β → Option γ):
    (l.bind g).filterMap f = l.bind fun a => (g a).filterMap f := by
  induction l <;> simp [*]

theorem filter_bind (l : List α) (g : α → List β) (f : β → Bool) :
    (l.bind g).filter f = l.bind fun a => (g a).filter f := by
  induction l <;> simp [*]

theorem bind_eq_foldl (f : α → List β) (l : List α) :
    l.bind f = l.foldl (fun acc a => acc ++ f a) [] := by
  suffices ∀ l', l' ++ l.bind f = l.foldl (fun acc a => acc ++ f a) l' by simpa using this []
  intro l'
  induction l generalizing l'
  · simp
  · next ih => rw [bind_cons, ← append_assoc, ih, foldl_cons]

/-! ### replicate -/

@[simp] theorem replicate_one : replicate 1 a = [a] := rfl

@[simp] theorem contains_replicate [BEq α] {n : Nat} {a b : α} :
    (replicate n b).contains a = (a == b && !n == 0) := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, elem_cons]
    split <;> simp_all

@[simp] theorem decide_mem_replicate [BEq α] [LawfulBEq α] {a b : α} :
    ∀ {n}, decide (b ∈ replicate n a) = ((¬ n == 0) && b == a)
  | 0 => by simp
  | n+1 => by simp [replicate_succ, decide_mem_replicate, Nat.succ_ne_zero]

@[simp] theorem mem_replicate {a b : α} : ∀ {n}, b ∈ replicate n a ↔ n ≠ 0 ∧ b = a
  | 0 => by simp
  | n+1 => by simp [replicate_succ, mem_replicate, Nat.succ_ne_zero]

theorem eq_of_mem_replicate {a b : α} {n} (h : b ∈ replicate n a) : b = a := (mem_replicate.1 h).2

theorem forall_mem_replicate {p : α → Prop} {a : α} {n} :
    (∀ b, b ∈ replicate n a → p b) ↔ n = 0 ∨ p a := by
  cases n <;> simp [mem_replicate]

@[simp] theorem replicate_succ_ne_nil (n : Nat) (a : α) : replicate (n+1) a ≠ [] := by
  simp [replicate_succ]

@[simp] theorem getElem_replicate (a : α) {n : Nat} {m} (h : m < (replicate n a).length) :
    (replicate n a)[m] = a :=
  eq_of_mem_replicate (get_mem _ _ _)

@[deprecated getElem_replicate (since := "2024-06-12")]
theorem get_replicate (a : α) {n : Nat} (m : Fin _) : (replicate n a).get m = a := by
  simp

theorem getElem?_replicate : (replicate n a)[m]? = if m < n then some a else none := by
  by_cases h : m < n
  · rw [getElem?_eq_getElem (by simpa), getElem_replicate, if_pos h]
  · rw [getElem?_eq_none (by simpa using h), if_neg h]

@[simp] theorem getElem?_replicate_of_lt {n : Nat} {m : Nat} (h : m < n) : (replicate n a)[m]? = some a := by
  simp [getElem?_replicate, h]

theorem head?_replicate (a : α) (n : Nat) : (replicate n a).head? = if n = 0 then none else some a := by
  cases n <;> simp [replicate_succ]

@[simp] theorem head_replicate (w : replicate n a ≠ []) : (replicate n a).head w = a := by
  cases n
  · simp at w
  · simp_all [replicate_succ]

@[simp] theorem replicate_inj : replicate n a = replicate m b ↔ n = m ∧ (n = 0 ∨ a = b) :=
  ⟨fun h => have eq : n = m := by simpa using congrArg length h
    ⟨eq, by
    subst eq
    by_cases w : n = 0
    · simp_all
    · right
      have p := congrArg (·[0]?) h
      replace w : 0 < n := by exact zero_lt_of_ne_zero w
      simp only [getElem?_replicate, if_pos w] at p
      simp_all⟩,
    by rintro ⟨rfl, rfl | rfl⟩ <;> rfl⟩

theorem eq_replicate_of_mem {a : α} :
    ∀ {l : List α}, (∀ (b) (_ : b ∈ l), b = a) → l = replicate l.length a
  | [], _ => rfl
  | b :: l, H => by
    let ⟨rfl, H₂⟩ := forall_mem_cons (l := l).1 H
    rw [length_cons, replicate, ← eq_replicate_of_mem H₂]

theorem eq_replicate {a : α} {n} {l : List α} :
    l = replicate n a ↔ length l = n ∧ ∀ (b) (_ : b ∈ l), b = a :=
  ⟨fun h => h ▸ ⟨length_replicate .., fun _ => eq_of_mem_replicate⟩,
   fun ⟨e, al⟩ => e ▸ eq_replicate_of_mem al⟩

theorem map_eq_replicate_iff {l : List α} {f : α → β} {b : β} :
    l.map f = replicate l.length b ↔ ∀ x ∈ l, f x = b := by
  simp [eq_replicate]

@[simp] theorem map_const (l : List α) (b : β) : map (Function.const α b) l = replicate l.length b :=
  map_eq_replicate_iff.mpr fun _ _ => rfl

-- This can not be a `@[simp]` lemma because it would fire on every `List.map`.
theorem map_const' (l : List α) (b : β) : map (fun _ => b) l = replicate l.length b :=
  map_const l b

@[simp] theorem append_replicate_replicate : replicate n a ++ replicate m a = replicate (n + m) a := by
  rw [eq_replicate]
  constructor
  · simp
  · intro b
    simp only [mem_append, mem_replicate, ne_eq]
    rintro (⟨-, rfl⟩ | ⟨_, rfl⟩) <;> rfl

@[simp] theorem map_replicate : (replicate n a).map f = replicate n (f a) := by
  ext1 n
  simp only [getElem?_map, getElem?_replicate]
  split <;> simp

theorem filter_replicate : (replicate n a).filter p = if p a then replicate n a else [] := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, filter_cons]
    split <;> simp_all

@[simp] theorem filter_replicate_of_pos (h : p a) : (replicate n a).filter p = replicate n a := by
  simp [filter_replicate, h]

@[simp] theorem filter_replicate_of_neg (h : ¬ p a) : (replicate n a).filter p = [] := by
  simp [filter_replicate, h]

theorem filterMap_replicate {f : α → Option β} :
    (replicate n a).filterMap f = match f a with | none => [] | .some b => replicate n b := by
  induction n with
  | zero => split <;> simp
  | succ n ih =>
    simp only [replicate_succ, filterMap_cons]
    split <;> simp_all

-- This is not a useful `simp` lemma because `b` is unknown.
theorem filterMap_replicate_of_some {f : α → Option β} (h : f a = some b) :
    (replicate n a).filterMap f = replicate n b := by
  simp [filterMap_replicate, h]

@[simp] theorem filterMap_replicate_of_isSome {f : α → Option β} (h : (f a).isSome) :
    (replicate n a).filterMap f = replicate n (Option.get _ h) := by
  rw [Option.isSome_iff_exists] at h
  obtain ⟨b, h⟩ := h
  simp [filterMap_replicate, h]

@[simp] theorem filterMap_replicate_of_none {f : α → Option β} (h : f a = none) :
    (replicate n a).filterMap f = [] := by
  simp [filterMap_replicate, h]

@[simp] theorem join_replicate_nil : (replicate n ([] : List α)).join = [] := by
  induction n <;> simp_all [replicate_succ]

@[simp] theorem join_replicate_singleton : (replicate n [a]).join = replicate n a := by
  induction n <;> simp_all [replicate_succ]

@[simp] theorem join_replicate_replicate : (replicate n (replicate m a)).join = replicate (n * m) a := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, join_cons, ih, append_replicate_replicate, replicate_inj, or_true,
      and_true, add_one_mul, Nat.add_comm]

theorem bind_replicate {β} (f : α → List β) : (replicate n a).bind f = (replicate n (f a)).join := by
  induction n with
  | zero => simp
  | succ n ih => simp only [replicate_succ, bind_cons, ih, join_cons]

@[simp] theorem isEmpty_replicate : (replicate n a).isEmpty = decide (n = 0) := by
  cases n <;> simp [replicate_succ]

/-! ### reverse -/

@[simp] theorem length_reverse (as : List α) : (as.reverse).length = as.length := by
  induction as with
  | nil => rfl
  | cons a as ih => simp [ih]

@[simp] theorem mem_reverseAux {x : α} : ∀ {as bs}, x ∈ reverseAux as bs ↔ x ∈ as ∨ x ∈ bs
  | [], _ => ⟨.inr, fun | .inr h => h⟩
  | a :: _, _ => by rw [reverseAux, mem_cons, or_assoc, or_left_comm, mem_reverseAux, mem_cons]

@[simp] theorem mem_reverse {x : α} {as : List α} : x ∈ reverse as ↔ x ∈ as := by simp [reverse]

@[simp] theorem reverse_eq_nil_iff {xs : List α} : xs.reverse = [] ↔ xs = [] := by
  match xs with
  | [] => simp
  | x :: xs => simp

theorem getElem?_reverse' : ∀ {l : List α} (i j), i + j + 1 = length l →
    l.reverse[i]? = l[j]?
  | [], _, _, _ => rfl
  | a::l, i, 0, h => by simp [Nat.succ.injEq] at h; simp [h, getElem?_append_right, Nat.succ.injEq]
  | a::l, i, j+1, h => by
    have := Nat.succ.inj h; simp at this ⊢
    rw [getElem?_append, getElem?_reverse' _ _ this]
    rw [length_reverse, ← this]; apply Nat.lt_add_of_pos_right (Nat.succ_pos _)

@[deprecated getElem?_reverse' (since := "2024-06-12")]
theorem get?_reverse' {l : List α} (i j) (h : i + j + 1 = length l) : get? l.reverse i = get? l j := by
  simp [getElem?_reverse' _ _ h]

theorem getElem?_reverse {l : List α} {i} (h : i < length l) :
    l.reverse[i]? = l[l.length - 1 - i]? :=
  getElem?_reverse' _ _ <| by
    rw [Nat.add_sub_of_le (Nat.le_sub_one_of_lt h),
      Nat.sub_add_cancel (Nat.lt_of_le_of_lt (Nat.zero_le _) h)]

@[deprecated getElem?_reverse (since := "2024-06-12")]
theorem get?_reverse {l : List α} {i} (h : i < length l) :
    get? l.reverse i = get? l (l.length - 1 - i) := by
  simp [getElem?_reverse h]

theorem reverseAux_reverseAux_nil (as bs : List α) : reverseAux (reverseAux as bs) [] = reverseAux bs as := by
  induction as generalizing bs with
  | nil => rfl
  | cons a as ih => simp [reverseAux, ih]

@[simp] theorem reverse_reverse (as : List α) : as.reverse.reverse = as := by
  simp only [reverse]; rw [reverseAux_reverseAux_nil]; rfl

theorem reverse_eq_iff {as bs : List α} : as.reverse = bs ↔ as = bs.reverse := by
  constructor <;> (rintro rfl; simp)

@[simp] theorem getLast?_reverse (l : List α) : l.reverse.getLast? = l.head? := by cases l <;> simp

@[simp] theorem head?_reverse (l : List α) : l.reverse.head? = l.getLast? := by
  rw [← getLast?_reverse, reverse_reverse]

@[simp] theorem map_reverse (f : α → β) (l : List α) : l.reverse.map f = (l.map f).reverse := by
  induction l <;> simp [*]

@[deprecated map_reverse (since := "2024-06-20")]
theorem reverse_map (f : α → β) (l : List α) : (l.map f).reverse = l.reverse.map f := by
  simp

@[simp] theorem filter_reverse (p : α → Bool) (l : List α) : (l.reverse.filter p) = (l.filter p).reverse := by
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [reverse_cons, filter_append, filter_cons, ih]
    split <;> simp_all

@[simp] theorem filterMap_reverse (f : α → Option β) (l : List α) : (l.reverse.filterMap f) = (l.filterMap f).reverse := by
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [reverse_cons, filterMap_append, filterMap_cons, ih]
    split <;> simp_all

@[simp] theorem reverse_append (as bs : List α) : (as ++ bs).reverse = bs.reverse ++ as.reverse := by
  induction as <;> simp_all

theorem reverse_concat (l : List α) (a : α) : (l.concat a).reverse = a :: l.reverse := by
  rw [concat_eq_append, reverse_append]; rfl

/-- Reversing a join is the same as reversing the order of parts and reversing all parts. -/
theorem reverse_join (L : List (List α)) :
    L.join.reverse = (L.map reverse).reverse.join := by
  induction L <;> simp_all

/-- Joining a reverse is the same as reversing all parts and reversing the joined result. -/
theorem join_reverse (L : List (List α)) :
    L.reverse.join = (L.map reverse).join.reverse := by
  induction L <;> simp_all

theorem reverse_bind {β} (l : List α) (f : α → List β) : (l.bind f).reverse = l.reverse.bind (reverse ∘ f) := by
  induction l <;> simp_all

theorem bind_reverse {β} (l : List α) (f : α → List β) : (l.reverse.bind f) = (l.bind (reverse ∘ f)).reverse := by
  induction l <;> simp_all

theorem reverseAux_eq (as bs : List α) : reverseAux as bs = reverse as ++ bs :=
  reverseAux_eq_append ..

@[simp] theorem foldrM_reverse [Monad m] (l : List α) (f : α → β → m β) (b) :
    l.reverse.foldrM f b = l.foldlM (fun x y => f y x) b :=
  (foldlM_reverse ..).symm.trans <| by simp

@[simp] theorem foldl_reverse (l : List α) (f : β → α → β) (b) :
    l.reverse.foldl f b = l.foldr (fun x y => f y x) b := by simp [foldl_eq_foldlM, foldr_eq_foldrM]

@[simp] theorem foldr_reverse (l : List α) (f : α → β → β) (b) :
    l.reverse.foldr f b = l.foldl (fun x y => f y x) b :=
  (foldl_reverse ..).symm.trans <| by simp

@[simp] theorem reverse_replicate (n) (a : α) : reverse (replicate n a) = replicate n a :=
  eq_replicate.2
    ⟨by rw [length_reverse, length_replicate],
     fun b h => eq_of_mem_replicate (mem_reverse.1 h)⟩

/-! #### Further results about `getLast` and `getLast?` -/

@[simp] theorem head_reverse {l : List α} (h : l.reverse ≠ []) :
    l.reverse.head h = getLast l (by simp_all) := by
  induction l with
  | nil => contradiction
  | cons a l ih =>
    simp
    by_cases h' : l = []
    · simp_all
    · rw [getLast_cons, head_append_of_ne_nil, ih]
      simp_all

theorem getLast_eq_head_reverse {l : List α} (h : l ≠ []) :
    l.getLast h = l.reverse.head (by simp_all) := by
  rw [← head_reverse]

@[simp] theorem getLast_reverse {l : List α} (h : l.reverse ≠ []) :
    l.reverse.getLast h = l.head (by simp_all) := by
  simp [getLast_eq_head_reverse]

theorem head_eq_getLast_reverse {l : List α} (h : l ≠ []) :
    l.head h = l.reverse.getLast (by simp_all) := by
  rw [← getLast_reverse]

@[simp] theorem getLast_append_of_ne_nil {l : List α} (h : l' ≠ []) :
    (l ++ l').getLast (append_ne_nil_of_right_ne_nil l h) = l'.getLast (by simp_all) := by
  simp only [getLast_eq_head_reverse, reverse_append]
  rw [head_append_of_ne_nil]

theorem getLast_append {l : List α} (h : l ++ l' ≠ []) :
    (l ++ l').getLast h =
      if h' : l'.isEmpty then
        l.getLast (by simp_all [isEmpty_iff])
      else
        l'.getLast (by simp_all [isEmpty_iff]) := by
  split <;> rename_i h'
  · simp only [isEmpty_iff] at h'
    subst h'
    simp
  · simp [isEmpty_iff] at h'
    simp [h']

@[simp] theorem getLast?_append {l l' : List α} : (l ++ l').getLast? = l'.getLast?.or l.getLast? := by
  simp [← head?_reverse]

theorem getLast_filter_of_pos {p : α → Bool} {l : List α} (w : l ≠ []) (h : p (getLast l w) = true) :
    getLast (filter p l) (ne_nil_of_mem (mem_filter.2 ⟨getLast_mem w, h⟩)) = getLast l w := by
  simp only [getLast_eq_head_reverse, ← filter_reverse]
  rw [head_filter_of_pos]
  simp_all

theorem getLast_filterMap_of_eq_some {f : α → Option β} {l : List α} {w : l ≠ []} {b : β} (h : f (l.getLast w) = some b) :
    (filterMap f l).getLast (ne_nil_of_mem (mem_filterMap.2 ⟨_, getLast_mem w, h⟩)) = b := by
  simp only [getLast_eq_head_reverse, ← filterMap_reverse]
  rw [head_filterMap_of_eq_some (by simp_all)]
  simp_all

theorem getLast?_bind {L : List α} {f : α → List β} :
    (L.bind f).getLast? = L.reverse.findSome? fun a => (f a).getLast? := by
  simp only [← head?_reverse, reverse_bind]
  rw [head?_bind]
  rfl

theorem getLast?_join {L : List (List α)} :
    (join L).getLast? = L.reverse.findSome? fun l => l.getLast? := by
  simp [← bind_id, getLast?_bind]

theorem getLast?_replicate (a : α) (n : Nat) : (replicate n a).getLast? = if n = 0 then none else some a := by
  simp only [← head?_reverse, reverse_replicate, head?_replicate]

@[simp] theorem getLast_replicate (w : replicate n a ≠ []) : (replicate n a).getLast w = a := by
  simp [getLast_eq_head_reverse]

/-! ## Additional operations -/

/-! ### leftpad -/

-- /-- The length of the List returned by `List.leftpad n a l` is equal
--   to the larger of `n` and `l.length` -/
-- @[simp]
-- theorem leftpad_length (n : Nat) (a : α) (l : List α) :
--     (leftpad n a l).length = max n l.length := by
--   simp only [leftpad, length_append, length_replicate, Nat.sub_add_eq_max]

theorem leftpad_prefix (n : Nat) (a : α) (l : List α) :
    replicate (n - length l) a <+: leftpad n a l := by
  simp only [IsPrefix, leftpad]
  exact Exists.intro l rfl

theorem leftpad_suffix (n : Nat) (a : α) (l : List α) : l <:+ (leftpad n a l) := by
  simp only [IsSuffix, leftpad]
  exact Exists.intro (replicate (n - length l) a) rfl

/-! ## List membership -/

/-! ### elem / contains -/

theorem elem_cons_self [BEq α] [LawfulBEq α] {a : α} : (a::as).elem a = true := by simp

@[simp] theorem contains_cons [BEq α] :
    (a :: as : List α).contains x = (x == a || as.contains x) := by
  simp only [contains, elem]
  split <;> simp_all

theorem contains_eq_any_beq [BEq α] (l : List α) (a : α) : l.contains a = l.any (a == ·) := by
  induction l with simp | cons b l => cases b == a <;> simp [*]

theorem contains_iff_exists_mem_beq [BEq α] (l : List α) (a : α) :
    l.contains a ↔ ∃ a' ∈ l, a == a' := by
  induction l <;> simp_all

/-! ## Sublists -/

/-! ### take and drop

Further results on `List.take` and `List.drop`, which rely on stronger automation in `Nat`,
are given in `Init.Data.List.TakeDrop`.
-/

@[simp]
theorem drop_one : ∀ l : List α, drop 1 l = tail l
  | [] | _ :: _ => rfl

@[simp] theorem take_append_drop : ∀ (n : Nat) (l : List α), take n l ++ drop n l = l
  | 0, _ => rfl
  | _+1, [] => rfl
  | n+1, x :: xs => congrArg (cons x) <| take_append_drop n xs

@[simp] theorem length_drop : ∀ (i : Nat) (l : List α), length (drop i l) = length l - i
  | 0, _ => rfl
  | succ i, [] => Eq.symm (Nat.zero_sub (succ i))
  | succ i, x :: l => calc
    length (drop (succ i) (x :: l)) = length l - i := length_drop i l
    _ = succ (length l) - succ i := (Nat.succ_sub_succ_eq_sub (length l) i).symm

theorem drop_of_length_le {l : List α} (h : l.length ≤ i) : drop i l = [] :=
  length_eq_zero.1 (length_drop .. ▸ Nat.sub_eq_zero_of_le h)

theorem length_lt_of_drop_ne_nil {l : List α} {n} (h : drop n l ≠ []) : n < l.length :=
  gt_of_not_le (mt drop_of_length_le h)

theorem take_of_length_le {l : List α} (h : l.length ≤ i) : take i l = l := by
  have := take_append_drop i l
  rw [drop_of_length_le h, append_nil] at this; exact this

theorem lt_length_of_take_ne_self {l : List α} {n} (h : l.take n ≠ l) : n < l.length :=
  gt_of_not_le (mt take_of_length_le h)

@[deprecated drop_of_length_le (since := "2024-07-07")] abbrev drop_length_le := @drop_of_length_le
@[deprecated take_of_length_le (since := "2024-07-07")] abbrev take_length_le := @take_of_length_le

@[simp] theorem drop_length (l : List α) : drop l.length l = [] := drop_of_length_le (Nat.le_refl _)

@[simp] theorem take_length (l : List α) : take l.length l = l := take_of_length_le (Nat.le_refl _)

@[simp]
theorem getElem_cons_drop : ∀ (l : List α) (i : Nat) (h : i < l.length),
    l[i] :: drop (i + 1) l = drop i l
  | _::_, 0, _ => rfl
  | _::_, i+1, _ => getElem_cons_drop _ i _

@[deprecated getElem_cons_drop (since := "2024-06-12")]
theorem get_cons_drop (l : List α) (i) : get l i :: drop (i + 1) l = drop i l := by
  simp

theorem drop_eq_getElem_cons {n} {l : List α} (h) : drop n l = l[n] :: drop (n + 1) l :=
  (getElem_cons_drop _ n h).symm

@[deprecated drop_eq_getElem_cons (since := "2024-06-12")]
theorem drop_eq_get_cons {n} {l : List α} (h) : drop n l = get l ⟨n, h⟩ :: drop (n + 1) l := by
  simp [drop_eq_getElem_cons]

@[simp]
theorem getElem?_take {l : List α} {n m : Nat} (h : m < n) : (l.take n)[m]? = l[m]? := by
  induction n generalizing l m with
  | zero =>
    exact absurd h (Nat.not_lt_of_le m.zero_le)
  | succ _ hn =>
    cases l with
    | nil => simp only [take_nil]
    | cons hd tl =>
      cases m
      · simp
      · simpa using hn (Nat.lt_of_succ_lt_succ h)

@[deprecated getElem?_take (since := "2024-06-12")]
theorem get?_take {l : List α} {n m : Nat} (h : m < n) : (l.take n).get? m = l.get? m := by
  simp [getElem?_take, h]

@[simp]
theorem getElem?_take_of_succ {l : List α} {n : Nat} : (l.take (n + 1))[n]? = l[n]? :=
  getElem?_take (Nat.lt_succ_self n)

theorem tail_drop (l : List α) (n : Nat) : (l.drop n).tail = l.drop (n + 1) := by
  induction l generalizing n with
  | nil => simp
  | cons hd tl hl =>
    cases n
    · simp
    · simp [hl]

@[simp]
theorem drop_eq_nil_iff_le {l : List α} {k : Nat} : l.drop k = [] ↔ l.length ≤ k := by
  refine' ⟨fun h => _, drop_eq_nil_of_le⟩
  induction k generalizing l with
  | zero =>
    simp only [drop] at h
    simp [h]
  | succ k hk =>
    cases l
    · simp
    · simp only [drop] at h
      simpa [Nat.succ_le_succ_iff] using hk h

@[simp]
theorem take_eq_nil_iff {l : List α} {k : Nat} : l.take k = [] ↔ k = 0 ∨ l = [] := by
  cases l <;> cases k <;> simp [Nat.succ_ne_zero]

theorem drop_eq_nil_of_eq_nil : ∀ {as : List α} {i}, as = [] → as.drop i = []
  | _, _, rfl => drop_nil

theorem ne_nil_of_drop_ne_nil {as : List α} {i : Nat} (h: as.drop i ≠ []) : as ≠ [] :=
  mt drop_eq_nil_of_eq_nil h

theorem take_eq_nil_of_eq_nil : ∀ {as : List α} {i}, as = [] → as.take i = []
  | _, _, rfl => take_nil

theorem ne_nil_of_take_ne_nil {as : List α} {i : Nat} (h : as.take i ≠ []) : as ≠ [] :=
  mt take_eq_nil_of_eq_nil h

theorem set_take {l : List α} {n m : Nat} {a : α} :
    (l.set m a).take n = (l.take n).set m a := by
  induction n generalizing l m with
  | zero => simp
  | succ _ hn =>
    cases l with
    | nil => simp
    | cons hd tl => cases m <;> simp_all

theorem drop_set {l : List α} {n m : Nat} {a : α} :
    (l.set m a).drop n = if m < n then l.drop n else (l.drop n).set (m - n) a := by
  induction n generalizing l m with
  | zero => simp
  | succ _ hn =>
    cases l with
    | nil => simp
    | cons hd tl =>
      cases m
      · simp_all
      · simp only [hn, set_cons_succ, drop_succ_cons, succ_lt_succ_iff]
        congr 2
        exact (Nat.add_sub_add_right ..).symm

theorem set_drop {l : List α} {n m : Nat} {a : α} :
    (l.drop n).set m a = (l.set (n + m) a).drop n := by
  rw [drop_set, if_neg, add_sub_self_left n m]
  exact (Nat.not_lt).2 (le_add_right n m)

theorem take_concat_get (l : List α) (i : Nat) (h : i < l.length) :
    (l.take i).concat l[i] = l.take (i+1) :=
  Eq.symm <| (append_left_inj _).1 <| (take_append_drop (i+1) l).trans <| by
    rw [concat_eq_append, append_assoc, singleton_append, get_drop_eq_drop, take_append_drop]

@[deprecated take_succ_cons (since := "2024-07-25")]
theorem take_cons_succ : (a::as).take (i+1) = a :: as.take i := rfl

@[deprecated take_of_length_le (since := "2024-07-25")]
theorem take_all_of_le {n} {l : List α} (h : length l ≤ n) : take n l = l :=
  take_of_length_le h

theorem drop_left : ∀ l₁ l₂ : List α, drop (length l₁) (l₁ ++ l₂) = l₂
  | [], _ => rfl
  | _ :: l₁, l₂ => drop_left l₁ l₂

@[simp]
theorem drop_left' {l₁ l₂ : List α} {n} (h : length l₁ = n) : drop n (l₁ ++ l₂) = l₂ := by
  rw [← h]; apply drop_left

theorem take_left : ∀ l₁ l₂ : List α, take (length l₁) (l₁ ++ l₂) = l₁
  | [], _ => rfl
  | a :: l₁, l₂ => congrArg (cons a) (take_left l₁ l₂)

@[simp]
theorem take_left' {l₁ l₂ : List α} {n} (h : length l₁ = n) : take n (l₁ ++ l₂) = l₁ := by
  rw [← h]; apply take_left

theorem take_succ {l : List α} {n : Nat} : l.take (n + 1) = l.take n ++ l[n]?.toList := by
  induction l generalizing n with
  | nil =>
    simp only [take_nil, Option.toList, getElem?_nil, append_nil]
  | cons hd tl hl =>
    cases n
    · simp only [take, Option.toList, getElem?_cons_zero, nil_append]
    · simp only [take, hl, getElem?_cons_succ, cons_append]

@[deprecated (since := "2024-07-25")]
theorem drop_sizeOf_le [SizeOf α] (l : List α) (n : Nat) : sizeOf (l.drop n) ≤ sizeOf l := by
  induction l generalizing n with
  | nil => rw [drop_nil]; apply Nat.le_refl
  | cons _ _ lih =>
    induction n with
    | zero => apply Nat.le_refl
    | succ n =>
      exact Trans.trans (lih _) (Nat.le_add_left _ _)

theorem dropLast_eq_take (l : List α) : l.dropLast = l.take (l.length - 1) := by
  cases l with
  | nil => simp [dropLast]
  | cons x l =>
    induction l generalizing x <;> simp_all [dropLast]

@[simp] theorem map_take (f : α → β) :
    ∀ (L : List α) (i : Nat), (L.take i).map f = (L.map f).take i
  | [], i => by simp
  | _, 0 => by simp
  | h :: t, n + 1 => by dsimp; rw [map_take f t n]

@[simp] theorem map_drop (f : α → β) :
    ∀ (L : List α) (i : Nat), (L.drop i).map f = (L.map f).drop i
  | [], i => by simp
  | L, 0 => by simp
  | h :: t, n + 1 => by
    dsimp
    rw [map_drop f t]

@[simp] theorem drop_drop (n : Nat) : ∀ (m) (l : List α), drop n (drop m l) = drop (n + m) l
  | m, [] => by simp
  | 0, l => by simp
  | m + 1, a :: l =>
    calc
      drop n (drop (m + 1) (a :: l)) = drop n (drop m l) := rfl
      _ = drop (n + m) l := drop_drop n m l
      _ = drop (n + (m + 1)) (a :: l) := rfl

theorem take_drop : ∀ (m n : Nat) (l : List α), take n (drop m l) = drop m (take (m + n) l)
  | 0, _, _ => by simp
  | _, _, [] => by simp
  | _+1, _, _ :: _ => by simpa [Nat.succ_add, take_succ_cons, drop_succ_cons] using take_drop ..

@[deprecated drop_drop (since := "2024-06-15")]
theorem drop_add (m n) (l : List α) : drop (m + n) l = drop m (drop n l) := by
  simp [drop_drop]

/-! ### takeWhile and dropWhile -/

theorem takeWhile_cons (p : α → Bool) (a : α) (l : List α) :
    (a :: l).takeWhile p = if p a then a :: l.takeWhile p else [] := by
  simp only [takeWhile]
  by_cases h: p a <;> simp [h]

@[simp] theorem takeWhile_cons_of_pos {p : α → Bool} {a : α} {l : List α} (h : p a) :
    (a :: l).takeWhile p = a :: l.takeWhile p := by
  simp [takeWhile_cons, h]

@[simp] theorem takeWhile_cons_of_neg {p : α → Bool} {a : α} {l : List α} (h : ¬ p a) :
    (a :: l).takeWhile p = [] := by
  simp [takeWhile_cons, h]

theorem dropWhile_cons :
    (x :: xs : List α).dropWhile p = if p x then xs.dropWhile p else x :: xs := by
  split <;> simp_all [dropWhile]

@[simp] theorem dropWhile_cons_of_pos {a : α} {l : List α} (h : p a) :
    (a :: l).dropWhile p = l.dropWhile p := by
  simp [dropWhile_cons, h]

@[simp] theorem dropWhile_cons_of_neg {a : α} {l : List α} (h : ¬ p a) :
    (a :: l).dropWhile p = a :: l := by
  simp [dropWhile_cons, h]

theorem head?_takeWhile (p : α → Bool) (l : List α) : (l.takeWhile p).head? = l.head?.filter p := by
  cases l with
  | nil => rfl
  | cons x xs =>
    simp only [takeWhile_cons, head?_cons, Option.filter_some]
    split <;> simp

theorem head_takeWhile (p : α → Bool) (l : List α) (w) :
    (l.takeWhile p).head w = l.head (by rintro rfl; simp_all) := by
  cases l with
  | nil => rfl
  | cons x xs =>
    simp only [takeWhile_cons, head_cons]
    simp only [takeWhile_cons] at w
    split <;> simp_all

theorem head?_dropWhile_not (p : α → Bool) (l : List α) :
    match (l.dropWhile p).head? with | some x => p x = false | none => True := by
  induction l with
  | nil => simp
  | cons x xs ih =>
    simp only [dropWhile_cons]
    split <;> rename_i h <;> split at h <;> simp_all

theorem head_dropWhile_not (p : α → Bool) (l : List α) (w) :
    p ((l.dropWhile p).head w) = false := by
  simpa [head?_eq_head, w] using head?_dropWhile_not p l

theorem takeWhile_map (f : α → β) (p : β → Bool) (l : List α) :
    (l.map f).takeWhile p = (l.takeWhile (p ∘ f)).map f := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    simp only [map_cons, takeWhile_cons]
    split <;> simp_all

theorem dropWhile_map (f : α → β) (p : β → Bool) (l : List α) :
    (l.map f).dropWhile p = (l.dropWhile (p ∘ f)).map f := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    simp only [map_cons, dropWhile_cons]
    split <;> simp_all

theorem takeWhile_filterMap (f : α → Option β) (p : β → Bool) (l : List α) :
    (l.filterMap f).takeWhile p = (l.takeWhile fun a => (f a).all p).filterMap f := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    simp only [filterMap_cons]
    split <;> rename_i h
    · simp only [takeWhile_cons, h]
      split <;> simp_all
    · simp [takeWhile_cons, h, ih]
      split <;> simp_all [filterMap_cons]

theorem dropWhile_filterMap (f : α → Option β) (p : β → Bool) (l : List α) :
    (l.filterMap f).dropWhile p = (l.dropWhile fun a => (f a).all p).filterMap f := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    simp only [filterMap_cons]
    split <;> rename_i h
    · simp only [dropWhile_cons, h]
      split <;> simp_all
    · simp [dropWhile_cons, h, ih]
      split <;> simp_all [filterMap_cons]

theorem takeWhile_filter (p q : α → Bool) (l : List α) :
    (l.filter p).takeWhile q = (l.takeWhile fun a => !p a || q a).filter p := by
  simp [← filterMap_eq_filter, takeWhile_filterMap]

theorem dropWhile_filter (p q : α → Bool) (l : List α) :
    (l.filter p).dropWhile q = (l.dropWhile fun a => !p a || q a).filter p := by
  simp [← filterMap_eq_filter, dropWhile_filterMap]

@[simp] theorem takeWhile_append_dropWhile (p : α → Bool) :
    ∀ (l : List α), takeWhile p l ++ dropWhile p l = l
  | [] => rfl
  | x :: xs => by simp [takeWhile, dropWhile]; cases p x <;> simp [takeWhile_append_dropWhile p xs]

theorem takeWhile_append {xs ys : List α} :
    (xs ++ ys).takeWhile p =
      if (xs.takeWhile p).length = xs.length then xs ++ ys.takeWhile p else xs.takeWhile p := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
    simp only [cons_append, takeWhile_cons]
    split
    · simp_all only [length_cons, add_one_inj]
      split <;> rfl
    · simp_all

@[simp] theorem takeWhile_append_of_pos {p : α → Bool} {l₁ l₂ : List α} (h : ∀ a ∈ l₁, p a) :
    (l₁ ++ l₂).takeWhile p = l₁ ++ l₂.takeWhile p := by
  induction l₁ with
  | nil => simp
  | cons x xs ih => simp_all [takeWhile_cons]

theorem dropWhile_append {xs ys : List α} :
    (xs ++ ys).dropWhile p =
      if (xs.dropWhile p).isEmpty then ys.dropWhile p else xs.dropWhile p ++ ys := by
  induction xs with
  | nil => simp
  | cons h t ih =>
    simp only [cons_append, dropWhile_cons]
    split <;> simp_all

@[simp] theorem dropWhile_append_of_pos {p : α → Bool} {l₁ l₂ : List α} (h : ∀ a ∈ l₁, p a) :
    (l₁ ++ l₂).dropWhile p = l₂.dropWhile p := by
  induction l₁ with
  | nil => simp
  | cons x xs ih => simp_all [dropWhile_cons]

@[simp] theorem takeWhile_replicate_eq_filter (p : α → Bool) :
    (replicate n a).takeWhile p = (replicate n a).filter p := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, takeWhile_cons]
    split <;> simp_all

theorem takeWhile_replicate (p : α → Bool) :
    (replicate n a).takeWhile p = if p a then replicate n a else [] := by
  rw [takeWhile_replicate_eq_filter, filter_replicate]

@[simp] theorem dropWhile_replicate_eq_filter_not (p : α → Bool) :
    (replicate n a).dropWhile p = (replicate n a).filter (fun a => !p a) := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, dropWhile_cons]
    split <;> simp_all

theorem dropWhile_replicate (p : α → Bool) :
    (replicate n a).dropWhile p = if p a then [] else replicate n a := by
  simp only [dropWhile_replicate_eq_filter_not, filter_replicate]
  split <;> simp_all

theorem take_takeWhile {l : List α} (p : α → Bool) n :
    (l.takeWhile p).take n = (l.takeWhile p).take n := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    by_cases h : p x <;> simp [takeWhile_cons, h, ih]

/-! ### partition

Because we immediately simplify `partition` into two `filter`s for verification purposes,
we do not separately develop much theory about it.
-/

@[simp] theorem partition_eq_filter_filter (p : α → Bool) (l : List α) :
    partition p l = (filter p l, filter (not ∘ p) l) := by simp [partition, aux]
  where
    aux : ∀ l {as bs}, partition.loop p l (as, bs) =
        (as.reverse ++ filter p l, bs.reverse ++ filter (not ∘ p) l)
      | [] => by simp [partition.loop, filter]
      | a :: l => by cases pa : p a <;> simp [partition.loop, pa, aux, filter, append_assoc]

theorem mem_partition : a ∈ l ↔ a ∈ (partition p l).1 ∨ a ∈ (partition p l).2 := by
  by_cases p a <;> simp_all

/-! ### dropLast

`dropLast` is the specification for `Array.pop`, so theorems about `List.dropLast`
are often used for theorems about `Array.pop`.
-/

@[simp] theorem length_dropLast : ∀ (xs : List α), xs.dropLast.length = xs.length - 1
  | [] => rfl
  | x::xs => by simp

@[simp] theorem getElem_dropLast : ∀ (xs : List α) (i : Nat) (h : i < xs.dropLast.length),
    xs.dropLast[i] = xs[i]'(Nat.lt_of_lt_of_le h (length_dropLast .. ▸ Nat.pred_le _))
  | _::_::_, 0, _ => rfl
  | _::_::_, i+1, _ => getElem_dropLast _ i _

@[deprecated getElem_dropLast (since := "2024-06-12")]
theorem get_dropLast (xs : List α) (i : Fin xs.dropLast.length) :
    xs.dropLast.get i = xs.get ⟨i, Nat.lt_of_lt_of_le i.isLt (length_dropLast .. ▸ Nat.pred_le _)⟩ := by
  simp

theorem getElem?_dropLast (xs : List α) (i : Nat) :
    xs.dropLast[i]? = if i < xs.length - 1 then xs[i]? else none := by
  split
  · rw [getElem?_eq_getElem, getElem?_eq_getElem, getElem_dropLast]
    simpa
  · simp_all

theorem head_dropLast (xs : List α) (h) :
    xs.dropLast.head h = xs.head (by rintro rfl; simp at h) := by
  cases xs with
  | nil => rfl
  | cons x xs =>
    cases xs with
    | nil => simp at h
    | cons y ys => rfl

theorem head?_dropLast (xs : List α) : xs.dropLast.head? = if 1 < xs.length then xs.head? else none := by
  cases xs with
  | nil => rfl
  | cons x xs =>
    cases xs with
    | nil => rfl
    | cons y ys => simp [Nat.succ_lt_succ_iff]

theorem dropLast_cons_of_ne_nil {α : Type u} {x : α}
    {l : List α} (h : l ≠ []) : (x :: l).dropLast = x :: l.dropLast := by
  simp [dropLast, h]

@[simp] theorem map_dropLast (f : α → β) (l : List α) : l.dropLast.map f = (l.map f).dropLast := by
  induction l with
  | nil => rfl
  | cons x xs ih => cases xs <;> simp [ih]

@[simp] theorem dropLast_append_of_ne_nil {α : Type u} {l : List α} :
    ∀ (l' : List α) (_ : l ≠ []), (l' ++ l).dropLast = l' ++ l.dropLast
  | [], _ => by simp only [nil_append]
  | a :: l', h => by
    rw [cons_append, dropLast, dropLast_append_of_ne_nil l' h, cons_append]
    simp [h]

theorem dropLast_append {l₁ l₂ : List α} :
    (l₁ ++ l₂).dropLast = if l₂.isEmpty then l₁.dropLast else l₁ ++ l₂.dropLast := by
  split <;> simp_all

@[simp] theorem dropLast_append_cons : dropLast (l₁ ++ b::l₂) = l₁ ++ dropLast (b::l₂) := by
  simp only [ne_eq, not_false_eq_true, dropLast_append_of_ne_nil]

@[simp 1100] theorem dropLast_concat : dropLast (l₁ ++ [b]) = l₁ := by simp

@[simp] theorem dropLast_replicate (n) (a : α) : dropLast (replicate n a) = replicate (n - 1) a := by
  match n with
  | 0 => simp
  | 1 => simp [replicate_succ]
  | n+2 =>
    rw [replicate_succ, dropLast_cons_of_ne_nil, dropLast_replicate]
    · simp [replicate_succ]
    · simp

@[simp] theorem dropLast_cons_self_replicate (n) (a : α) :
    dropLast (a :: replicate n a) = replicate n a := by
  rw [← replicate_succ, dropLast_replicate, Nat.add_sub_cancel]

/-! ### isPrefixOf -/
section isPrefixOf
variable [BEq α]

@[simp] theorem isPrefixOf_cons₂_self [LawfulBEq α] {a : α} :
    isPrefixOf (a::as) (a::bs) = isPrefixOf as bs := by simp [isPrefixOf_cons₂]

@[simp] theorem isPrefixOf_length_pos_nil {L : List α} (h : 0 < L.length) : isPrefixOf L [] = false := by
  cases L <;> simp_all [isPrefixOf]

@[simp] theorem isPrefixOf_replicate {a : α} :
    isPrefixOf l (replicate n a) = (decide (l.length ≤ n) && l.all (· == a)) := by
  induction l generalizing n with
  | nil => simp
  | cons h t ih =>
    cases n
    · simp
    · simp [replicate_succ, isPrefixOf_cons₂, ih, Nat.succ_le_succ_iff, Bool.and_left_comm]

end isPrefixOf

/-! ### isSuffixOf -/
section isSuffixOf
variable [BEq α]

@[simp] theorem isSuffixOf_cons_nil : isSuffixOf (a::as) ([] : List α) = false := by
  simp [isSuffixOf]

@[simp] theorem isSuffixOf_replicate {a : α} :
    isSuffixOf l (replicate n a) = (decide (l.length ≤ n) && l.all (· == a)) := by
  simp [isSuffixOf, all_eq]

end isSuffixOf

/-! ### Subset -/

/-! ### List subset -/

theorem subset_def {l₁ l₂ : List α} : l₁ ⊆ l₂ ↔ ∀ {a : α}, a ∈ l₁ → a ∈ l₂ := .rfl

@[simp] theorem nil_subset (l : List α) : [] ⊆ l := nofun

@[simp] theorem Subset.refl (l : List α) : l ⊆ l := fun _ i => i

theorem Subset.trans {l₁ l₂ l₃ : List α} (h₁ : l₁ ⊆ l₂) (h₂ : l₂ ⊆ l₃) : l₁ ⊆ l₃ :=
  fun _ i => h₂ (h₁ i)

instance : Trans (Membership.mem : α → List α → Prop) Subset Membership.mem :=
  ⟨fun h₁ h₂ => h₂ h₁⟩

instance : Trans (Subset : List α → List α → Prop) Subset Subset :=
  ⟨Subset.trans⟩

@[simp] theorem subset_cons_self (a : α) (l : List α) : l ⊆ a :: l := fun _ => Mem.tail _

theorem subset_of_cons_subset {a : α} {l₁ l₂ : List α} : a :: l₁ ⊆ l₂ → l₁ ⊆ l₂ :=
  fun s _ i => s (mem_cons_of_mem _ i)

theorem subset_cons_of_subset (a : α) {l₁ l₂ : List α} : l₁ ⊆ l₂ → l₁ ⊆ a :: l₂ :=
  fun s _ i => .tail _ (s i)

theorem cons_subset_cons {l₁ l₂ : List α} (a : α) (s : l₁ ⊆ l₂) : a :: l₁ ⊆ a :: l₂ :=
  fun _ => by simp only [mem_cons]; exact Or.imp_right (@s _)

@[simp] theorem cons_subset : a :: l ⊆ m ↔ a ∈ m ∧ l ⊆ m := by
  simp only [subset_def, mem_cons, or_imp, forall_and, forall_eq]

@[simp] theorem subset_nil {l : List α} : l ⊆ [] ↔ l = [] :=
  ⟨fun h => match l with | [] => rfl | _::_ => (nomatch h (.head ..)), fun | rfl => Subset.refl _⟩

theorem Subset.map {l₁ l₂ : List α} (f : α → β) (H : l₁ ⊆ l₂) : map f l₁ ⊆ map f l₂ :=
  fun x => by simp only [mem_map]; exact .imp fun a => .imp_left (@H _)

@[deprecated (since := "2024-07-28")]
theorem map_subset {l₁ l₂ : List α} {f : α → β} (h : l₁ ⊆ l₂) : map f l₁ ⊆ map f l₂ :=
  Subset.map f h

theorem Subset.filter {l₁ l₂ : List α} (p : α → Bool) (H : l₁ ⊆ l₂) : filter p l₁ ⊆ filter p l₂ :=
  fun x => by simp_all [mem_filter, subset_def.1 H]

theorem Subset.filterMap {l₁ l₂ : List α} (f : α → Option β) (H : l₁ ⊆ l₂) :
    filterMap f l₁ ⊆ filterMap f l₂ := by
  intro x
  simp only [mem_filterMap]
  rintro ⟨a, h, w⟩
  exact ⟨a, H h, w⟩

@[simp] theorem subset_append_left (l₁ l₂ : List α) : l₁ ⊆ l₁ ++ l₂ := fun _ => mem_append_left _

@[simp] theorem subset_append_right (l₁ l₂ : List α) : l₂ ⊆ l₁ ++ l₂ := fun _ => mem_append_right _

theorem subset_append_of_subset_left (l₂ : List α) : l ⊆ l₁ → l ⊆ l₁ ++ l₂ :=
fun s => Subset.trans s <| subset_append_left _ _

theorem subset_append_of_subset_right (l₁ : List α) : l ⊆ l₂ → l ⊆ l₁ ++ l₂ :=
fun s => Subset.trans s <| subset_append_right _ _

@[simp] theorem append_subset {l₁ l₂ l : List α} :
    l₁ ++ l₂ ⊆ l ↔ l₁ ⊆ l ∧ l₂ ⊆ l := by simp [subset_def, or_imp, forall_and]

theorem replicate_subset {n : Nat} {a : α} {l : List α} : replicate n a ⊆ l ↔ n = 0 ∨ a ∈ l := by
  induction n with
  | zero => simp
  | succ n ih => simp (config := {contextual := true}) [replicate_succ, ih, cons_subset]

theorem subset_replicate {n : Nat} {a : α} {l : List α} (h : n ≠ 0) : l ⊆ replicate n a ↔ ∀ x ∈ l, x = a := by
  induction l with
  | nil => simp
  | cons x xs ih =>
    simp only [cons_subset, mem_replicate, ne_eq, ih, mem_cons, forall_eq_or_imp,
      and_congr_left_iff, and_iff_right_iff_imp]
    solve_by_elim

@[simp] theorem reverse_subset {l₁ l₂ : List α} : reverse l₁ ⊆ l₂ ↔ l₁ ⊆ l₂ := by
  simp [subset_def]

@[simp] theorem subset_reverse {l₁ l₂ : List α} : l₁ ⊆ reverse l₂ ↔ l₁ ⊆ l₂ := by
  simp [subset_def]

/-! ### Sublist and isSublist -/

@[simp] theorem nil_sublist : ∀ l : List α, [] <+ l
  | [] => .slnil
  | a :: l => (nil_sublist l).cons a

@[simp] theorem Sublist.refl : ∀ l : List α, l <+ l
  | [] => .slnil
  | a :: l => (Sublist.refl l).cons₂ a

theorem Sublist.trans {l₁ l₂ l₃ : List α} (h₁ : l₁ <+ l₂) (h₂ : l₂ <+ l₃) : l₁ <+ l₃ := by
  induction h₂ generalizing l₁ with
  | slnil => exact h₁
  | cons _ _ IH => exact (IH h₁).cons _
  | @cons₂ l₂ _ a _ IH =>
    generalize e : a :: l₂ = l₂'
    match e ▸ h₁ with
    | .slnil => apply nil_sublist
    | .cons a' h₁' => cases e; apply (IH h₁').cons
    | .cons₂ a' h₁' => cases e; apply (IH h₁').cons₂

instance : Trans (@Sublist α) Sublist Sublist := ⟨Sublist.trans⟩

@[simp] theorem sublist_cons_self (a : α) (l : List α) : l <+ a :: l := (Sublist.refl l).cons _

theorem sublist_of_cons_sublist : a :: l₁ <+ l₂ → l₁ <+ l₂ :=
  (sublist_cons_self a l₁).trans

@[simp]
theorem cons_sublist_cons : a :: l₁ <+ a :: l₂ ↔ l₁ <+ l₂ :=
  ⟨fun | .cons _ s => sublist_of_cons_sublist s | .cons₂ _ s => s, .cons₂ _⟩

theorem sublist_or_mem_of_sublist (h : l <+ l₁ ++ a :: l₂) : l <+ l₁ ++ l₂ ∨ a ∈ l := by
  induction l₁ generalizing l with
  | nil => match h with
    | .cons _ h => exact .inl h
    | .cons₂ _ h => exact .inr (.head ..)
  | cons b l₁ IH =>
    match h with
    | .cons _ h => exact (IH h).imp_left (Sublist.cons _)
    | .cons₂ _ h => exact (IH h).imp (Sublist.cons₂ _) (.tail _)

theorem Sublist.subset : l₁ <+ l₂ → l₁ ⊆ l₂
  | .slnil, _, h => h
  | .cons _ s, _, h => .tail _ (s.subset h)
  | .cons₂ .., _, .head .. => .head ..
  | .cons₂ _ s, _, .tail _ h => .tail _ (s.subset h)

instance : Trans (@Sublist α) Subset Subset :=
  ⟨fun h₁ h₂ => trans h₁.subset h₂⟩

instance : Trans Subset (@Sublist α) Subset :=
  ⟨fun h₁ h₂ => trans h₁ h₂.subset⟩

instance : Trans (Membership.mem : α → List α → Prop) Sublist Membership.mem :=
  ⟨fun h₁ h₂ => h₂.subset h₁⟩

theorem mem_of_cons_sublist {a : α} {l₁ l₂ : List α} (s : a :: l₁ <+ l₂) : a ∈ l₂ :=
  (cons_subset.1 s.subset).1

@[simp] theorem sublist_nil {l : List α} : l <+ [] ↔ l = [] :=
  ⟨fun s => subset_nil.1 s.subset, fun H => H ▸ Sublist.refl _⟩

theorem Sublist.length_le : l₁ <+ l₂ → length l₁ ≤ length l₂
  | .slnil => Nat.le_refl 0
  | .cons _l s => le_succ_of_le (length_le s)
  | .cons₂ _ s => succ_le_succ (length_le s)

theorem Sublist.eq_of_length : l₁ <+ l₂ → length l₁ = length l₂ → l₁ = l₂
  | .slnil, _ => rfl
  | .cons a s, h => nomatch Nat.not_lt.2 s.length_le (h ▸ lt_succ_self _)
  | .cons₂ a s, h => by rw [s.eq_of_length (succ.inj h)]

theorem Sublist.eq_of_length_le (s : l₁ <+ l₂) (h : length l₂ ≤ length l₁) : l₁ = l₂ :=
  s.eq_of_length <| Nat.le_antisymm s.length_le h

theorem Sublist.length_eq (s : l₁ <+ l₂) : length l₁ = length l₂ ↔ l₁ = l₂ :=
  ⟨s.eq_of_length, congrArg _⟩

protected theorem Sublist.map (f : α → β) {l₁ l₂} (s : l₁ <+ l₂) : map f l₁ <+ map f l₂ := by
  induction s with
  | slnil => simp
  | cons a s ih =>
    simpa using cons (f a) ih
  | cons₂ a s ih =>
    simpa using cons₂ (f a) ih

protected theorem Sublist.filterMap (f : α → Option β) (s : l₁ <+ l₂) :
    filterMap f l₁ <+ filterMap f l₂ := by
  induction s <;> simp [filterMap_cons] <;> split <;> simp [*, cons, cons₂]

protected theorem Sublist.filter (p : α → Bool) {l₁ l₂} (s : l₁ <+ l₂) : filter p l₁ <+ filter p l₂ := by
  rw [← filterMap_eq_filter]; apply s.filterMap

theorem sublist_filterMap_iff {l₁ : List β} {f : α → Option β} :
    l₁ <+ l₂.filterMap f ↔ ∃ l', l' <+ l₂ ∧ l₁ = l'.filterMap f := by
  induction l₂ generalizing l₁ with
  | nil => simp
  | cons a l₂ ih =>
    simp only [filterMap_cons]
    split
    · simp only [ih]
      constructor
      · rintro ⟨l', h, rfl⟩
        exact ⟨l', Sublist.cons a h, rfl⟩
      · rintro ⟨l', h, rfl⟩
        cases h with
        | cons _ h =>
          exact ⟨l', h, rfl⟩
        | cons₂ _ h =>
          rename_i l'
          exact ⟨l', h, by simp_all⟩
    · constructor
      · intro w
        cases w with
        | cons _ h =>
          obtain ⟨l', s, rfl⟩ := ih.1 h
          exact ⟨l', Sublist.cons a s, rfl⟩
        | cons₂ _ h =>
          rename_i l'
          obtain ⟨l', s, rfl⟩ := ih.1 h
          refine ⟨a :: l', Sublist.cons₂ a s, ?_⟩
          rwa [filterMap_cons_some]
      · rintro ⟨l', h, rfl⟩
        replace h := h.filterMap f
        rwa [filterMap_cons_some] at h
        assumption

theorem sublist_map_iff {l₁ : List β} {f : α → β} :
    l₁ <+ l₂.map f ↔ ∃ l', l' <+ l₂ ∧ l₁ = l'.map f := by
  simp only [← filterMap_eq_map, sublist_filterMap_iff]

theorem sublist_filter_iff {l₁ : List α} {p : α → Bool} :
    l₁ <+ l₂.filter p ↔ ∃ l', l' <+ l₂ ∧ l₁ = l'.filter p := by
  simp only [← filterMap_eq_filter, sublist_filterMap_iff]

@[simp] theorem sublist_append_left : ∀ l₁ l₂ : List α, l₁ <+ l₁ ++ l₂
  | [], _ => nil_sublist _
  | _ :: l₁, l₂ => (sublist_append_left l₁ l₂).cons₂ _

@[simp] theorem sublist_append_right : ∀ l₁ l₂ : List α, l₂ <+ l₁ ++ l₂
  | [], _ => Sublist.refl _
  | _ :: l₁, l₂ => (sublist_append_right l₁ l₂).cons _

@[simp] theorem singleton_sublist {a : α} {l} : [a] <+ l ↔ a ∈ l := by
  refine ⟨fun h => h.subset (mem_singleton_self _), fun h => ?_⟩
  obtain ⟨_, _, rfl⟩ := append_of_mem h
  exact ((nil_sublist _).cons₂ _).trans (sublist_append_right ..)

theorem sublist_append_of_sublist_left (s : l <+ l₁) : l <+ l₁ ++ l₂ :=
  s.trans <| sublist_append_left ..

theorem sublist_append_of_sublist_right (s : l <+ l₂) : l <+ l₁ ++ l₂ :=
  s.trans <| sublist_append_right ..

@[simp] theorem append_sublist_append_left : ∀ l, l ++ l₁ <+ l ++ l₂ ↔ l₁ <+ l₂
  | [] => Iff.rfl
  | _ :: l => cons_sublist_cons.trans (append_sublist_append_left l)

theorem Sublist.append_left : l₁ <+ l₂ → ∀ l, l ++ l₁ <+ l ++ l₂ :=
  fun h l => (append_sublist_append_left l).mpr h

theorem Sublist.append_right : l₁ <+ l₂ → ∀ l, l₁ ++ l <+ l₂ ++ l
  | .slnil, _ => Sublist.refl _
  | .cons _ h, _ => (h.append_right _).cons _
  | .cons₂ _ h, _ => (h.append_right _).cons₂ _

theorem Sublist.append (hl : l₁ <+ l₂) (hr : r₁ <+ r₂) : l₁ ++ r₁ <+ l₂ ++ r₂ :=
  (hl.append_right _).trans ((append_sublist_append_left _).2 hr)

theorem sublist_cons_iff {a : α} {l l'} :
    l <+ a :: l' ↔ l <+ l' ∨ ∃ r, l = a :: r ∧ r <+ l' := by
  constructor
  · intro h
    cases h with
    | cons _ h => exact Or.inl h
    | cons₂ _ h => exact Or.inr ⟨_, rfl, h⟩
  · rintro (h | ⟨r, rfl, h⟩)
    · exact h.cons _
    · exact h.cons₂ _

theorem cons_sublist_iff {a : α} {l l'} :
    a :: l <+ l' ↔ ∃ r₁ r₂, l' = r₁ ++ r₂ ∧ a ∈ r₁ ∧ l <+ r₂ := by
  induction l' with
  | nil => simp
  | cons a' l' ih =>
    constructor
    · intro w
      cases w with
      | cons _ w =>
        obtain ⟨r₁, r₂, rfl, h₁, h₂⟩ := ih.1 w
        exact ⟨a' :: r₁, r₂, by simp, mem_cons_of_mem a' h₁, h₂⟩
      | cons₂ _ w =>
        exact ⟨[a], l', by simp, mem_singleton_self _, w⟩
    · rintro ⟨r₁, r₂, w, h₁, h₂⟩
      rw [w, ← singleton_append]
      exact Sublist.append (by simpa) h₂

theorem sublist_append_iff {l : List α} :
    l <+ r₁ ++ r₂ ↔ ∃ l₁ l₂, l = l₁ ++ l₂ ∧ l₁ <+ r₁ ∧ l₂ <+ r₂ := by
  induction r₁ generalizing l with
  | nil =>
    constructor
    · intro w
      refine ⟨[], l, by simp_all⟩
    · rintro ⟨l₁, l₂, rfl, w₁, w₂⟩
      simp_all
  | cons r r₁ ih =>
    constructor
    · intro w
      simp only [cons_append] at w
      cases w with
      | cons _ w =>
        obtain ⟨l₁, l₂, rfl, w₁, w₂⟩ := ih.1 w
        exact ⟨l₁, l₂, rfl, Sublist.cons r w₁, w₂⟩
      | cons₂ _ w =>
        rename_i l
        obtain ⟨l₁, l₂, rfl, w₁, w₂⟩ := ih.1 w
        refine ⟨r :: l₁, l₂, by simp, cons_sublist_cons.mpr w₁, w₂⟩
    · rintro ⟨l₁, l₂, rfl, w₁, w₂⟩
      cases w₁ with
      | cons _ w₁ =>
        exact Sublist.cons _ (Sublist.append w₁ w₂)
      | cons₂ _ w₁ =>
        rename_i l
        exact Sublist.cons₂ _ (Sublist.append w₁ w₂)

theorem append_sublist_iff {l₁ l₂ : List α} :
    l₁ ++ l₂ <+ r ↔ ∃ r₁ r₂, r = r₁ ++ r₂ ∧ l₁ <+ r₁ ∧ l₂ <+ r₂ := by
  induction l₁ generalizing r with
  | nil =>
    constructor
    · intro w
      refine ⟨[], r, by simp_all⟩
    · rintro ⟨r₁, r₂, rfl, -, w₂⟩
      simp only [nil_append]
      exact sublist_append_of_sublist_right w₂
  | cons a l₁ ih =>
    constructor
    · rw [cons_append, cons_sublist_iff]
      rintro ⟨r₁, r₂, rfl, h₁, h₂⟩
      obtain ⟨s₁, s₂, rfl, t₁, t₂⟩ := ih.1 h₂
      refine ⟨r₁ ++ s₁, s₂, by simp, ?_, t₂⟩
      rw [← singleton_append]
      exact Sublist.append (by simpa) t₁
    · rintro ⟨r₁, r₂, rfl, h₁, h₂⟩
      exact Sublist.append h₁ h₂

theorem Sublist.reverse : l₁ <+ l₂ → l₁.reverse <+ l₂.reverse
  | .slnil => Sublist.refl _
  | .cons _ h => by rw [reverse_cons]; exact sublist_append_of_sublist_left h.reverse
  | .cons₂ _ h => by rw [reverse_cons, reverse_cons]; exact h.reverse.append_right _

@[simp] theorem reverse_sublist : l₁.reverse <+ l₂.reverse ↔ l₁ <+ l₂ :=
  ⟨fun h => l₁.reverse_reverse ▸ l₂.reverse_reverse ▸ h.reverse, Sublist.reverse⟩

theorem sublist_reverse_iff : l₁ <+ l₂.reverse ↔ l₁.reverse <+ l₂ :=
  by rw [← reverse_sublist, reverse_reverse]

@[simp] theorem append_sublist_append_right (l) : l₁ ++ l <+ l₂ ++ l ↔ l₁ <+ l₂ :=
  ⟨fun h => by
    have := h.reverse
    simp only [reverse_append, append_sublist_append_left, reverse_sublist] at this
    exact this,
   fun h => h.append_right l⟩

@[simp] theorem replicate_sublist_replicate {m n} (a : α) :
    replicate m a <+ replicate n a ↔ m ≤ n := by
  refine ⟨fun h => ?_, fun h => ?_⟩
  · have := h.length_le; simp only [length_replicate] at this ⊢; exact this
  · induction h with
    | refl => apply Sublist.refl
    | step => simp [*, replicate, Sublist.cons]

theorem sublist_replicate_iff : l <+ replicate m a ↔ ∃ n, n ≤ m ∧ l = replicate n a := by
  induction l generalizing m with
  | nil =>
    simp only [nil_sublist, true_iff]
    exact ⟨0, zero_le m, by simp⟩
  | cons b l ih =>
    constructor
    · intro w
      cases m with
      | zero => simp at w
      | succ m =>
        simp [replicate_succ] at w
        cases w with
        | cons _ w =>
          obtain ⟨n, le, rfl⟩ := ih.1 (sublist_of_cons_sublist w)
          obtain rfl := (mem_replicate.1 (mem_of_cons_sublist w)).2
          exact ⟨n+1, Nat.add_le_add_right le 1, rfl⟩
        | cons₂ _ w =>
          obtain ⟨n, le, rfl⟩ := ih.1 w
          refine ⟨n+1, Nat.add_le_add_right le 1, by simp [replicate_succ]⟩
    · rintro ⟨n, le, w⟩
      rw [w]
      exact (replicate_sublist_replicate a).2 le

theorem sublist_join_of_mem {L : List (List α)} {l} (h : l ∈ L) : l <+ L.join := by
  induction L with
  | nil => cases h
  | cons l' L ih =>
    rcases mem_cons.1 h with (rfl | h)
    · simp [h]
    · simp [ih h, join_cons, sublist_append_of_sublist_right]

theorem sublist_join_iff {L : List (List α)} {l} :
    l <+ L.join ↔
      ∃ L' : List (List α), l = L'.join ∧ ∀ i (_ : i < L'.length), L'[i] <+ L[i]?.getD [] := by
  induction L generalizing l with
  | nil =>
    constructor
    · intro w
      simp only [join_nil, sublist_nil] at w
      subst w
      exact ⟨[], by simp, fun i x => by cases x⟩
    · rintro ⟨L', rfl, h⟩
      simp only [join_nil, sublist_nil, join_eq_nil_iff]
      simp only [getElem?_nil, Option.getD_none, sublist_nil] at h
      exact (forall_getElem L' (· = [])).1 h
  | cons l' L ih =>
    simp only [join_cons, sublist_append_iff, ih]
    constructor
    · rintro ⟨l₁, l₂, rfl, s, L', rfl, h⟩
      refine ⟨l₁ :: L', by simp, ?_⟩
      intro i lt
      cases i <;> simp_all
    · rintro ⟨L', rfl, h⟩
      cases L' with
      | nil =>
        exact ⟨[], [], by simp, by simp, [], by simp, fun i x => by cases x⟩
      | cons l₁ L' =>
        exact ⟨l₁, L'.join, by simp, by simpa using h 0 (by simp), L', rfl,
          fun i lt => by simpa using h (i+1) (Nat.add_lt_add_right lt 1)⟩

theorem join_sublist_iff {L : List (List α)} {l} :
    L.join <+ l ↔
      ∃ L' : List (List α), l = L'.join ∧ ∀ i (_ : i < L.length), L[i] <+ L'[i]?.getD [] := by
  induction L generalizing l with
  | nil =>
    constructor
    · intro _
      exact ⟨[l], by simp, fun i x => by cases x⟩
    · rintro ⟨L', rfl, _⟩
      simp only [join_nil, nil_sublist]
  | cons l' L ih =>
    simp only [join_cons, append_sublist_iff, ih]
    constructor
    · rintro ⟨l₁, l₂, rfl, s, L', rfl, h⟩
      refine ⟨l₁ :: L', by simp, ?_⟩
      intro i lt
      cases i <;> simp_all
    · rintro ⟨L', rfl, h⟩
      cases L' with
      | nil =>
        exact ⟨[], [], by simp, by simpa using h 0 (by simp), [], by simp,
          fun i x => by simpa using h (i+1) (Nat.add_lt_add_right x 1)⟩
      | cons l₁ L' =>
        exact ⟨l₁, L'.join, by simp, by simpa using h 0 (by simp), L', rfl,
          fun i lt => by simpa using h (i+1) (Nat.add_lt_add_right lt 1)⟩

@[simp] theorem isSublist_iff_sublist [BEq α] [LawfulBEq α] {l₁ l₂ : List α} :
    l₁.isSublist l₂ ↔ l₁ <+ l₂ := by
  cases l₁ <;> cases l₂ <;> simp [isSublist]
  case cons.cons hd₁ tl₁ hd₂ tl₂ =>
    if h_eq : hd₁ = hd₂ then
      simp [h_eq, cons_sublist_cons, isSublist_iff_sublist]
    else
      simp only [beq_iff_eq, h_eq]
      constructor
      · intro h_sub
        apply Sublist.cons
        exact isSublist_iff_sublist.mp h_sub
      · intro h_sub
        cases h_sub
        case cons h_sub =>
          exact isSublist_iff_sublist.mpr h_sub
        case cons₂ =>
          contradiction

instance [DecidableEq α] (l₁ l₂ : List α) : Decidable (l₁ <+ l₂) :=
  decidable_of_iff (l₁.isSublist l₂) isSublist_iff_sublist

/-! ### IsPrefix / IsSuffix / IsInfix -/

@[simp] theorem prefix_append (l₁ l₂ : List α) : l₁ <+: l₁ ++ l₂ := ⟨l₂, rfl⟩

@[simp] theorem suffix_append (l₁ l₂ : List α) : l₂ <:+ l₁ ++ l₂ := ⟨l₁, rfl⟩

theorem infix_append (l₁ l₂ l₃ : List α) : l₂ <:+: l₁ ++ l₂ ++ l₃ := ⟨l₁, l₃, rfl⟩

@[simp] theorem infix_append' (l₁ l₂ l₃ : List α) : l₂ <:+: l₁ ++ (l₂ ++ l₃) := by
  rw [← List.append_assoc]; apply infix_append

theorem IsPrefix.isInfix : l₁ <+: l₂ → l₁ <:+: l₂ := fun ⟨t, h⟩ => ⟨[], t, h⟩

theorem IsSuffix.isInfix : l₁ <:+ l₂ → l₁ <:+: l₂ := fun ⟨t, h⟩ => ⟨t, [], by rw [h, append_nil]⟩

@[simp] theorem nil_prefix (l : List α) : [] <+: l := ⟨l, rfl⟩

@[simp] theorem nil_suffix (l : List α) : [] <:+ l := ⟨l, append_nil _⟩

@[simp] theorem nil_infix (l : List α) : [] <:+: l := (nil_prefix _).isInfix

@[simp] theorem prefix_refl (l : List α) : l <+: l := ⟨[], append_nil _⟩

@[simp] theorem suffix_refl (l : List α) : l <:+ l := ⟨[], rfl⟩

@[simp] theorem infix_refl (l : List α) : l <:+: l := (prefix_refl l).isInfix

@[simp] theorem suffix_cons (a : α) : ∀ l, l <:+ a :: l := suffix_append [a]

theorem infix_cons : l₁ <:+: l₂ → l₁ <:+: a :: l₂ := fun ⟨L₁, L₂, h⟩ => ⟨a :: L₁, L₂, h ▸ rfl⟩

theorem infix_concat : l₁ <:+: l₂ → l₁ <:+: concat l₂ a := fun ⟨L₁, L₂, h⟩ =>
  ⟨L₁, concat L₂ a, by simp [← h, concat_eq_append, append_assoc]⟩

theorem IsPrefix.trans : ∀ {l₁ l₂ l₃ : List α}, l₁ <+: l₂ → l₂ <+: l₃ → l₁ <+: l₃
  | _, _, _, ⟨r₁, rfl⟩, ⟨r₂, rfl⟩ => ⟨r₁ ++ r₂, (append_assoc _ _ _).symm⟩

theorem IsSuffix.trans : ∀ {l₁ l₂ l₃ : List α}, l₁ <:+ l₂ → l₂ <:+ l₃ → l₁ <:+ l₃
  | _, _, _, ⟨l₁, rfl⟩, ⟨l₂, rfl⟩ => ⟨l₂ ++ l₁, append_assoc _ _ _⟩

theorem IsInfix.trans : ∀ {l₁ l₂ l₃ : List α}, l₁ <:+: l₂ → l₂ <:+: l₃ → l₁ <:+: l₃
  | l, _, _, ⟨l₁, r₁, rfl⟩, ⟨l₂, r₂, rfl⟩ => ⟨l₂ ++ l₁, r₁ ++ r₂, by simp only [append_assoc]⟩

protected theorem IsInfix.sublist : l₁ <:+: l₂ → l₁ <+ l₂
  | ⟨_, _, h⟩ => h ▸ (sublist_append_right ..).trans (sublist_append_left ..)

protected theorem IsInfix.subset (hl : l₁ <:+: l₂) : l₁ ⊆ l₂ :=
  hl.sublist.subset

protected theorem IsPrefix.sublist (h : l₁ <+: l₂) : l₁ <+ l₂ :=
  h.isInfix.sublist

protected theorem IsPrefix.subset (hl : l₁ <+: l₂) : l₁ ⊆ l₂ :=
  hl.sublist.subset

protected theorem IsSuffix.sublist (h : l₁ <:+ l₂) : l₁ <+ l₂ :=
  h.isInfix.sublist

protected theorem IsSuffix.subset (hl : l₁ <:+ l₂) : l₁ ⊆ l₂ :=
  hl.sublist.subset

@[simp] theorem reverse_suffix : reverse l₁ <:+ reverse l₂ ↔ l₁ <+: l₂ :=
  ⟨fun ⟨r, e⟩ => ⟨reverse r, by rw [← reverse_reverse l₁, ← reverse_append, e, reverse_reverse]⟩,
   fun ⟨r, e⟩ => ⟨reverse r, by rw [← reverse_append, e]⟩⟩

@[simp] theorem reverse_prefix : reverse l₁ <+: reverse l₂ ↔ l₁ <:+ l₂ := by
  rw [← reverse_suffix]; simp only [reverse_reverse]

@[simp] theorem reverse_infix : reverse l₁ <:+: reverse l₂ ↔ l₁ <:+: l₂ := by
  refine ⟨fun ⟨s, t, e⟩ => ⟨reverse t, reverse s, ?_⟩, fun ⟨s, t, e⟩ => ⟨reverse t, reverse s, ?_⟩⟩
  · rw [← reverse_reverse l₁, append_assoc, ← reverse_append, ← reverse_append, e,
      reverse_reverse]
  · rw [append_assoc, ← reverse_append, ← reverse_append, e]

theorem IsInfix.length_le (h : l₁ <:+: l₂) : l₁.length ≤ l₂.length :=
  h.sublist.length_le

theorem IsPrefix.length_le (h : l₁ <+: l₂) : l₁.length ≤ l₂.length :=
  h.sublist.length_le

theorem IsSuffix.length_le (h : l₁ <:+ l₂) : l₁.length ≤ l₂.length :=
  h.sublist.length_le

@[simp] theorem infix_nil : l <:+: [] ↔ l = [] := ⟨(sublist_nil.1 ·.sublist), (· ▸ infix_refl _)⟩

@[simp] theorem prefix_nil : l <+: [] ↔ l = [] := ⟨(sublist_nil.1 ·.sublist), (· ▸ prefix_refl _)⟩

@[simp] theorem suffix_nil : l <:+ [] ↔ l = [] := ⟨(sublist_nil.1 ·.sublist), (· ▸ suffix_refl _)⟩

theorem infix_iff_prefix_suffix (l₁ l₂ : List α) : l₁ <:+: l₂ ↔ ∃ t, l₁ <+: t ∧ t <:+ l₂ :=
  ⟨fun ⟨_, t, e⟩ => ⟨l₁ ++ t, ⟨_, rfl⟩, e ▸ append_assoc .. ▸ ⟨_, rfl⟩⟩,
    fun ⟨_, ⟨t, rfl⟩, s, e⟩ => ⟨s, t, append_assoc .. ▸ e⟩⟩

theorem IsInfix.eq_of_length (h : l₁ <:+: l₂) : l₁.length = l₂.length → l₁ = l₂ :=
  h.sublist.eq_of_length

theorem IsPrefix.eq_of_length (h : l₁ <+: l₂) : l₁.length = l₂.length → l₁ = l₂ :=
  h.sublist.eq_of_length

theorem IsSuffix.eq_of_length (h : l₁ <:+ l₂) : l₁.length = l₂.length → l₁ = l₂ :=
  h.sublist.eq_of_length

theorem prefix_of_prefix_length_le :
    ∀ {l₁ l₂ l₃ : List α}, l₁ <+: l₃ → l₂ <+: l₃ → length l₁ ≤ length l₂ → l₁ <+: l₂
  | [], l₂, _, _, _, _ => nil_prefix _
  | a :: l₁, b :: l₂, _, ⟨r₁, rfl⟩, ⟨r₂, e⟩, ll => by
    injection e with _ e'; subst b
    rcases prefix_of_prefix_length_le ⟨_, rfl⟩ ⟨_, e'⟩ (le_of_succ_le_succ ll) with ⟨r₃, rfl⟩
    exact ⟨r₃, rfl⟩

theorem prefix_or_prefix_of_prefix (h₁ : l₁ <+: l₃) (h₂ : l₂ <+: l₃) : l₁ <+: l₂ ∨ l₂ <+: l₁ :=
  (Nat.le_total (length l₁) (length l₂)).imp (prefix_of_prefix_length_le h₁ h₂)
    (prefix_of_prefix_length_le h₂ h₁)

theorem suffix_of_suffix_length_le
    (h₁ : l₁ <:+ l₃) (h₂ : l₂ <:+ l₃) (ll : length l₁ ≤ length l₂) : l₁ <:+ l₂ :=
  reverse_prefix.1 <|
    prefix_of_prefix_length_le (reverse_prefix.2 h₁) (reverse_prefix.2 h₂) (by simp [ll])

theorem suffix_or_suffix_of_suffix (h₁ : l₁ <:+ l₃) (h₂ : l₂ <:+ l₃) : l₁ <:+ l₂ ∨ l₂ <:+ l₁ :=
  (prefix_or_prefix_of_prefix (reverse_prefix.2 h₁) (reverse_prefix.2 h₂)).imp reverse_prefix.1
    reverse_prefix.1

theorem prefix_cons_iff : l₁ <+: a :: l₂ ↔ l₁ = [] ∨ ∃ t, l₁ = a :: t ∧ t <+: l₂ := by
  cases l₁ with
  | nil => simp
  | cons a' l₁ =>
    constructor
    · rintro ⟨t, h⟩
      simp at h
      obtain ⟨rfl, rfl⟩ := h
      exact Or.inr ⟨l₁, rfl, prefix_append l₁ t⟩
    · rintro (h | ⟨t, w, ⟨s, h'⟩⟩)
      · simp [h]
      · simp only [w]
        refine ⟨s, by simp [h']⟩

@[simp] theorem cons_prefix_cons : a :: l₁ <+: b :: l₂ ↔ a = b ∧ l₁ <+: l₂ := by
  simp only [prefix_cons_iff, cons.injEq, false_or]
  constructor
  · rintro ⟨t, ⟨rfl, rfl⟩, h⟩
    exact ⟨rfl, h⟩
  · rintro ⟨rfl, h⟩
    exact ⟨l₁, ⟨rfl, rfl⟩, h⟩

theorem suffix_cons_iff : l₁ <:+ a :: l₂ ↔ l₁ = a :: l₂ ∨ l₁ <:+ l₂ := by
  constructor
  · rintro ⟨⟨hd, tl⟩, hl₃⟩
    · exact Or.inl hl₃
    · simp only [cons_append] at hl₃
      injection hl₃ with _ hl₄
      exact Or.inr ⟨_, hl₄⟩
  · rintro (rfl | hl₁)
    · exact (a :: l₂).suffix_refl
    · exact hl₁.trans (l₂.suffix_cons _)

theorem infix_cons_iff : l₁ <:+: a :: l₂ ↔ l₁ <+: a :: l₂ ∨ l₁ <:+: l₂ := by
  constructor
  · rintro ⟨⟨hd, tl⟩, t, hl₃⟩
    · exact Or.inl ⟨t, hl₃⟩
    · simp only [cons_append] at hl₃
      injection hl₃ with _ hl₄
      exact Or.inr ⟨_, t, hl₄⟩
  · rintro (h | hl₁)
    · exact h.isInfix
    · exact infix_cons hl₁

theorem infix_of_mem_join : ∀ {L : List (List α)}, l ∈ L → l <:+: join L
  | l' :: _, h =>
    match h with
    | List.Mem.head .. => infix_append [] _ _
    | List.Mem.tail _ hlMemL =>
      IsInfix.trans (infix_of_mem_join hlMemL) <| (suffix_append _ _).isInfix

theorem prefix_append_right_inj (l) : l ++ l₁ <+: l ++ l₂ ↔ l₁ <+: l₂ :=
  exists_congr fun r => by rw [append_assoc, append_right_inj]

@[simp]
theorem prefix_cons_inj (a) : a :: l₁ <+: a :: l₂ ↔ l₁ <+: l₂ :=
  prefix_append_right_inj [a]

theorem take_prefix (n) (l : List α) : take n l <+: l :=
  ⟨_, take_append_drop _ _⟩

theorem drop_suffix (n) (l : List α) : drop n l <:+ l :=
  ⟨_, take_append_drop _ _⟩

theorem take_sublist (n) (l : List α) : take n l <+ l :=
  (take_prefix n l).sublist

theorem drop_sublist (n) (l : List α) : drop n l <+ l :=
  (drop_suffix n l).sublist

theorem take_subset (n) (l : List α) : take n l ⊆ l :=
  (take_sublist n l).subset

theorem drop_subset (n) (l : List α) : drop n l ⊆ l :=
  (drop_sublist n l).subset

theorem mem_of_mem_take {l : List α} (h : a ∈ l.take n) : a ∈ l :=
  take_subset n l h

theorem mem_of_mem_drop {n} {l : List α} (h : a ∈ l.drop n) : a ∈ l :=
  drop_subset _ _ h

theorem IsPrefix.filter (p : α → Bool) ⦃l₁ l₂ : List α⦄ (h : l₁ <+: l₂) :
    l₁.filter p <+: l₂.filter p := by
  obtain ⟨xs, rfl⟩ := h
  rw [filter_append]; apply prefix_append

theorem IsSuffix.filter (p : α → Bool) ⦃l₁ l₂ : List α⦄ (h : l₁ <:+ l₂) :
    l₁.filter p <:+ l₂.filter p := by
  obtain ⟨xs, rfl⟩ := h
  rw [filter_append]; apply suffix_append

theorem IsInfix.filter (p : α → Bool) ⦃l₁ l₂ : List α⦄ (h : l₁ <:+: l₂) :
    l₁.filter p <:+: l₂.filter p := by
  obtain ⟨xs, ys, rfl⟩ := h
  rw [filter_append, filter_append]; apply infix_append _

@[simp] theorem isPrefixOf_iff_prefix [BEq α] [LawfulBEq α] {l₁ l₂ : List α} :
    l₁.isPrefixOf l₂ ↔ l₁ <+: l₂ := by
  induction l₁ generalizing l₂ with
  | nil => simp
  | cons a l₁ ih =>
    cases l₂ with
    | nil => simp
    | cons a' l₂ => simp [isPrefixOf, ih]

instance [DecidableEq α] (l₁ l₂ : List α) : Decidable (l₁ <+: l₂) :=
  decidable_of_iff (l₁.isPrefixOf l₂) isPrefixOf_iff_prefix

@[simp] theorem isSuffixOf_iff_suffix [BEq α] [LawfulBEq α] {l₁ l₂ : List α} :
    l₁.isSuffixOf l₂ ↔ l₁ <:+ l₂ := by
  simp [isSuffixOf]

instance [DecidableEq α] (l₁ l₂ : List α) : Decidable (l₁ <:+ l₂) :=
  decidable_of_iff (l₁.isSuffixOf l₂) isSuffixOf_iff_suffix

/-! ### rotateLeft -/

@[simp] theorem rotateLeft_zero (l : List α) : rotateLeft l 0 = l := by
  simp [rotateLeft]

-- TODO Batteries defines its own `getElem?_rotate`, which we need to adapt.
-- TODO Prove `map_rotateLeft`, using `ext` and `getElem?_rotateLeft`.

/-! ### rotateRight -/

@[simp] theorem rotateRight_zero (l : List α) : rotateRight l 0 = l := by
  simp [rotateRight]

-- TODO Batteries defines its own `getElem?_rotate`, which we need to adapt.
-- TODO Prove `map_rotateRight`, using `ext` and `getElem?_rotateRight`.

/-! ## Pairwise and Nodup -/

/-! ### Pairwise -/

theorem Pairwise.sublist : l₁ <+ l₂ → l₂.Pairwise R → l₁.Pairwise R
  | .slnil, h => h
  | .cons _ s, .cons _ h₂ => h₂.sublist s
  | .cons₂ _ s, .cons h₁ h₂ => (h₂.sublist s).cons fun _ h => h₁ _ (s.subset h)

theorem pairwise_map {l : List α} :
    (l.map f).Pairwise R ↔ l.Pairwise fun a b => R (f a) (f b) := by
  induction l
  · simp
  · simp only [map, pairwise_cons, forall_mem_map, *]

theorem pairwise_append {l₁ l₂ : List α} :
    (l₁ ++ l₂).Pairwise R ↔ l₁.Pairwise R ∧ l₂.Pairwise R ∧ ∀ a ∈ l₁, ∀ b ∈ l₂, R a b := by
  induction l₁ <;> simp [*, or_imp, forall_and, and_assoc, and_left_comm]

theorem pairwise_reverse {l : List α} :
    l.reverse.Pairwise R ↔ l.Pairwise (fun a b => R b a) := by
  induction l <;> simp [*, pairwise_append, and_comm]

@[simp] theorem pairwise_replicate {n : Nat} {a : α} :
    (replicate n a).Pairwise R ↔ n ≤ 1 ∨ R a a := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, pairwise_cons, mem_replicate, ne_eq, and_imp,
      forall_eq_apply_imp_iff, ih]
    constructor
    · rintro ⟨h, h' | h'⟩
      · by_cases w : n = 0
        · left
          subst w
          simp
        · right
          exact h w
      · right
        exact h'
    · rintro (h | h)
      · obtain rfl := eq_zero_of_le_zero (le_of_lt_succ h)
        simp
      · exact ⟨fun _ => h, Or.inr h⟩

theorem Pairwise.imp {α R S} (H : ∀ {a b}, R a b → S a b) :
    ∀ {l : List α}, l.Pairwise R → l.Pairwise S
  | _, .nil => .nil
  | _, .cons h₁ h₂ => .cons (H ∘ h₁ ·) (h₂.imp H)

/-! ### Nodup -/

@[simp]
theorem nodup_nil : @Nodup α [] :=
  Pairwise.nil

@[simp]
theorem nodup_cons {a : α} {l : List α} : Nodup (a :: l) ↔ a ∉ l ∧ Nodup l := by
  simp only [Nodup, pairwise_cons, forall_mem_ne]

theorem Nodup.sublist : l₁ <+ l₂ → Nodup l₂ → Nodup l₁ :=
  Pairwise.sublist

theorem Sublist.nodup : l₁ <+ l₂ → Nodup l₂ → Nodup l₁ :=
  Nodup.sublist

theorem getElem?_inj {xs : List α}
    (h₀ : i < xs.length) (h₁ : Nodup xs) (h₂ : xs[i]? = xs[j]?) : i = j := by
  induction xs generalizing i j with
  | nil => cases h₀
  | cons x xs ih =>
    match i, j with
    | 0, 0 => rfl
    | i+1, j+1 =>
      cases h₁ with
      | cons ha h₁ =>
        simp only [getElem?_cons_succ] at h₂
        exact congrArg (· + 1) (ih (Nat.lt_of_succ_lt_succ h₀) h₁ h₂)
    | i+1, 0 => ?_
    | 0, j+1 => ?_
    all_goals
      simp only [get?_eq_getElem?, getElem?_cons_zero, getElem?_cons_succ] at h₂
      cases h₁; rename_i h' h
      have := h x ?_ rfl; cases this
      rw [mem_iff_get?]
      simp only [get?_eq_getElem?]
    exact ⟨_, h₂⟩; exact ⟨_ , h₂.symm⟩

@[simp] theorem nodup_replicate {n : Nat} {a : α} :
    (replicate n a).Nodup ↔ n ≤ 1 := by simp [Nodup]

/-! ## Manipulating elements -/

/-! ### replace -/
section replace
variable [BEq α]

@[simp] theorem replace_cons_self [LawfulBEq α] {a : α} : (a::as).replace a b = b::as := by
  simp [replace_cons]

@[simp] theorem replace_of_not_mem {l : List α} (h : !l.elem a) : l.replace a b = l := by
  induction l <;> simp_all [replace_cons]

@[simp] theorem length_replace {l : List α} : (l.replace a b).length = l.length := by
  induction l with
  | nil => simp
  | cons x l ih =>
    simp only [replace_cons]
    split <;> simp_all

theorem getElem?_replace [LawfulBEq α] {l : List α} {i : Nat} :
    (l.replace a b)[i]? = if l[i]? == some a then if a ∈ l.take i then some a else some b else l[i]? := by
  induction l generalizing i with
  | nil => cases i <;> simp
  | cons x xs ih =>
    cases i <;>
    · simp only [replace_cons]
      split <;> split <;> simp_all

theorem getElem?_replace_of_ne [LawfulBEq α] {l : List α} {i : Nat} (h : l[i]? ≠ some a) :
    (l.replace a b)[i]? = l[i]? := by
  simp_all [getElem?_replace]

theorem getElem_replace [LawfulBEq α] {l : List α} {i : Nat} (h : i < l.length) :
    (l.replace a b)[i]'(by simpa) = if l[i] == a then if a ∈ l.take i then a else b else l[i] := by
  apply Option.some.inj
  rw [← getElem?_eq_getElem, getElem?_replace]
  split <;> split <;> simp_all

theorem getElem_replace_of_ne [LawfulBEq α] {l : List α} {i : Nat} {h : i < l.length} (h' : l[i] ≠ a) :
    (l.replace a b)[i]'(by simpa) = l[i]'(h) := by
  rw [getElem_replace h]
  simp [h']

theorem head?_replace (l : List α) (a b : α) :
    (l.replace a b).head? = match l.head? with
      | none => none
      | some x => some (if a == x then b else x) := by
  cases l with
  | nil => rfl
  | cons x xs =>
    simp [replace_cons]
    split <;> simp_all

theorem head_replace (l : List α) (a b : α) (w) :
    (l.replace a b).head w =
      if a == l.head (by rintro rfl; simp_all) then
        b
      else
        l.head  (by rintro rfl; simp_all) := by
  apply Option.some.inj
  rw [← head?_eq_head, head?_replace, head?_eq_head]

theorem replace_append [LawfulBEq α] {l₁ l₂ : List α} :
    (l₁ ++ l₂).replace a b = if a ∈ l₁ then l₁.replace a b ++ l₂ else l₁ ++ l₂.replace a b := by
  induction l₁ with
  | nil => simp
  | cons x xs ih =>
    simp only [cons_append, replace_cons]
    split <;> split <;> simp_all

theorem replace_take {l : List α} {n : Nat} :
    (l.take n).replace a b = (l.replace a b).take n := by
  induction l generalizing n with
  | nil => simp
  | cons x xs ih =>
    cases n with
    | zero => simp [ih]
    | succ n =>
      simp only [replace_cons, take_succ_cons]
      split <;> simp_all

@[simp] theorem replace_replicate_self [LawfulBEq α] {a : α} (h : 0 < n) :
    (replicate n a).replace a b = b :: replicate (n - 1) a := by
  cases n <;> simp_all [replicate_succ, replace_cons]

@[simp] theorem replace_replicate_ne {a b c : α} (h : !b == a) :
    (replicate n a).replace b c = replicate n a := by
  rw [replace_of_not_mem]
  simp_all

end replace

/-! ### insert -/

section insert
variable [BEq α]

@[simp] theorem insert_nil (a : α) : [].insert a = [a] := rfl

variable [LawfulBEq α]

@[simp] theorem insert_of_mem {l : List α} (h : a ∈ l) : l.insert a = l := by
  simp [List.insert, h]

@[simp] theorem insert_of_not_mem {l : List α} (h : a ∉ l) : l.insert a = a :: l := by
  simp [List.insert, h]

@[simp] theorem mem_insert_iff {l : List α} : a ∈ l.insert b ↔ a = b ∨ a ∈ l := by
  if h : b ∈ l then
    rw [insert_of_mem h]
    constructor; {apply Or.inr}
    intro
    | Or.inl h' => rw [h']; exact h
    | Or.inr h' => exact h'
  else rw [insert_of_not_mem h, mem_cons]

@[simp 1100] theorem mem_insert_self (a : α) (l : List α) : a ∈ l.insert a :=
  mem_insert_iff.2 (Or.inl rfl)

theorem mem_insert_of_mem {l : List α} (h : a ∈ l) : a ∈ l.insert b :=
  mem_insert_iff.2 (Or.inr h)

theorem eq_or_mem_of_mem_insert {l : List α} (h : a ∈ l.insert b) : a = b ∨ a ∈ l :=
  mem_insert_iff.1 h

@[simp] theorem length_insert_of_mem {l : List α} (h : a ∈ l) :
    length (l.insert a) = length l := by rw [insert_of_mem h]

@[simp] theorem length_insert_of_not_mem {l : List α} (h : a ∉ l) :
    length (l.insert a) = length l + 1 := by rw [insert_of_not_mem h]; rfl

theorem length_le_length_insert {l : List α} {a : α} : l.length ≤ (l.insert a).length := by
  by_cases h : a ∈ l
  · rw [length_insert_of_mem h]
    exact Nat.le_refl _
  · rw [length_insert_of_not_mem h]
    exact Nat.le_succ _

theorem length_insert_pos {l : List α} {a : α} : 0 < (l.insert a).length := by
  by_cases h : a ∈ l
  · rw [length_insert_of_mem h]
    exact length_pos_of_mem h
  · rw [length_insert_of_not_mem h]
    exact Nat.zero_lt_succ _

theorem insert_eq {l : List α} {a : α} : l.insert a = if a ∈ l then l else a :: l := by
  simp [List.insert]

theorem getElem?_insert_zero (l : List α) (a : α) : (l.insert a)[0]? = if a ∈ l then l[0]? else some a := by
  simp only [insert_eq]
  split <;> simp

theorem getElem?_insert_succ (l : List α) (a : α) (i : Nat) :
    (l.insert a)[i+1]? = if a ∈ l then l[i+1]? else l[i]? := by
  simp only [insert_eq]
  split <;> simp

theorem getElem?_insert (l : List α) (a : α) (i : Nat) :
    (l.insert a)[i]? = if a ∈ l then l[i]? else if i = 0 then some a else l[i-1]? := by
  cases i
  · simp [getElem?_insert_zero]
  · simp [getElem?_insert_succ]

theorem getElem_insert (l : List α) (a : α) (i : Nat) (h : i < l.length) :
    (l.insert a)[i]'(Nat.lt_of_lt_of_le h length_le_length_insert) =
      if a ∈ l then l[i] else if i = 0 then a else l[i-1]'(Nat.lt_of_le_of_lt (Nat.pred_le _) h) := by
  apply Option.some.inj
  rw [← getElem?_eq_getElem, getElem?_insert]
  split
  · simp [getElem?_eq_getElem, h]
  · split
    · rfl
    · have h' : i - 1 < l.length := Nat.lt_of_le_of_lt (Nat.pred_le _) h
      simp [getElem?_eq_getElem, h']

theorem head?_insert (l : List α) (a : α) :
    (l.insert a).head? = some (if h : a ∈ l then l.head (ne_nil_of_mem h) else a) := by
  simp only [insert_eq]
  split <;> rename_i h
  · simp [head?_eq_head (ne_nil_of_mem h)]
  · rfl

theorem head_insert (l : List α) (a : α) (w) :
    (l.insert a).head w = if h : a ∈ l then l.head (ne_nil_of_mem h) else a := by
  apply Option.some.inj
  rw [← head?_eq_head, head?_insert]

theorem insert_append {l₁ l₂ : List α} {a : α} :
    (l₁ ++ l₂).insert a = if a ∈ l₂ then l₁ ++ l₂ else l₁.insert a ++ l₂ := by
  simp only [insert_eq, mem_append]
  (repeat split) <;> simp_all

@[simp] theorem insert_replicate_self {a : α} (h : 0 < n) : (replicate n a).insert a = replicate n a := by
  cases n <;> simp_all

@[simp] theorem insert_replicate_ne {a b : α} (h : !b == a) :
    (replicate n a).insert b = b :: replicate n a := by
  rw [insert_of_not_mem]
  simp_all

end insert

/-! ### eraseP -/

@[simp] theorem eraseP_nil : [].eraseP p = [] := rfl

theorem eraseP_cons (a : α) (l : List α) :
    (a :: l).eraseP p = bif p a then l else a :: l.eraseP p := rfl

@[simp] theorem eraseP_cons_of_pos {l : List α} {p} (h : p a) : (a :: l).eraseP p = l := by
  simp [eraseP_cons, h]

@[simp] theorem eraseP_cons_of_neg {l : List α} {p} (h : ¬p a) :
    (a :: l).eraseP p = a :: l.eraseP p := by simp [eraseP_cons, h]

theorem eraseP_of_forall_not {l : List α} (h : ∀ a, a ∈ l → ¬p a) : l.eraseP p = l := by
  induction l with
  | nil => rfl
  | cons _ _ ih => simp [h _ (.head ..), ih (forall_mem_cons.1 h).2]

theorem exists_of_eraseP : ∀ {l : List α} {a} (al : a ∈ l) (pa : p a),
    ∃ a l₁ l₂, (∀ b ∈ l₁, ¬p b) ∧ p a ∧ l = l₁ ++ a :: l₂ ∧ l.eraseP p = l₁ ++ l₂
  | b :: l, a, al, pa =>
    if pb : p b then
      ⟨b, [], l, forall_mem_nil _, pb, by simp [pb]⟩
    else
      match al with
      | .head .. => nomatch pb pa
      | .tail _ al =>
        let ⟨c, l₁, l₂, h₁, h₂, h₃, h₄⟩ := exists_of_eraseP al pa
        ⟨c, b::l₁, l₂, (forall_mem_cons ..).2 ⟨pb, h₁⟩,
          h₂, by rw [h₃, cons_append], by simp [pb, h₄]⟩

theorem exists_or_eq_self_of_eraseP (p) (l : List α) :
    l.eraseP p = l ∨
    ∃ a l₁ l₂, (∀ b ∈ l₁, ¬p b) ∧ p a ∧ l = l₁ ++ a :: l₂ ∧ l.eraseP p = l₁ ++ l₂ :=
  if h : ∃ a ∈ l, p a then
    let ⟨_, ha, pa⟩ := h
    .inr (exists_of_eraseP ha pa)
  else
    .inl (eraseP_of_forall_not (h ⟨·, ·, ·⟩))

@[simp] theorem length_eraseP_of_mem (al : a ∈ l) (pa : p a) :
    length (l.eraseP p) = length l - 1 := by
  let ⟨_, l₁, l₂, _, _, e₁, e₂⟩ := exists_of_eraseP al pa
  rw [e₂]; simp [length_append, e₁]; rfl

theorem length_eraseP {l : List α} : (l.eraseP p).length = if l.any p then l.length - 1 else l.length := by
  split <;> rename_i h
  · simp only [any_eq_true] at h
    obtain ⟨x, m, h⟩ := h
    simp [length_eraseP_of_mem m h]
  · simp only [any_eq_true] at h
    rw [eraseP_of_forall_not]
    simp_all

theorem eraseP_sublist (l : List α) : l.eraseP p <+ l := by
  match exists_or_eq_self_of_eraseP p l with
  | .inl h => rw [h]; apply Sublist.refl
  | .inr ⟨c, l₁, l₂, _, _, h₃, h₄⟩ => rw [h₄, h₃]; simp

theorem eraseP_subset (l : List α) : l.eraseP p ⊆ l := (eraseP_sublist l).subset

protected theorem Sublist.eraseP : l₁ <+ l₂ → l₁.eraseP p <+ l₂.eraseP p
  | .slnil => Sublist.refl _
  | .cons a s => by
    by_cases h : p a
    · simpa [h] using s.eraseP.trans (eraseP_sublist _)
    · simpa [h] using s.eraseP.cons _
  | .cons₂ a s => by
    by_cases h : p a
    · simpa [h] using s
    · simpa [h] using s.eraseP

theorem length_eraseP_le (l : List α) : (l.eraseP p).length ≤ l.length :=
  l.eraseP_sublist.length_le

theorem mem_of_mem_eraseP {l : List α} : a ∈ l.eraseP p → a ∈ l := (eraseP_subset _ ·)

@[simp] theorem mem_eraseP_of_neg {l : List α} (pa : ¬p a) : a ∈ l.eraseP p ↔ a ∈ l := by
  refine ⟨mem_of_mem_eraseP, fun al => ?_⟩
  match exists_or_eq_self_of_eraseP p l with
  | .inl h => rw [h]; assumption
  | .inr ⟨c, l₁, l₂, h₁, h₂, h₃, h₄⟩ =>
    rw [h₄]; rw [h₃] at al
    have : a ≠ c := fun h => (h ▸ pa).elim h₂
    simp [this] at al; simp [al]

@[simp] theorem eraseP_eq_self_iff {p} {l : List α} : l.eraseP p = l ↔ ∀ a ∈ l, ¬ p a := by
  rw [← Sublist.length_eq (eraseP_sublist l), length_eraseP]
  split <;> rename_i h
  · simp only [any_eq_true, length_eq_zero] at h
    constructor
    · intro; simp_all [Nat.sub_one_eq_self]
    · intro; obtain ⟨x, m, h⟩ := h; simp_all
  · simp_all

theorem eraseP_map (f : β → α) : ∀ (l : List β), (map f l).eraseP p = map f (l.eraseP (p ∘ f))
  | [] => rfl
  | b::l => by by_cases h : p (f b) <;> simp [h, eraseP_map f l, eraseP_cons_of_pos]

theorem eraseP_filterMap (f : α → Option β) : ∀ (l : List α),
    (filterMap f l).eraseP p = filterMap f (l.eraseP (fun x => match f x with | some y => p y | none => false))
  | [] => rfl
  | a::l => by
    rw [filterMap_cons, eraseP_cons]
    split <;> rename_i h
    · simp [h, eraseP_filterMap]
    · rename_i b
      rw [h, eraseP_cons]
      by_cases w : p b
      · simp [w]
      · simp only [w, cond_false]
        rw [filterMap_cons_some h, eraseP_filterMap]

theorem eraseP_filter (f : α → Bool) (l : List α) :
    (filter f l).eraseP p = filter f (l.eraseP (fun x => p x && f x)) := by
  rw [← filterMap_eq_filter, eraseP_filterMap]
  congr
  ext x
  simp only [Option.guard]
  split <;> split at * <;> simp_all

theorem eraseP_append_left {a : α} (pa : p a) :
    ∀ {l₁ : List α} l₂, a ∈ l₁ → (l₁++l₂).eraseP p = l₁.eraseP p ++ l₂
  | x :: xs, l₂, h => by
    by_cases h' : p x <;> simp [h']
    rw [eraseP_append_left pa l₂ ((mem_cons.1 h).resolve_left (mt _ h'))]
    intro | rfl => exact pa

theorem eraseP_append_right :
    ∀ {l₁ : List α} l₂, (∀ b ∈ l₁, ¬p b) → eraseP p (l₁++l₂) = l₁ ++ l₂.eraseP p
  | [],      l₂, _ => rfl
  | x :: xs, l₂, h => by
    simp [(forall_mem_cons.1 h).1, eraseP_append_right _ (forall_mem_cons.1 h).2]

theorem eraseP_append (l₁ l₂ : List α) :
    (l₁ ++ l₂).eraseP p = if l₁.any p then l₁.eraseP p ++ l₂ else l₁ ++ l₂.eraseP p := by
  split <;> rename_i h
  · simp only [any_eq_true] at h
    obtain ⟨x, m, h⟩ := h
    rw [eraseP_append_left h _ m]
  · simp only [any_eq_true] at h
    rw [eraseP_append_right _]
    simp_all

theorem eraseP_eq_iff {p} {l : List α} :
    l.eraseP p = l' ↔
      ((∀ a ∈ l, ¬ p a) ∧ l = l') ∨
        ∃ a l₁ l₂, (∀ b ∈ l₁, ¬ p b) ∧ p a ∧ l = l₁ ++ a :: l₂ ∧ l' = l₁ ++ l₂ := by
  cases exists_or_eq_self_of_eraseP p l with
  | inl h =>
    constructor
    · intro h'
      left
      exact ⟨eraseP_eq_self_iff.1 h, by simp_all⟩
    · rintro (⟨-, rfl⟩ | ⟨a, l₁, l₂, h₁, h₂, rfl, rfl⟩)
      · assumption
      · rw [eraseP_append_right _ h₁, eraseP_cons_of_pos h₂]
  | inr h =>
    obtain ⟨a, l₁, l₂, h₁, h₂, w₁, w₂⟩ := h
    rw [w₂]
    subst w₁
    constructor
    · rintro rfl
      right
      refine ⟨a, l₁, l₂, ?_⟩
      simp_all
    · rintro (h | h)
      · simp_all
      · obtain ⟨a', l₁', l₂', h₁', h₂', h, rfl⟩ := h
        have p : l₁ = l₁' := by
          have q : l₁ = takeWhile (fun x => !p x) (l₁ ++ a :: l₂) := by
            rw [takeWhile_append_of_pos (by simp_all),
              takeWhile_cons_of_neg (by simp [h₂]), append_nil]
          have q' : l₁' = takeWhile (fun x => !p x) (l₁' ++ a' :: l₂') := by
            rw [takeWhile_append_of_pos (by simpa using h₁'),
              takeWhile_cons_of_neg (by simp [h₂']), append_nil]
          simp [h] at q
          rw [q', q]
        subst p
        simp_all

@[simp] theorem eraseP_replicate_of_pos {n : Nat} {a : α} (h : p a) :
    (replicate n a).eraseP p = replicate (n - 1) a := by
  cases n <;> simp [replicate_succ, h]

@[simp] theorem eraseP_replicate_of_neg {n : Nat} {a : α} (h : ¬p a) :
    (replicate n a).eraseP p = replicate n a := by
  rw [eraseP_of_forall_not (by simp_all)]

theorem Nodup.eraseP (p) : Nodup l → Nodup (l.eraseP p) :=
  Nodup.sublist <| eraseP_sublist _

theorem eraseP_comm {l : List α} (h : ∀ a ∈ l, ¬ p a ∨ ¬ q a) :
    (l.eraseP p).eraseP q = (l.eraseP q).eraseP p := by
  induction l with
  | nil => rfl
  | cons a l ih =>
    simp only [eraseP_cons]
    by_cases h₁ : p a
    · by_cases h₂ : q a
      · simp_all
      · simp [h₁, h₂, ih (fun b m => h b (mem_cons_of_mem _ m))]
    · by_cases h₂ : q a
      · simp [h₁, h₂, ih (fun b m => h b (mem_cons_of_mem _ m))]
      · simp [h₁, h₂, ih (fun b m => h b (mem_cons_of_mem _ m))]

/-! ### erase -/
section erase
variable [BEq α]

@[simp] theorem erase_cons_head [LawfulBEq α] (a : α) (l : List α) : (a :: l).erase a = l := by
  simp [erase_cons]

@[simp] theorem erase_cons_tail {a b : α} {l : List α} (h : ¬(b == a)) :
    (b :: l).erase a = b :: l.erase a := by simp only [erase_cons, if_neg h]

theorem erase_of_not_mem [LawfulBEq α] {a : α} : ∀ {l : List α}, a ∉ l → l.erase a = l
  | [], _ => rfl
  | b :: l, h => by
    rw [mem_cons, not_or] at h
    simp only [erase_cons, if_neg, erase_of_not_mem h.2, beq_iff_eq, Ne.symm h.1, not_false_eq_true]

theorem erase_eq_eraseP' (a : α) (l : List α) : l.erase a = l.eraseP (· == a) := by
  induction l
  · simp
  · next b t ih =>
    rw [erase_cons, eraseP_cons, ih]
    if h : b == a then simp [h] else simp [h]

theorem erase_eq_eraseP [LawfulBEq α] (a : α) : ∀ l : List α,  l.erase a = l.eraseP (a == ·)
  | [] => rfl
  | b :: l => by
    if h : a = b then simp [h] else simp [h, Ne.symm h, erase_eq_eraseP a l]

theorem exists_erase_eq [LawfulBEq α] {a : α} {l : List α} (h : a ∈ l) :
    ∃ l₁ l₂, a ∉ l₁ ∧ l = l₁ ++ a :: l₂ ∧ l.erase a = l₁ ++ l₂ := by
  let ⟨_, l₁, l₂, h₁, e, h₂, h₃⟩ := exists_of_eraseP h (beq_self_eq_true _)
  rw [erase_eq_eraseP]; exact ⟨l₁, l₂, fun h => h₁ _ h (beq_self_eq_true _), eq_of_beq e ▸ h₂, h₃⟩

@[simp] theorem length_erase_of_mem [LawfulBEq α] {a : α} {l : List α} (h : a ∈ l) :
    length (l.erase a) = length l - 1 := by
  rw [erase_eq_eraseP]; exact length_eraseP_of_mem h (beq_self_eq_true a)

theorem length_erase [LawfulBEq α] (a : α) (l : List α) :
    length (l.erase a) = if a ∈ l then length l - 1 else length l := by
  rw [erase_eq_eraseP, length_eraseP]
  split <;> split <;> simp_all

theorem erase_sublist (a : α) (l : List α) : l.erase a <+ l :=
  erase_eq_eraseP' a l ▸ eraseP_sublist ..

theorem erase_subset (a : α) (l : List α) : l.erase a ⊆ l := (erase_sublist a l).subset

theorem Sublist.erase (a : α) {l₁ l₂ : List α} (h : l₁ <+ l₂) : l₁.erase a <+ l₂.erase a := by
  simp only [erase_eq_eraseP']; exact h.eraseP

theorem length_erase_le (a : α) (l : List α) : (l.erase a).length ≤ l.length :=
  (erase_sublist a l).length_le

theorem mem_of_mem_erase {a b : α} {l : List α} (h : a ∈ l.erase b) : a ∈ l := erase_subset _ _ h

@[simp] theorem mem_erase_of_ne [LawfulBEq α] {a b : α} {l : List α} (ab : a ≠ b) :
    a ∈ l.erase b ↔ a ∈ l :=
  erase_eq_eraseP b l ▸ mem_eraseP_of_neg (mt eq_of_beq ab.symm)

@[simp] theorem erase_eq_self_iff [LawfulBEq α] {l : List α} : l.erase a = l ↔ a ∉ l := by
  rw [erase_eq_eraseP', eraseP_eq_self_iff]
  simp

theorem erase_filter [LawfulBEq α] (f : α → Bool) (l : List α) :
    (filter f l).erase a = filter f (l.erase a) := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    by_cases h : a = x
    · rw [erase_cons]
      simp only [h, beq_self_eq_true, ↓reduceIte]
      rw [filter_cons]
      split
      · rw [erase_cons_head]
      · rw [erase_of_not_mem]
        simp_all [mem_filter]
    · rw [erase_cons_tail (by simpa using Ne.symm h), filter_cons, filter_cons]
      split
      · rw [erase_cons_tail (by simpa using Ne.symm h), ih]
      · rw [ih]

theorem erase_append_left [LawfulBEq α] {l₁ : List α} (l₂) (h : a ∈ l₁) :
    (l₁ ++ l₂).erase a = l₁.erase a ++ l₂ := by
  simp [erase_eq_eraseP]; exact eraseP_append_left (beq_self_eq_true a) l₂ h

theorem erase_append_right [LawfulBEq α] {a : α} {l₁ : List α} (l₂ : List α) (h : a ∉ l₁) :
    (l₁ ++ l₂).erase a = (l₁ ++ l₂.erase a) := by
  rw [erase_eq_eraseP, erase_eq_eraseP, eraseP_append_right]
  intros b h' h''; rw [eq_of_beq h''] at h; exact h h'

theorem erase_append [LawfulBEq α] {a : α} {l₁ l₂ : List α} :
    (l₁ ++ l₂).erase a = if a ∈ l₁ then l₁.erase a ++ l₂ else l₁ ++ l₂.erase a := by
  simp [erase_eq_eraseP, eraseP_append]

theorem erase_comm [LawfulBEq α] (a b : α) (l : List α) :
    (l.erase a).erase b = (l.erase b).erase a := by
  if ab : a == b then rw [eq_of_beq ab] else ?_
  if ha : a ∈ l then ?_ else
    simp only [erase_of_not_mem ha, erase_of_not_mem (mt mem_of_mem_erase ha)]
  if hb : b ∈ l then ?_ else
    simp only [erase_of_not_mem hb, erase_of_not_mem (mt mem_of_mem_erase hb)]
  match l, l.erase a, exists_erase_eq ha with
  | _, _, ⟨l₁, l₂, ha', rfl, rfl⟩ =>
    if h₁ : b ∈ l₁ then
      rw [erase_append_left _ h₁, erase_append_left _ h₁,
          erase_append_right _ (mt mem_of_mem_erase ha'), erase_cons_head]
    else
      rw [erase_append_right _ h₁, erase_append_right _ h₁, erase_append_right _ ha',
          erase_cons_tail ab, erase_cons_head]

theorem erase_eq_iff [LawfulBEq α] {a : α} {l : List α} :
    l.erase a = l' ↔
      (a ∉ l ∧ l = l') ∨
        ∃ l₁ l₂, a ∉ l₁ ∧ l = l₁ ++ a :: l₂ ∧ l' = l₁ ++ l₂ := by
  rw [erase_eq_eraseP', eraseP_eq_iff]
  simp only [beq_iff_eq, forall_mem_ne', exists_and_left]
  constructor
  · rintro (⟨h, rfl⟩ | ⟨a', l', h, rfl, x, rfl, rfl⟩)
    · left; simp_all
    · right; refine ⟨l', h, x, by simp⟩
  · rintro (⟨h, rfl⟩ | ⟨l₁, h, x, rfl, rfl⟩)
    · left; simp_all
    · right; refine ⟨a, l₁, h, by simp⟩

@[simp] theorem erase_replicate_self [LawfulBEq α] {a : α} :
    (replicate n a).erase a = replicate (n - 1) a := by
  cases n <;> simp [replicate_succ]

@[simp] theorem erase_replicate_ne [LawfulBEq α] {a b : α} (h : !b == a) :
    (replicate n a).erase b = replicate n a := by
  rw [erase_of_not_mem]
  simp_all

theorem Nodup.erase_eq_filter [BEq α] [LawfulBEq α] {l} (d : Nodup l) (a : α) : l.erase a = l.filter (· != a) := by
  induction d with
  | nil => rfl
  | cons m _n ih =>
    rename_i b l
    by_cases h : b = a
    · subst h
      rw [erase_cons_head, filter_cons_of_neg (by simp)]
      apply Eq.symm
      rw [filter_eq_self]
      simpa [@eq_comm α] using m
    · simp [beq_false_of_ne h, ih, h]

theorem Nodup.mem_erase_iff [BEq α] [LawfulBEq α] {a : α} (d : Nodup l) : a ∈ l.erase b ↔ a ≠ b ∧ a ∈ l := by
  rw [Nodup.erase_eq_filter d, mem_filter, and_comm, bne_iff_ne]

theorem Nodup.not_mem_erase [BEq α] [LawfulBEq α] {a : α} (h : Nodup l) : a ∉ l.erase a := fun H => by
  simpa using ((Nodup.mem_erase_iff h).mp H).left

theorem Nodup.erase [BEq α] [LawfulBEq α] (a : α) : Nodup l → Nodup (l.erase a) :=
  Nodup.sublist <| erase_sublist _ _

end erase

/-! ### eraseIdx -/

theorem length_eraseIdx : ∀ {l i}, i < length l → length (@eraseIdx α l i) = length l - 1
  | [], _, _ => rfl
  | _::_, 0, _ => by simp [eraseIdx]
  | x::xs, i+1, h => by
    have : i < length xs := Nat.lt_of_succ_lt_succ h
    simp [eraseIdx, ← Nat.add_one]
    rw [length_eraseIdx this, Nat.sub_add_cancel (Nat.lt_of_le_of_lt (Nat.zero_le _) this)]

/-! ### find? -/

@[simp] theorem find?_cons_of_pos (l) (h : p a) : find? p (a :: l) = some a := by
  simp [find?, h]

@[simp] theorem find?_cons_of_neg (l) (h : ¬p a) : find? p (a :: l) = find? p l := by
  simp [find?, h]

@[simp] theorem find?_eq_none : find? p l = none ↔ ∀ x ∈ l, ¬ p x := by
  induction l <;> simp [find?_cons]; split <;> simp [*]

theorem find?_some : ∀ {l}, find? p l = some a → p a
  | b :: l, H => by
    by_cases h : p b <;> simp [find?, h] at H
    · exact H ▸ h
    · exact find?_some H

@[simp] theorem mem_of_find?_eq_some : ∀ {l}, find? p l = some a → a ∈ l
  | b :: l, H => by
    by_cases h : p b <;> simp [find?, h] at H
    · exact H ▸ .head _
    · exact .tail _ (mem_of_find?_eq_some H)

@[simp] theorem find?_map (f : β → α) (l : List β) : find? p (l.map f) = (l.find? (p ∘ f)).map f := by
  induction l with
  | nil => simp
  | cons x xs ih =>
    simp only [map_cons, find?]
    by_cases h : p (f x) <;> simp [h, ih]

theorem find?_replicate : find? p (replicate n a) = if n = 0 then none else if p a then some a else none := by
  cases n
  · simp
  · by_cases p a <;> simp_all [replicate_succ]

@[simp] theorem find?_replicate_of_length_pos (h : 0 < n) : find? p (replicate n a) = if p a then some a else none := by
  simp [find?_replicate, Nat.ne_of_gt h]

@[simp] theorem find?_replicate_of_pos (h : p a) : find? p (replicate n a) = if n = 0 then none else some a := by
  simp [find?_replicate, h]

@[simp] theorem find?_replicate_of_neg (h : ¬ p a) : find? p (replicate n a) = none := by
  simp [find?_replicate, h]

theorem find?_isSome_of_sublist {l₁ l₂ : List α} (h : l₁ <+ l₂) : (l₁.find? p).isSome → (l₂.find? p).isSome := by
  induction h with
  | slnil => simp
  | cons a h ih
  | cons₂ a h ih =>
    simp only [find?]
    split <;> simp_all

/-! ### findSome? -/

@[simp] theorem findSome?_cons_of_isSome (l) (h : (f a).isSome) : findSome? f (a :: l) = f a := by
  simp only [findSome?]
  split <;> simp_all

@[simp] theorem findSome?_cons_of_isNone (l) (h : (f a).isNone) : findSome? f (a :: l) = findSome? f l := by
  simp only [findSome?]
  split <;> simp_all

theorem exists_of_findSome?_eq_some {l : List α} {f : α → Option β} (w : l.findSome? f = some b) :
    ∃ a, a ∈ l ∧ f a = b := by
  induction l with
  | nil => simp_all
  | cons h l ih =>
    simp_all only [findSome?_cons, mem_cons, exists_eq_or_imp]
    split at w <;> simp_all

@[simp] theorem findSome?_map (f : β → γ) (l : List β) : findSome? p (l.map f) = l.findSome? (p ∘ f) := by
  induction l with
  | nil => simp
  | cons x xs ih =>
    simp only [map_cons, findSome?]
    split <;> simp_all

theorem findSome?_replicate : findSome? f (replicate n a) = if n = 0 then none else f a := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, findSome?_cons]
    split <;> simp_all

@[simp] theorem findSome?_replicate_of_pos (h : 0 < n) : findSome? f (replicate n a) = f a := by
  simp [findSome?_replicate, Nat.ne_of_gt h]

-- Argument is unused, but used to decide whether `simp` should unfold.
@[simp] theorem find?_replicate_of_isSome (_ : (f a).isSome) : findSome? f (replicate n a) = if n = 0 then none else f a := by
  simp [findSome?_replicate]

@[simp] theorem find?_replicate_of_isNone (h : (f a).isNone) : findSome? f (replicate n a) = none := by
  rw [Option.isNone_iff_eq_none] at h
  simp [findSome?_replicate, h]

theorem findSome?_isSome_of_sublist {l₁ l₂ : List α} (h : l₁ <+ l₂) :
    (l₁.findSome? f).isSome → (l₂.findSome? f).isSome := by
  induction h with
  | slnil => simp
  | cons a h ih
  | cons₂ a h ih =>
    simp only [findSome?]
    split <;> simp_all

/-! ### findIdx -/

theorem findIdx_cons (p : α → Bool) (b : α) (l : List α) :
    (b :: l).findIdx p = bif p b then 0 else (l.findIdx p) + 1 := by
  cases H : p b with
  | true => simp [H, findIdx, findIdx.go]
  | false => simp [H, findIdx, findIdx.go, findIdx_go_succ]
where
  findIdx_go_succ (p : α → Bool) (l : List α) (n : Nat) :
      List.findIdx.go p l (n + 1) = (findIdx.go p l n) + 1 := by
    cases l with
    | nil => unfold findIdx.go; exact Nat.succ_eq_add_one n
    | cons head tail =>
      unfold findIdx.go
      cases p head <;> simp only [cond_false, cond_true]
      exact findIdx_go_succ p tail (n + 1)

theorem findIdx_of_get?_eq_some {xs : List α} (w : xs.get? (xs.findIdx p) = some y) : p y := by
  induction xs with
  | nil => simp_all
  | cons x xs ih => by_cases h : p x <;> simp_all [findIdx_cons]

theorem findIdx_get {xs : List α} {w : xs.findIdx p < xs.length} :
    p (xs.get ⟨xs.findIdx p, w⟩) :=
  xs.findIdx_of_get?_eq_some (get?_eq_get w)

theorem findIdx_lt_length_of_exists {xs : List α} (h : ∃ x ∈ xs, p x) :
    xs.findIdx p < xs.length := by
  induction xs with
  | nil => simp_all
  | cons x xs ih =>
    by_cases p x
    · simp_all only [forall_exists_index, and_imp, mem_cons, exists_eq_or_imp, true_or,
        findIdx_cons, cond_true, length_cons]
      apply Nat.succ_pos
    · simp_all [findIdx_cons]
      refine Nat.succ_lt_succ ?_
      obtain ⟨x', m', h'⟩ := h
      exact ih x' m' h'

theorem findIdx_get?_eq_get_of_exists {xs : List α} (h : ∃ x ∈ xs, p x) :
    xs.get? (xs.findIdx p) = some (xs.get ⟨xs.findIdx p, xs.findIdx_lt_length_of_exists h⟩) :=
  get?_eq_get (findIdx_lt_length_of_exists h)

  /-! ### findIdx? -/

@[simp] theorem findIdx?_nil : ([] : List α).findIdx? p i = none := rfl

@[simp] theorem findIdx?_cons :
    (x :: xs).findIdx? p i = if p x then some i else findIdx? p xs (i + 1) := rfl

@[simp] theorem findIdx?_succ :
    (xs : List α).findIdx? p (i+1) = (xs.findIdx? p i).map fun i => i + 1 := by
  induction xs generalizing i with simp
  | cons _ _ _ => split <;> simp_all

theorem findIdx?_eq_some_iff (xs : List α) (p : α → Bool) :
    xs.findIdx? p = some i ↔ (xs.take (i + 1)).map p = replicate i false ++ [true] := by
  induction xs generalizing i with
  | nil => simp
  | cons x xs ih =>
    simp only [findIdx?_cons, Nat.zero_add, findIdx?_succ, take_succ_cons, map_cons]
    split <;> cases i <;> simp_all [replicate_succ, succ_inj']

theorem findIdx?_of_eq_some {xs : List α} {p : α → Bool} (w : xs.findIdx? p = some i) :
    match xs.get? i with | some a => p a | none => false := by
  induction xs generalizing i with
  | nil => simp_all
  | cons x xs ih =>
    simp_all only [findIdx?_cons, Nat.zero_add, findIdx?_succ]
    split at w <;> cases i <;> simp_all [succ_inj']

theorem findIdx?_of_eq_none {xs : List α} {p : α → Bool} (w : xs.findIdx? p = none) :
    ∀ i, match xs.get? i with | some a => ¬ p a | none => true := by
  intro i
  induction xs generalizing i with
  | nil => simp_all
  | cons x xs ih =>
    simp_all only [Bool.not_eq_true, findIdx?_cons, Nat.zero_add, findIdx?_succ]
    cases i with
    | zero =>
      split at w <;> simp_all
    | succ i =>
      simp only [get?_cons_succ]
      apply ih
      split at w <;> simp_all

@[simp] theorem findIdx?_append :
    (xs ++ ys : List α).findIdx? p =
      (xs.findIdx? p <|> (ys.findIdx? p).map fun i => i + xs.length) := by
  induction xs with simp
  | cons _ _ _ => split <;> simp_all [Option.map_orElse, Option.map_map]; rfl

@[simp] theorem findIdx?_replicate :
    (replicate n a).findIdx? p = if 0 < n ∧ p a then some 0 else none := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate, findIdx?_cons, Nat.zero_add, findIdx?_succ, Nat.zero_lt_succ, true_and]
    split <;> simp_all

/-! ### indexOf -/

theorem indexOf_cons [BEq α] :
    (x :: xs : List α).indexOf y = bif x == y then 0 else xs.indexOf y + 1 := by
  dsimp [indexOf]
  simp [findIdx_cons]

/-! ### countP -/
section countP

variable (p q : α → Bool)

@[simp] theorem countP_nil : countP p [] = 0 := rfl

protected theorem countP_go_eq_add (l) : countP.go p l n = n + countP.go p l 0 := by
  induction l generalizing n with
  | nil => rfl
  | cons head tail ih =>
    unfold countP.go
    rw [ih (n := n + 1), ih (n := n), ih (n := 1)]
    if h : p head then simp [h, Nat.add_assoc] else simp [h]

@[simp] theorem countP_cons_of_pos (l) (pa : p a) : countP p (a :: l) = countP p l + 1 := by
  have : countP.go p (a :: l) 0 = countP.go p l 1 := show cond .. = _ by rw [pa]; rfl
  unfold countP
  rw [this, Nat.add_comm, List.countP_go_eq_add]

@[simp] theorem countP_cons_of_neg (l) (pa : ¬p a) : countP p (a :: l) = countP p l := by
  simp [countP, countP.go, pa]

theorem countP_cons (a : α) (l) : countP p (a :: l) = countP p l + if p a then 1 else 0 := by
  by_cases h : p a <;> simp [h]

theorem length_eq_countP_add_countP (l) : length l = countP p l + countP (fun a => ¬p a) l := by
  induction l with
  | nil => rfl
  | cons x h ih =>
    if h : p x then
      rw [countP_cons_of_pos _ _ h, countP_cons_of_neg _ _ _, length, ih]
      · rw [Nat.add_assoc, Nat.add_comm _ 1, Nat.add_assoc]
      · simp only [h, not_true_eq_false, decide_False, not_false_eq_true]
    else
      rw [countP_cons_of_pos (fun a => ¬p a) _ _, countP_cons_of_neg _ _ h, length, ih]
      · rfl
      · simp only [h, not_false_eq_true, decide_True]

theorem countP_eq_length_filter (l) : countP p l = length (filter p l) := by
  induction l with
  | nil => rfl
  | cons x l ih =>
    if h : p x
    then rw [countP_cons_of_pos p l h, ih, filter_cons_of_pos h, length]
    else rw [countP_cons_of_neg p l h, ih, filter_cons_of_neg h]

theorem countP_le_length : countP p l ≤ l.length := by
  simp only [countP_eq_length_filter]
  apply length_filter_le

@[simp] theorem countP_append (l₁ l₂) : countP p (l₁ ++ l₂) = countP p l₁ + countP p l₂ := by
  simp only [countP_eq_length_filter, filter_append, length_append]

theorem countP_pos : 0 < countP p l ↔ ∃ a ∈ l, p a := by
  simp only [countP_eq_length_filter, length_pos_iff_exists_mem, mem_filter, exists_prop]

theorem countP_eq_zero : countP p l = 0 ↔ ∀ a ∈ l, ¬p a := by
  simp only [countP_eq_length_filter, length_eq_zero, filter_eq_nil]

theorem countP_eq_length : countP p l = l.length ↔ ∀ a ∈ l, p a := by
  rw [countP_eq_length_filter, filter_length_eq_length]

theorem Sublist.countP_le (s : l₁ <+ l₂) : countP p l₁ ≤ countP p l₂ := by
  simp only [countP_eq_length_filter]
  apply s.filter _ |>.length_le

theorem countP_filter (l : List α) :
    countP p (filter q l) = countP (fun a => p a ∧ q a) l := by
  simp only [countP_eq_length_filter, filter_filter]

@[simp] theorem countP_true {l : List α} : (l.countP fun _ => true) = l.length := by
  rw [countP_eq_length]
  simp

@[simp] theorem countP_false {l : List α} : (l.countP fun _ => false) = 0 := by
  rw [countP_eq_zero]
  simp

@[simp] theorem countP_map (p : β → Bool) (f : α → β) :
    ∀ l, countP p (map f l) = countP (p ∘ f) l
  | [] => rfl
  | a :: l => by rw [map_cons, countP_cons, countP_cons, countP_map p f l]; rfl

variable {p q}

theorem countP_mono_left (h : ∀ x ∈ l, p x → q x) : countP p l ≤ countP q l := by
  induction l with
  | nil => apply Nat.le_refl
  | cons a l ihl =>
    rw [forall_mem_cons] at h
    have ⟨ha, hl⟩ := h
    simp [countP_cons]
    cases h : p a
    · simp only [Bool.false_eq_true, ↓reduceIte, Nat.add_zero]
      apply Nat.le_trans ?_ (Nat.le_add_right _ _)
      apply ihl hl
    · simp only [↓reduceIte, ha h, succ_le_succ_iff]
      apply ihl hl

theorem countP_congr (h : ∀ x ∈ l, p x ↔ q x) : countP p l = countP q l :=
  Nat.le_antisymm
    (countP_mono_left fun x hx => (h x hx).1)
    (countP_mono_left fun x hx => (h x hx).2)

end countP

/-! ### count -/

section count

variable [DecidableEq α]

@[simp] theorem count_nil (a : α) : count a [] = 0 := rfl

theorem count_cons (a b : α) (l : List α) :
    count a (b :: l) = count a l + if a = b then 1 else 0 := by
  simp [count, countP_cons, eq_comm (a := a)]

@[simp] theorem count_cons_self (a : α) (l : List α) : count a (a :: l) = count a l + 1 := by
  simp [count_cons]

@[simp] theorem count_cons_of_ne (h : a ≠ b) (l : List α) : count a (b :: l) = count a l := by
  simp [count_cons, h]

theorem count_tail : ∀ (l : List α) (a : α) (h : l ≠ []),
      l.tail.count a = l.count a - if a = l.head h then 1 else 0
  | head :: tail, a, h => by simp [count_cons]

theorem count_le_length (a : α) (l : List α) : count a l ≤ l.length := countP_le_length _

theorem Sublist.count_le (h : l₁ <+ l₂) (a : α) : count a l₁ ≤ count a l₂ := h.countP_le _

theorem count_le_count_cons (a b : α) (l : List α) : count a l ≤ count a (b :: l) :=
  (sublist_cons_self _ _).count_le _

theorem count_singleton_self (a : α) : count a [a] = 1 := by simp

theorem count_singleton (a b : α) : count a [b] = if a = b then 1 else 0 := by simp [count_cons]

@[simp] theorem count_append (a : α) : ∀ l₁ l₂, count a (l₁ ++ l₂) = count a l₁ + count a l₂ :=
  countP_append _

theorem count_concat_self (a : α) (l : List α) : count a (concat l a) = (count a l) + 1 := by simp

@[simp]
theorem count_pos_iff_mem {a : α} {l : List α} : 0 < count a l ↔ a ∈ l := by
  simp only [count, countP_pos, beq_iff_eq, exists_eq_right]

theorem count_eq_zero_of_not_mem {a : α} {l : List α} (h : a ∉ l) : count a l = 0 :=
  Decidable.byContradiction fun h' => h <| count_pos_iff_mem.1 (Nat.pos_of_ne_zero h')

theorem not_mem_of_count_eq_zero {a : α} {l : List α} (h : count a l = 0) : a ∉ l :=
  fun h' => Nat.ne_of_lt (count_pos_iff_mem.2 h') h.symm

theorem count_eq_zero {l : List α} : count a l = 0 ↔ a ∉ l :=
  ⟨not_mem_of_count_eq_zero, count_eq_zero_of_not_mem⟩

theorem count_eq_length {l : List α} : count a l = l.length ↔ ∀ b ∈ l, a = b := by
  rw [count, countP_eq_length]
  refine ⟨fun h b hb => Eq.symm ?_, fun h b hb => ?_⟩
  · simpa using h b hb
  · rw [h b hb, beq_self_eq_true]

@[simp] theorem count_replicate_self (a : α) (n : Nat) : count a (replicate n a) = n :=
  (count_eq_length.2 <| fun _ h => (eq_of_mem_replicate h).symm).trans (length_replicate ..)

theorem count_replicate (a b : α) (n : Nat) : count a (replicate n b) = if a = b then n else 0 := by
  split
  · exact ‹a = b› ▸ count_replicate_self ..
  · exact count_eq_zero.2 <| mt eq_of_mem_replicate ‹a ≠ b›

theorem filter_beq (l : List α) (a : α) : l.filter (· == a) = replicate (count a l) a := by
  simp only [count, countP_eq_length_filter, eq_replicate, mem_filter, beq_iff_eq]
  exact ⟨trivial, fun _ h => h.2⟩

theorem filter_eq (l : List α) (a : α) : l.filter (· = a) = replicate (count a l) a :=
  filter_beq l a

@[deprecated filter_eq (since := "2023-12-14")]
theorem filter_eq' (l : List α) (a : α) : l.filter (a = ·) = replicate (count a l) a := by
  simpa only [eq_comm] using filter_eq l a

@[deprecated filter_beq (since := "2023-12-14")]
theorem filter_beq' (l : List α) (a : α) : l.filter (a == ·) = replicate (count a l) a := by
  simpa only [eq_comm (b := a)] using filter_eq l a

theorem le_count_iff_replicate_sublist {l : List α} : n ≤ count a l ↔ replicate n a <+ l := by
  refine ⟨fun h => ?_, fun h => ?_⟩
  · exact ((replicate_sublist_replicate a).2 h).trans <| filter_eq l a ▸ filter_sublist _
  · simpa only [count_replicate_self] using h.count_le a

theorem replicate_count_eq_of_count_eq_length {l : List α} (h : count a l = length l) :
    replicate (count a l) a = l :=
  (le_count_iff_replicate_sublist.mp (Nat.le_refl _)).eq_of_length <|
    (length_replicate (count a l) a).trans h

@[simp] theorem count_filter {l : List α} (h : p a) : count a (filter p l) = count a l := by
  rw [count, countP_filter]; congr; funext b
  rw [(by rfl : (b == a) = decide (b = a)), decide_eq_decide]
  simp; rintro rfl; exact h

theorem count_le_count_map [DecidableEq β] (l : List α) (f : α → β) (x : α) :
    count x l ≤ count (f x) (map f l) := by
  rw [count, count, countP_map]
  apply countP_mono_left; simp (config := { contextual := true })

theorem count_erase (a b : α) :
    ∀ l : List α, count a (l.erase b) = count a l - if a = b then 1 else 0
  | [] => by simp
  | c :: l => by
    rw [erase_cons]
    if hc : c = b then
      have hc_beq := (beq_iff_eq _ _).mpr hc
      rw [if_pos hc_beq, hc, count_cons, Nat.add_sub_cancel]
    else
      have hc_beq := beq_false_of_ne hc
      simp only [hc_beq, if_false, count_cons, count_cons, count_erase a b l]
      if ha : a = b then
        rw [← ha, eq_comm] at hc
        rw [if_pos ha, if_neg hc, Nat.add_zero, Nat.add_zero]
      else
        rw [if_neg ha, Nat.sub_zero, Nat.sub_zero]

@[simp] theorem count_erase_self (a : α) (l : List α) :
    count a (List.erase l a) = count a l - 1 := by rw [count_erase, if_pos rfl]

@[simp] theorem count_erase_of_ne (ab : a ≠ b) (l : List α) : count a (l.erase b) = count a l := by
  rw [count_erase, if_neg ab, Nat.sub_zero]

end count

/-! ### lookup -/
section lookup
variable [BEq α] [LawfulBEq α]

@[simp] theorem lookup_cons_self  {k : α} : ((k,b)::es).lookup k = some b := by
  simp [lookup_cons]

theorem lookup_replicate {k : α} :
    (replicate n (a,b)).lookup k = if n = 0 then none else if k == a then some b else none := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, lookup_cons]
    split <;> simp_all

theorem lookup_replicate_of_pos {k : α} (h : 0 < n) :
    (replicate n (a, b)).lookup k = if k == a then some b else none := by
  simp [lookup_replicate, Nat.ne_of_gt h]

theorem lookup_replicate_self {a : α} :
    (replicate n (a, b)).lookup a = if n = 0 then none else some b := by
  simp [lookup_replicate]

@[simp] theorem lookup_replicate_self_of_pos {a : α} (h : 0 < n) :
    (replicate n (a, b)).lookup a = some b := by
  simp [lookup_replicate_self, Nat.ne_of_gt h]

@[simp] theorem lookup_replicate_ne {k : α} (h : !k == a) :
    (replicate n (a, b)).lookup k = none := by
  simp_all [lookup_replicate]

end lookup

/-! ## Logic -/

/-! ### any / all -/

theorem not_any_eq_all_not (l : List α) (p : α → Bool) : (!l.any p) = l.all fun a => !p a := by
  induction l with simp | cons _ _ ih => rw [ih]

theorem not_all_eq_any_not (l : List α) (p : α → Bool) : (!l.all p) = l.any fun a => !p a := by
  induction l with simp | cons _ _ ih => rw [ih]

theorem and_any_distrib_left (l : List α) (p : α → Bool) (q : Bool) :
    (q && l.any p) = l.any fun a => q && p a := by
  induction l with simp | cons _ _ ih => rw [Bool.and_or_distrib_left, ih]

theorem and_any_distrib_right (l : List α) (p : α → Bool) (q : Bool) :
    (l.any p && q) = l.any fun a => p a && q := by
  induction l with simp | cons _ _ ih => rw [Bool.and_or_distrib_right, ih]

theorem or_all_distrib_left (l : List α) (p : α → Bool) (q : Bool) :
    (q || l.all p) = l.all fun a => q || p a := by
  induction l with simp | cons _ _ ih => rw [Bool.or_and_distrib_left, ih]

theorem or_all_distrib_right (l : List α) (p : α → Bool) (q : Bool) :
    (l.all p || q) = l.all fun a => p a || q := by
  induction l with simp | cons _ _ ih => rw [Bool.or_and_distrib_right, ih]

theorem any_eq_not_all_not (l : List α) (p : α → Bool) : l.any p = !l.all (!p .) := by
  simp only [not_all_eq_any_not, Bool.not_not]

theorem all_eq_not_any_not (l : List α) (p : α → Bool) : l.all p = !l.any (!p .) := by
  simp only [not_any_eq_all_not, Bool.not_not]

@[simp] theorem any_map {l : List α} {p : α → Bool} : (l.map f).any p = l.any (p ∘ f) := by
  induction l with simp | cons _ _ ih => rw [ih]

@[simp] theorem all_map {l : List α} {p : α → Bool} : (l.map f).all p = l.all (p ∘ f) := by
  induction l with simp | cons _ _ ih => rw [ih]

@[simp] theorem any_filter {l : List α} {p q : α → Bool} :
    (filter p l).any q = l.any fun a => p a && q a := by
  induction l with
  | nil => rfl
  | cons h t ih =>
    simp only [filter_cons]
    split <;> simp_all

@[simp] theorem all_filter {l : List α} {p q : α → Bool} :
    (filter p l).all q = l.all fun a => p a → q a := by
  induction l with
  | nil => rfl
  | cons h t ih =>
    simp only [filter_cons]
    split <;> simp_all

@[simp] theorem any_filterMap {l : List α} {f : α → Option β} {p : β → Bool} :
    (filterMap f l).any p = l.any fun a => match f a with | some b => p b | none => false := by
  induction l with
  | nil => rfl
  | cons h t ih =>
    simp only [filterMap_cons]
    split <;> simp_all

@[simp] theorem all_filterMap {l : List α} {f : α → Option β} {p : β → Bool} :
    (filterMap f l).all p = l.all fun a => match f a with | some b => p b | none => true := by
  induction l with
  | nil => rfl
  | cons h t ih =>
    simp only [filterMap_cons]
    split <;> simp_all

@[simp] theorem any_append {x y : List α} : (x ++ y).any f = (x.any f || y.any f) := by
  induction x with
  | nil => rfl
  | cons h t ih => simp_all [Bool.or_assoc]

@[simp] theorem all_append {x y : List α} : (x ++ y).all f = (x.all f && y.all f) := by
  induction x with
  | nil => rfl
  | cons h t ih => simp_all [Bool.and_assoc]

@[simp] theorem any_join {l : List (List α)} : l.join.any f = l.any (any · f) := by
  induction l <;> simp_all

@[simp] theorem all_join {l : List (List α)} : l.join.all f = l.all (all · f) := by
  induction l <;> simp_all

@[simp] theorem any_bind {l : List α} {f : α → List β} :
    (l.bind f).any p = l.any fun a => (f a).any p := by
  induction l <;> simp_all

@[simp] theorem all_bind {l : List α} {f : α → List β} :
    (l.bind f).all p = l.all fun a => (f a).all p := by
  induction l <;> simp_all

@[simp] theorem any_reverse {l : List α} : l.reverse.any f = l.any f := by
  induction l <;> simp_all [Bool.or_comm]

@[simp] theorem all_reverse {l : List α} : l.reverse.all f = l.all f := by
  induction l <;> simp_all [Bool.and_comm]

@[simp] theorem any_replicate {n : Nat} {a : α} :
    (replicate n a).any f = if n = 0 then false else f a := by
  cases n <;> simp [replicate_succ]

@[simp] theorem all_replicate {n : Nat} {a : α} :
    (replicate n a).all f = if n = 0 then true else f a := by
  cases n <;> simp (config := {contextual := true}) [replicate_succ]

@[simp] theorem all_takeWhile {l : List α} : (l.takeWhile p).all p = true := by
  induction l with
  | nil => rfl
  | cons h t ih => by_cases p h <;> simp_all

@[simp] theorem any_dropWhile {l : List α} :
    (l.dropWhile p).any (fun x => !p x) = !l.all p := by
  induction l with
  | nil => rfl
  | cons h t ih => by_cases p h <;> simp_all

@[simp] theorem any_insert [BEq α] [LawfulBEq α] {l : List α} {a : α} :
    (l.insert a).any f = (f a || l.any f) := by
  simp [any_eq]

@[simp] theorem all_insert [BEq α] [LawfulBEq α] {l : List α} {a : α} :
    (l.insert a).all f = (f a && l.all f) := by
  simp [all_eq]

/-! ## Zippers -/

/-! ### zip -/

theorem zip_map (f : α → γ) (g : β → δ) :
    ∀ (l₁ : List α) (l₂ : List β), zip (l₁.map f) (l₂.map g) = (zip l₁ l₂).map (Prod.map f g)
  | [], l₂ => rfl
  | l₁, [] => by simp only [map, zip_nil_right]
  | a :: l₁, b :: l₂ => by
    simp only [map, zip_cons_cons, zip_map, Prod.map]; constructor

theorem zip_map_left (f : α → γ) (l₁ : List α) (l₂ : List β) :
    zip (l₁.map f) l₂ = (zip l₁ l₂).map (Prod.map f id) := by rw [← zip_map, map_id]

theorem zip_map_right (f : β → γ) (l₁ : List α) (l₂ : List β) :
    zip l₁ (l₂.map f) = (zip l₁ l₂).map (Prod.map id f) := by rw [← zip_map, map_id]

theorem zip_append :
    ∀ {l₁ r₁ : List α} {l₂ r₂ : List β} (_h : length l₁ = length l₂),
      zip (l₁ ++ r₁) (l₂ ++ r₂) = zip l₁ l₂ ++ zip r₁ r₂
  | [], r₁, l₂, r₂, h => by simp only [eq_nil_of_length_eq_zero h.symm]; rfl
  | l₁, r₁, [], r₂, h => by simp only [eq_nil_of_length_eq_zero h]; rfl
  | a :: l₁, r₁, b :: l₂, r₂, h => by
    simp only [cons_append, zip_cons_cons, zip_append (Nat.succ.inj h)]

theorem zip_map' (f : α → β) (g : α → γ) :
    ∀ l : List α, zip (l.map f) (l.map g) = l.map fun a => (f a, g a)
  | [] => rfl
  | a :: l => by simp only [map, zip_cons_cons, zip_map']

theorem of_mem_zip {a b} : ∀ {l₁ : List α} {l₂ : List β}, (a, b) ∈ zip l₁ l₂ → a ∈ l₁ ∧ b ∈ l₂
  | _ :: l₁, _ :: l₂, h => by
    cases h
    case head => simp
    case tail h =>
    · have := of_mem_zip h
      exact ⟨Mem.tail _ this.1, Mem.tail _ this.2⟩

theorem map_fst_zip :
    ∀ (l₁ : List α) (l₂ : List β), l₁.length ≤ l₂.length → map Prod.fst (zip l₁ l₂) = l₁
  | [], bs, _ => rfl
  | _ :: as, _ :: bs, h => by
    simp [Nat.succ_le_succ_iff] at h
    show _ :: map Prod.fst (zip as bs) = _ :: as
    rw [map_fst_zip as bs h]
  | a :: as, [], h => by simp at h

theorem map_snd_zip :
    ∀ (l₁ : List α) (l₂ : List β), l₂.length ≤ l₁.length → map Prod.snd (zip l₁ l₂) = l₂
  | _, [], _ => by
    rw [zip_nil_right]
    rfl
  | [], b :: bs, h => by simp at h
  | a :: as, b :: bs, h => by
    simp [Nat.succ_le_succ_iff] at h
    show _ :: map Prod.snd (zip as bs) = _ :: bs
    rw [map_snd_zip as bs h]

/-- See also `List.zip_replicate` in `Init.Data.List.TakeDrop` for a generalization with different lengths. -/
@[simp] theorem zip_replicate' {a : α} {b : β} {n : Nat} :
    zip (replicate n a) (replicate n b) = replicate n (a, b) := by
  induction n with
  | zero => rfl
  | succ n ih => simp [replicate_succ, ih]

/-! ### zipWith -/

theorem getElem?_zipWith {f : α → β → γ} {i : Nat} :
    (List.zipWith f as bs)[i]? = match as[i]?, bs[i]? with
      | some a, some b => some (f a b) | _, _ => none := by
  induction as generalizing bs i with
  | nil => cases bs with
    | nil => simp
    | cons b bs => simp
  | cons a as aih => cases bs with
    | nil => simp
    | cons b bs => cases i <;> simp_all

@[deprecated getElem?_zipWith (since := "2024-06-12")]
theorem get?_zipWith {f : α → β → γ} :
    (List.zipWith f as bs).get? i = match as.get? i, bs.get? i with
      | some a, some b => some (f a b) | _, _ => none := by
  simp [getElem?_zipWith]

set_option linter.deprecated false in
@[deprecated getElem?_zipWith (since := "2024-06-07")] abbrev zipWith_get? := @get?_zipWith

theorem head?_zipWith {f : α → β → γ} :
    (List.zipWith f as bs).head? = match as.head?, bs.head? with
      | some a, some b => some (f a b) | _, _ => none := by
  simp [head?_eq_getElem?, getElem?_zipWith]

theorem head_zipWith {f : α → β → γ} (h):
    (List.zipWith f as bs).head h = f (as.head (by rintro rfl; simp_all)) (bs.head (by rintro rfl; simp_all)) := by
  apply Option.some.inj
  rw [← head?_eq_head, head?_zipWith, head?_eq_head, head?_eq_head]

@[simp]
theorem zipWith_map {μ} (f : γ → δ → μ) (g : α → γ) (h : β → δ) (l₁ : List α) (l₂ : List β) :
    zipWith f (l₁.map g) (l₂.map h) = zipWith (fun a b => f (g a) (h b)) l₁ l₂ := by
  induction l₁ generalizing l₂ <;> cases l₂ <;> simp_all

theorem zipWith_map_left (l₁ : List α) (l₂ : List β) (f : α → α') (g : α' → β → γ) :
    zipWith g (l₁.map f) l₂ = zipWith (fun a b => g (f a) b) l₁ l₂ := by
  induction l₁ generalizing l₂ <;> cases l₂ <;> simp_all

theorem zipWith_map_right (l₁ : List α) (l₂ : List β) (f : β → β') (g : α → β' → γ) :
    zipWith g l₁ (l₂.map f) = zipWith (fun a b => g a (f b)) l₁ l₂ := by
  induction l₁ generalizing l₂ <;> cases l₂ <;> simp_all

theorem zipWith_foldr_eq_zip_foldr {f : α → β → γ} (i : δ):
    (zipWith f l₁ l₂).foldr g i = (zip l₁ l₂).foldr (fun p r => g (f p.1 p.2) r) i := by
  induction l₁ generalizing l₂ <;> cases l₂ <;> simp_all

theorem zipWith_foldl_eq_zip_foldl {f : α → β → γ} (i : δ):
    (zipWith f l₁ l₂).foldl g i = (zip l₁ l₂).foldl (fun r p => g r (f p.1 p.2)) i := by
  induction l₁ generalizing i l₂ <;> cases l₂ <;> simp_all

@[simp]
theorem zipWith_eq_nil_iff {f : α → β → γ} {l l'} : zipWith f l l' = [] ↔ l = [] ∨ l' = [] := by
  cases l <;> cases l' <;> simp

theorem map_zipWith {δ : Type _} (f : α → β) (g : γ → δ → α) (l : List γ) (l' : List δ) :
    map f (zipWith g l l') = zipWith (fun x y => f (g x y)) l l' := by
  induction l generalizing l' with
  | nil => simp
  | cons hd tl hl =>
    · cases l'
      · simp
      · simp [hl]

theorem take_zipWith : (zipWith f l l').take n = zipWith f (l.take n) (l'.take n) := by
  induction l generalizing l' n with
  | nil => simp
  | cons hd tl hl =>
    cases l'
    · simp
    · cases n
      · simp
      · simp [hl]

@[deprecated take_zipWith (since := "2024-07-26")] abbrev zipWith_distrib_take := @take_zipWith

theorem drop_zipWith : (zipWith f l l').drop n = zipWith f (l.drop n) (l'.drop n) := by
  induction l generalizing l' n with
  | nil => simp
  | cons hd tl hl =>
    · cases l'
      · simp
      · cases n
        · simp
        · simp [hl]

@[deprecated drop_zipWith (since := "2024-07-26")] abbrev zipWith_distrib_drop := @drop_zipWith

theorem tail_zipWith : (zipWith f l l').tail = zipWith f l.tail l'.tail := by
  rw [← drop_one]; simp [drop_zipWith]

@[deprecated tail_zipWith (since := "2024-07-28")] abbrev zipWith_distrib_tail := @tail_zipWith

theorem zipWith_append (f : α → β → γ) (l la : List α) (l' lb : List β)
    (h : l.length = l'.length) :
    zipWith f (l ++ la) (l' ++ lb) = zipWith f l l' ++ zipWith f la lb := by
  induction l generalizing l' with
  | nil =>
    have : l' = [] := eq_nil_of_length_eq_zero (by simpa using h.symm)
    simp [this]
  | cons hl tl ih =>
    cases l' with
    | nil => simp at h
    | cons head tail =>
      simp only [length_cons, Nat.succ.injEq] at h
      simp [ih _ h]

/-- See also `List.zipWith_replicate` in `Init.Data.List.TakeDrop` for a generalization with different lengths. -/
@[simp] theorem zipWith_replicate' {a : α} {b : β} {n : Nat} :
    zipWith f (replicate n a) (replicate n b) = replicate n (f a b) := by
  induction n with
  | zero => rfl
  | succ n ih => simp [replicate_succ, ih]

/-! ### zipWithAll -/

theorem getElem?_zipWithAll {f : Option α → Option β → γ} {i : Nat} :
    (zipWithAll f as bs)[i]? = match as[i]?, bs[i]? with
      | none, none => .none | a?, b? => some (f a? b?) := by
  induction as generalizing bs i with
  | nil => induction bs generalizing i with
    | nil => simp
    | cons b bs bih => cases i <;> simp_all
  | cons a as aih => cases bs with
    | nil =>
      specialize @aih []
      cases i <;> simp_all
    | cons b bs => cases i <;> simp_all

@[deprecated getElem?_zipWithAll (since := "2024-06-12")]
theorem get?_zipWithAll {f : Option α → Option β → γ} :
    (zipWithAll f as bs).get? i = match as.get? i, bs.get? i with
      | none, none => .none | a?, b? => some (f a? b?) := by
  simp [getElem?_zipWithAll]

set_option linter.deprecated false in
@[deprecated getElem?_zipWithAll (since := "2024-06-07")] abbrev zipWithAll_get? := @get?_zipWithAll

theorem head?_zipWithAll {f : Option α → Option β → γ} :
    (zipWithAll f as bs).head? = match as.head?, bs.head? with
      | none, none => .none | a?, b? => some (f a? b?) := by
  simp [head?_eq_getElem?, getElem?_zipWithAll]

theorem head_zipWithAll {f : Option α → Option β → γ} (h) :
    (zipWithAll f as bs).head h = f as.head? bs.head? := by
  apply Option.some.inj
  rw [← head?_eq_head, head?_zipWithAll]
  split <;> simp_all

theorem zipWithAll_map {μ} (f : Option γ → Option δ → μ) (g : α → γ) (h : β → δ) (l₁ : List α) (l₂ : List β) :
    zipWithAll f (l₁.map g) (l₂.map h) = zipWithAll (fun a b => f (g <$> a) (h <$> b)) l₁ l₂ := by
  induction l₁ generalizing l₂ <;> cases l₂ <;> simp_all

theorem zipWithAll_map_left (l₁ : List α) (l₂ : List β) (f : α → α') (g : Option α' → Option β → γ) :
    zipWithAll g (l₁.map f) l₂ = zipWithAll (fun a b => g (f <$> a) b) l₁ l₂ := by
  induction l₁ generalizing l₂ <;> cases l₂ <;> simp_all

theorem zipWithAll_map_right (l₁ : List α) (l₂ : List β) (f : β → β') (g : Option α → Option β' → γ) :
    zipWithAll g l₁ (l₂.map f) = zipWithAll (fun a b => g a (f <$> b)) l₁ l₂ := by
  induction l₁ generalizing l₂ <;> cases l₂ <;> simp_all

theorem map_zipWithAll {δ : Type _} (f : α → β) (g : Option γ → Option δ → α) (l : List γ) (l' : List δ) :
    map f (zipWithAll g l l') = zipWithAll (fun x y => f (g x y)) l l' := by
  induction l generalizing l' with
  | nil => simp
  | cons hd tl hl =>
    cases l' <;> simp_all

@[simp] theorem zipWithAll_replicate {a : α} {b : β} {n : Nat} :
    zipWithAll f (replicate n a) (replicate n b) = replicate n (f a b) := by
  induction n with
  | zero => rfl
  | succ n ih => simp [replicate_succ, ih]

/-! ### unzip -/

@[simp] theorem unzip_fst : (unzip l).fst = l.map Prod.fst := by
  induction l <;> simp_all

@[simp] theorem unzip_snd : (unzip l).snd = l.map Prod.snd := by
  induction l <;> simp_all

@[simp] theorem unzip_replicate {n : Nat} {a : α} {b : β} :
    unzip (replicate n (a, b)) = (replicate n a, replicate n b) := by
  ext1 <;> simp

/-! ## Minima and maxima -/

/-! ### minimum? -/

@[simp] theorem minimum?_nil [Min α] : ([] : List α).minimum? = none := rfl

-- We don't put `@[simp]` on `minimum?_cons`,
-- because the definition in terms of `foldl` is not useful for proofs.
theorem minimum?_cons [Min α] {xs : List α} : (x :: xs).minimum? = foldl min x xs := rfl

@[simp] theorem minimum?_eq_none_iff {xs : List α} [Min α] : xs.minimum? = none ↔ xs = [] := by
  cases xs <;> simp [minimum?]

theorem minimum?_mem [Min α] (min_eq_or : ∀ a b : α, min a b = a ∨ min a b = b) :
    {xs : List α} → xs.minimum? = some a → a ∈ xs := by
  intro xs
  match xs with
  | nil => simp
  | x :: xs =>
    simp only [minimum?_cons, Option.some.injEq, List.mem_cons]
    intro eq
    induction xs generalizing x with
    | nil =>
      simp at eq
      simp [eq]
    | cons y xs ind =>
      simp at eq
      have p := ind _ eq
      cases p with
      | inl p =>
        cases min_eq_or x y with | _ q => simp [p, q]
      | inr p => simp [p, mem_cons]

theorem le_minimum?_iff [Min α] [LE α]
    (le_min_iff : ∀ a b c : α, a ≤ min b c ↔ a ≤ b ∧ a ≤ c) :
    {xs : List α} → xs.minimum? = some a → ∀ x, x ≤ a ↔ ∀ b, b ∈ xs → x ≤ b
  | nil => by simp
  | cons x xs => by
    rw [minimum?]
    intro eq y
    simp only [Option.some.injEq] at eq
    induction xs generalizing x with
    | nil =>
      simp at eq
      simp [eq]
    | cons z xs ih =>
      simp at eq
      simp [ih _ eq, le_min_iff, and_assoc]

-- This could be refactored by designing appropriate typeclasses to replace `le_refl`, `min_eq_or`,
-- and `le_min_iff`.
theorem minimum?_eq_some_iff [Min α] [LE α] [anti : Antisymm ((· : α) ≤ ·)]
    (le_refl : ∀ a : α, a ≤ a)
    (min_eq_or : ∀ a b : α, min a b = a ∨ min a b = b)
    (le_min_iff : ∀ a b c : α, a ≤ min b c ↔ a ≤ b ∧ a ≤ c) {xs : List α} :
    xs.minimum? = some a ↔ a ∈ xs ∧ ∀ b, b ∈ xs → a ≤ b := by
  refine ⟨fun h => ⟨minimum?_mem min_eq_or h, (le_minimum?_iff le_min_iff h _).1 (le_refl _)⟩, ?_⟩
  intro ⟨h₁, h₂⟩
  cases xs with
  | nil => simp at h₁
  | cons x xs =>
    exact congrArg some <| anti.1
      ((le_minimum?_iff le_min_iff (xs := x::xs) rfl _).1 (le_refl _) _ h₁)
      (h₂ _ (minimum?_mem min_eq_or (xs := x::xs) rfl))

theorem minimum?_replicate [Min α] {n : Nat} {a : α} (w : min a a = a) :
    (replicate n a).minimum? = if n = 0 then none else some a := by
  induction n with
  | zero => rfl
  | succ n ih => cases n <;> simp_all [replicate_succ, minimum?_cons]

@[simp] theorem minimum?_replicate_of_pos [Min α] {n : Nat} {a : α} (w : min a a = a) (h : 0 < n) :
    (replicate n a).minimum? = some a := by
  simp [minimum?_replicate, Nat.ne_of_gt h, w]

/-! ### maximum? -/

@[simp] theorem maximum?_nil [Max α] : ([] : List α).maximum? = none := rfl

-- We don't put `@[simp]` on `maximum?_cons`,
-- because the definition in terms of `foldl` is not useful for proofs.
theorem maximum?_cons [Max α] {xs : List α} : (x :: xs).maximum? = foldl max x xs := rfl

@[simp] theorem maximum?_eq_none_iff {xs : List α} [Max α] : xs.maximum? = none ↔ xs = [] := by
  cases xs <;> simp [maximum?]

theorem maximum?_mem [Max α] (min_eq_or : ∀ a b : α, max a b = a ∨ max a b = b) :
    {xs : List α} → xs.maximum? = some a → a ∈ xs
  | nil => by simp
  | cons x xs => by
    rw [maximum?]; rintro ⟨⟩
    induction xs generalizing x with simp at *
    | cons y xs ih =>
      rcases ih (max x y) with h | h <;> simp [h]
      simp [← or_assoc, min_eq_or x y]

theorem maximum?_le_iff [Max α] [LE α]
    (max_le_iff : ∀ a b c : α, max b c ≤ a ↔ b ≤ a ∧ c ≤ a) :
    {xs : List α} → xs.maximum? = some a → ∀ x, a ≤ x ↔ ∀ b ∈ xs, b ≤ x
  | nil => by simp
  | cons x xs => by
    rw [maximum?]; rintro ⟨⟩ y
    induction xs generalizing x with
    | nil => simp
    | cons y xs ih => simp [ih, max_le_iff, and_assoc]

-- This could be refactored by designing appropriate typeclasses to replace `le_refl`, `max_eq_or`,
-- and `le_min_iff`.
theorem maximum?_eq_some_iff [Max α] [LE α] [anti : Antisymm ((· : α) ≤ ·)]
    (le_refl : ∀ a : α, a ≤ a)
    (max_eq_or : ∀ a b : α, max a b = a ∨ max a b = b)
    (max_le_iff : ∀ a b c : α, max b c ≤ a ↔ b ≤ a ∧ c ≤ a) {xs : List α} :
    xs.maximum? = some a ↔ a ∈ xs ∧ ∀ b ∈ xs, b ≤ a := by
  refine ⟨fun h => ⟨maximum?_mem max_eq_or h, (maximum?_le_iff max_le_iff h _).1 (le_refl _)⟩, ?_⟩
  intro ⟨h₁, h₂⟩
  cases xs with
  | nil => simp at h₁
  | cons x xs =>
    exact congrArg some <| anti.1
      (h₂ _ (maximum?_mem max_eq_or (xs := x::xs) rfl))
      ((maximum?_le_iff max_le_iff (xs := x::xs) rfl _).1 (le_refl _) _ h₁)

theorem maximum?_replicate [Max α] {n : Nat} {a : α} (w : max a a = a) :
    (replicate n a).maximum? = if n = 0 then none else some a := by
  induction n with
  | zero => rfl
  | succ n ih => cases n <;> simp_all [replicate_succ, maximum?_cons]

@[simp] theorem maximum?_replicate_of_pos [Max α] {n : Nat} {a : α} (w : max a a = a) (h : 0 < n) :
    (replicate n a).maximum? = some a := by
  simp [maximum?_replicate, Nat.ne_of_gt h, w]

/-! ## Monadic operations -/

/-! ### mapM -/

/-- Alternate (non-tail-recursive) form of mapM for proofs. -/
def mapM' [Monad m] (f : α → m β) : List α → m (List β)
  | [] => pure []
  | a :: l => return (← f a) :: (← l.mapM' f)

@[simp] theorem mapM'_nil [Monad m] {f : α → m β} : mapM' f [] = pure [] := rfl
@[simp] theorem mapM'_cons [Monad m] {f : α → m β} :
    mapM' f (a :: l) = return ((← f a) :: (← l.mapM' f)) :=
  rfl

theorem mapM'_eq_mapM [Monad m] [LawfulMonad m] (f : α → m β) (l : List α) :
    mapM' f l = mapM f l := by simp [go, mapM] where
  go : ∀ l acc, mapM.loop f l acc = return acc.reverse ++ (← mapM' f l)
    | [], acc => by simp [mapM.loop, mapM']
    | a::l, acc => by simp [go l, mapM.loop, mapM']

@[simp] theorem mapM_nil [Monad m] (f : α → m β) : [].mapM f = pure [] := rfl

@[simp] theorem mapM_cons [Monad m] [LawfulMonad m] (f : α → m β) :
    (a :: l).mapM f = (return (← f a) :: (← l.mapM f)) := by simp [← mapM'_eq_mapM, mapM']

@[simp] theorem mapM_append [Monad m] [LawfulMonad m] (f : α → m β) {l₁ l₂ : List α} :
    (l₁ ++ l₂).mapM f = (return (← l₁.mapM f) ++ (← l₂.mapM f)) := by induction l₁ <;> simp [*]

/-! ### forM -/

-- We use `List.forM` as the simp normal form, rather that `ForM.forM`.
-- As such we need to replace `List.forM_nil` and `List.forM_cons`:

@[simp] theorem forM_nil' [Monad m] : ([] : List α).forM f = (pure .unit : m PUnit) := rfl

@[simp] theorem forM_cons' [Monad m] :
    (a::as).forM f = (f a >>= fun _ => as.forM f : m PUnit) :=
  List.forM_cons _ _ _

@[simp] theorem forM_append [Monad m] [LawfulMonad m] (l₁ l₂ : List α) (f : α → m PUnit) :
    (l₁ ++ l₂).forM f = (do l₁.forM f; l₂.forM f) := by
  induction l₁ <;> simp [*]

end List
