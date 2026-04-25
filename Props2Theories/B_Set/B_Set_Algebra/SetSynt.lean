import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.Task

-- 1. ВВОД (Макросы для создания цепочки объединений)
syntax (priority := high) "{" term ", " term ", " term,+ "}" : term

macro_rules

  | `({ $a, $b, $c }) => `(union2 (unord_pr_set $a $b) (singleton_set $c))
  | `({ $a, $b, $c, $d }) => `(union2 (union2 (unord_pr_set $a $b) (singleton_set $c)) (singleton_set $d))
  | `({ $a, $b, $c, $d, $e }) => `(union2 (union2 (union2 (unord_pr_set $a $b) (singleton_set $c)) (singleton_set $d)) (singleton_set $e))

  | `({ $a, $b, $c, $d, $e, $f }) => `(union2 (union2 (union2 (union2 (unord_pr_set $a $b) (singleton_set $c)) (singleton_set $d)) (singleton_set $e)) (singleton_set $f))

-- 2. ВЫВОД (Принтер для Infoview)
-- Чтобы избежать конфликта со структурами {}, мы используем встроенную категорию sepBy
@[app_unexpander union2]
def unexpandUnion2 : Lean.PrettyPrinter.Unexpander
  | `($$f (union2 (union2 (union2 (unord_pr_set $a $b) (singleton_set $c)) (singleton_set $d)) (singleton_set $e)) (singleton_set $f)) => `({$a, $b, $c, $d, $e, $f})
  | `($$f (union2 (union2 (unord_pr_set $a $b) (singleton_set $c)) (singleton_set $d)) (singleton_set $e)) => `({$a, $b, $c, $d, $e})

  | `($$f (union2 (unord_pr_set $a $b) (singleton_set $c)) (singleton_set $d)) => `({$a, $b, $c, $d})
  | `($$f (unord_pr_set $a $b) (singleton_set $c)) => `({$a, $b, $c})
  | _ => throw ()

-- Базовые принтеры (обязательно БЕЗ пробелов внутри { }, чтобы Lean не путал со структурами)
@[app_unexpander unord_pr_set]
def unexpandUnordPrSet : Lean.PrettyPrinter.Unexpander

  | `($(_) $a $b) => `({$a, $b})
  | _ => throw ()

@[app_unexpander singleton_set]
def unexpandSingletonSet : Lean.PrettyPrinter.Unexpander

  | `($(_) $a) => `({$a})
  | _ => throw ()

-- 3. ПРОВЕРКА
variable (a b c d e f : Set)
#check {a, b, c}
#check {a, b, c, d}
#check {a, b, c, d, e, f}
