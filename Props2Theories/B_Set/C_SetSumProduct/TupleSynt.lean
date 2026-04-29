import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.C_SetSumProduct.Task

private def buildOrdTuple : List (Lean.TSyntax `term) → Lean.MacroM (Lean.TSyntax `term)
  | []      => Lean.Macro.throwError "empty tuple"
  | [a]     => return a
  | [a, b]  => `(ord_pr_set $a $b)
  | a :: b :: rest => do
      let base ← `(ord_pr_set $a $b)
      rest.foldlM (fun acc x => `(ord_pr_set $acc $x)) base

syntax (priority := high) "(" term ", " term ", " term,+ ")" : term

macro_rules
  | `(($a, $b, $xs,*)) => buildOrdTuple ([a, b] ++ xs.getElems.toList)

private partial def unbuildOrdTuple (t : Lean.Syntax) :
    Lean.PrettyPrinter.UnexpandM (List (Lean.TSyntax `term)) := do
  match t with
  | `(ord_pr_set $l $r) => return (← unbuildOrdTuple l.raw) ++ [r]
  | _ => return [⟨t⟩]

@[app_unexpander ord_pr_set]
def unexpandOrdPr : Lean.PrettyPrinter.Unexpander
  | `($(_) $l $r) => do
      let elems ← unbuildOrdTuple (← `(ord_pr_set $l $r))
      match elems with
      | [] | [_] | [_, _] => throw ()
      | first :: second :: rest =>
        let mut result ← `(($first, $second))
        for x in rest do
          result ← `(ord_pr_set $result $x)
        return result
  | _ => throw ()

variable (a b c d e f g h : Set)
#check (a, b)
#check ((a, b, c) : Set)
#check ((a, b, c, d) : Set)
#check ((a, b, c, d, e) : Set)
#check ((a, b, c, d, e, f) : Set)
#check ((a, b, c, d, e, f, g, h) : Set)
