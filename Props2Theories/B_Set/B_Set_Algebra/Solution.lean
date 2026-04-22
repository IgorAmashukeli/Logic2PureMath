import Props2Theories.TacticNames
import Props2Theories.Axioms
import Props2Theories.B_Set.A_Constructions.Task
open Lean Meta Elab PrettyPrinter Delaborator SubExpr

noncomputable def union_2sets (A B : Set) := ⋃ {A, B}
notation:60 (priority:=high) a " ∪ " b => union_2sets a b
noncomputable def intersect_2sets (A B : Set) := {x ∈ A | x ∈ B}
notation:60 (priority:=high) a " ∩ " b => intersect_2sets a b
noncomputable def difference (A B : Set) := {x ∈ A | x ∉ B}
notation:60 (priority:=high) a " \\ " b => difference a b
noncomputable def symmetric_difference (A B : Set) := ⋃ {(A \ B), (B \ A)}
notation:60 (priority:=high) a " △ " b => symmetric_difference a b

declare_syntax_cat set_comprehension
syntax term : set_comprehension
syntax set_comprehension "; " term : set_comprehension
syntax "{" set_comprehension "}" : term
macro_rules
  | `({ $a:term }) => `(singleton_set $a)
  | `({ $a:term ; $b:term }) => `(unord_pr_set $a $b)
  | `({ $rest:set_comprehension ; $last:term }) =>
    `(union_2sets { $rest:set_comprehension } (singleton_set $last))
partial def collectElements : DelabM (List Syntax) := do
  let e ← getExpr
  if e.isAppOfArity ``union_2sets 2 then
    let _ := e.getAppArgs[0]!
    let rhs := e.getAppArgs[1]!
    if rhs.isAppOfArity ``singleton_set 1 then
      let last ← withAppArg delab
      let lastElem := match last with
        | `({ $a:term }) => a.raw
        | _ => last.raw
      let rest ← withAppFn $ withAppArg collectElements
      return rest ++ [lastElem]
    else
      return [ (← delab).raw ]
  else if e.isAppOfArity ``unord_pr_set 2 then
    let a ← withAppFn $ withAppArg delab
    let b ← withAppArg delab
    return [a.raw, b.raw]
  else if e.isAppOfArity ``singleton_set 1 then
    let a ← withAppArg delab
    return [a.raw]
  else
    return [ (← delab).raw ]
@[app_delab union_2sets]
def delabUnionChain : Delab := do
  let e ← getExpr
  let args := e.getAppArgs
  if args.size == 2 && !args[1]!.isAppOfArity ``singleton_set 1 then
    let lhs ← withAppFn $ withAppArg delab
    let rhs ← withAppArg delab
    return ← `($lhs ∪ $rhs)
  let elems ← collectElements
  match elems with
  | [] => failure
  | [single] =>
    let s : TSyntax `term := ⟨single⟩
    `({ $s:term })
  | a :: rest =>
    let mut sc : TSyntax `set_comprehension := ⟨a⟩
    for item in rest do
      let itemTerm : TSyntax `term := ⟨item⟩
      let newSc ← `(set_comprehension| $sc; $itemTerm)
      sc := ⟨newSc.raw⟩
    `({ $sc:set_comprehension })
@[app_unexpander unord_pr_set]
def unexpandUnordPrSet : Unexpander
  | `($(_) $a $b) =>
    let a_sc : TSyntax `set_comprehension := ⟨a.raw⟩
    `({ $a_sc ; $b })
  | _ => throw ()
@[app_unexpander singleton_set]
def unexpandSingletonSet : Unexpander
  | `($(_) $a) => `({ $a })
  | _ => throw ()




variable (A B C D : Set)
#check {A} ∪ B
#check (A ∪ B ∪ C)
#check {A ; B}
#check A ∪ B
#check {A ; B; C}
#check {A ; B; C; D}
