/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
prelude
import Lean.Elab.Tactic.BvDecide.BitBlast.BVExpr.BitBlast.Impl.Add

namespace Lean.Elab.Tactic.BvDecide

open Std.Sat

namespace BVExpr
namespace bitblast

variable [Hashable α] [DecidableEq α]

structure OverflowInput (aig : AIG α) where
  w : Nat
  vec : AIG.BinaryRefVec aig w
  cin : AIG.Ref aig

def mkOverflowBit (aig : AIG α) (input : OverflowInput aig) : AIG.Entrypoint α :=
  let ⟨_, ⟨lhs, rhs⟩, cin⟩ := input
  go aig lhs rhs 0 (by omega) cin
where
  go {w : Nat} (aig : AIG α) (lhs rhs : AIG.RefVec aig w) (curr : Nat) (hcurr : curr ≤ w)
      (cin : AIG.Ref aig) :
      AIG.Entrypoint α :=
    if hidx : curr < w then
      let lin := lhs.get curr hidx
      let rin := rhs.get curr hidx
      let res := mkFullAdderCarry aig ⟨lin, rin, cin⟩
      have := AIG.LawfulOperator.le_size (f := mkFullAdderCarry) ..
      let aig := res.aig
      let carryRef := res.ref
      let lhs := lhs.cast this
      let rhs := rhs.cast this
      go aig lhs rhs (curr + 1) (by omega) carryRef
    else
      ⟨aig, cin⟩
  termination_by w - curr

namespace mkOverflowBit

theorem go_le_size {aig : AIG α} {cin} {lhs rhs : AIG.RefVec aig w} :
    aig.decls.size ≤ (go aig lhs rhs curr hcurr cin).aig.decls.size := by
  unfold go
  dsimp only
  split
  . refine Nat.le_trans ?_ (by apply go_le_size)
    apply AIG.LawfulOperator.le_size (f := mkFullAdderCarry)
  . dsimp only
    omega
termination_by w - curr

theorem go_decl_eq {aig : AIG α} {cin} {lhs rhs : AIG.RefVec aig w} :
    ∀ (idx : Nat) (h1) (h2),
        (go aig lhs rhs curr hcurr cin).aig.decls[idx]'h2 = aig.decls[idx]'h1 := by
  generalize hgo : go aig lhs rhs curr hcurr cin = res
  unfold go at hgo
  dsimp only at hgo
  split at hgo
  . rw [← hgo]
    intros
    rw [go_decl_eq]
    rw [AIG.LawfulOperator.decl_eq (f := mkFullAdderCarry)]
    apply AIG.LawfulOperator.lt_size_of_lt_aig_size (f := mkFullAdderCarry)
    assumption
  . simp [← hgo]
termination_by w - curr

instance : AIG.LawfulOperator α OverflowInput mkOverflowBit where
  le_size := by
    intros
    unfold mkOverflowBit
    dsimp only
    apply go_le_size
  decl_eq := by
    intros
    unfold mkOverflowBit
    dsimp only
    rw [go_decl_eq]

end mkOverflowBit

end bitblast
end BVExpr

end Lean.Elab.Tactic.BvDecide
