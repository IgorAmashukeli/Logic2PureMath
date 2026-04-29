import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.Task

-- 1. ВВОД

private def buildFinSet : List (Lean.TSyntax `term) → Lean.MacroM (Lean.TSyntax `term)
  | []      => Lean.Macro.throwError "empty set"
  | [a]     => `(singleton_set $a)
  | [a, b]  => `(unord_pr_set $a $b)
  | a :: b :: rest => do
      let base ← `(unord_pr_set $a $b)
      rest.foldlM (fun acc x => `(union2 $acc (singleton_set $x))) base

syntax (priority := high) "{" term ", " term ", " term,+ "}" : term

macro_rules
  | `({ $a, $b, $xs,* }) => buildFinSet ([a, b] ++ xs.getElems.toList)


private partial def unbuildFinSet (t : Lean.Syntax) :
    Lean.PrettyPrinter.UnexpandM (List (Lean.TSyntax `term)) := do
  match t with
  | `(singleton_set $a)                => return [a]
  | `(unord_pr_set $a $b)              => return [a, b]
  | `(union2 $rest (singleton_set $x)) => return (← unbuildFinSet rest.raw) ++ [x]
  | _                                  => throw ()

@[app_unexpander union2]
def unexpandUnion2 : Lean.PrettyPrinter.Unexpander
  | `($(_) $l $r) => do
      let elems ← unbuildFinSet (← `(union2 $l $r))
      match elems with
      | [] | [_] | [_, _] => throw ()
      | first :: second :: rest =>
        let mut result ← `({$first, $second})
        for x in rest do
          result ← `(union2 $result (singleton_set $x))
        return result
  | _ => throw ()

variable (a b c d e f g h : Set)
#check {a}
#check {a, b}
#check {a, b, c}
#check {a, b, c, d}
#check {a, b, c, d, e, f}
#check {a, b, c, d, e, f, g, h}
