def foo (ty : Expr) : MetaM Expr :=
  match_expr ty with
  | Nat => sorry
