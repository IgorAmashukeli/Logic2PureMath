import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.Task
open Lean Meta Elab PrettyPrinter Delaborator SubExpr



declare_syntax_cat set_comprehension
syntax term : set_comprehension
syntax set_comprehension ", " term : set_comprehension
partial def collectSetElems (stx : Syntax) (acc : List Syntax := []) : List Syntax :=
  match stx with
  | `(set_comprehension| $rest:set_comprehension , $last:term) => collectSetElems rest.raw (last.raw :: acc)
  | `(set_comprehension| $a:term) => a.raw :: acc
  | _ => acc
macro:2000 "{" e:set_comprehension "}" : term => do
  let elems := collectSetElems e.raw
  match elems with
  | [] => Macro.throwUnsupported
  | [a] => `(singleton_set $(⟨a⟩))
  | [a, b] => `(unord_pr_set $(⟨a⟩) $(⟨b⟩))
  | a :: b :: rest =>
    let mut res ← `(unord_pr_set $(⟨a⟩) $(⟨b⟩))
    for item in rest do
      res ← `(union_2sets $res (singleton_set $(⟨item⟩)))
    return res
partial def collectExprElems : DelabM (List Syntax) := do
  let e ← getExpr
  if e.isAppOfArity ``union_2sets 2 then
    let args := e.getAppArgs
    let rhs := args[1]!
    if rhs.isAppOfArity ``singleton_set 1 then
      let last ← withAppArg delab
      let lastElem := match last with
        | `({ $a }) => a.raw
        | _ => last.raw
      let rest ← withAppFn $ withAppArg collectExprElems
      return rest ++ [lastElem]
    else return [(← delab).raw]
  else if e.isAppOfArity ``unord_pr_set 2 then
    let a ← withAppFn $ withAppArg delab
    let b ← withAppArg delab
    return [a.raw, b.raw]
  else if e.isAppOfArity ``singleton_set 1 then
    let a ← withAppArg delab
    return [a.raw]
  else return [(← delab).raw]
@[app_delab union_2sets]
def delabUnionChain : Delab := do
  let e ← getExpr
  let args := e.getAppArgs
  if args.size == 2 && !args[1]!.isAppOfArity ``singleton_set 1 then
    let lhs ← withAppFn $ withAppArg delab
    let rhs ← withAppArg delab
    return ← `($lhs ∪ $rhs)
  let elems ← collectExprElems
  match elems with
  | [] => failure
  | [single] => `({ $(⟨single⟩):term })
  | a :: rest =>
    let mut sc : TSyntax `set_comprehension := ⟨a⟩
    for item in rest do
      let itemTerm : TSyntax `term := ⟨item⟩
      let newSc ← `(set_comprehension| $sc, $itemTerm)
      sc := ⟨newSc.raw⟩
    `({ $sc:set_comprehension })
@[app_unexpander unord_pr_set]
def unexpandUnordPrSet : Unexpander
  | `($(_) $a $b) => `({ $a, $b })
  | _ => throw ()
@[app_unexpander singleton_set]
def unexpandSingletonSet : Unexpander
  | `($(_) $a) => `({ $a })
  | _ => throw ()
