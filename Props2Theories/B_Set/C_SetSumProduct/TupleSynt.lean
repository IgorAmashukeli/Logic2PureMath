import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.C_SetSumProduct.Task


-- 1. ВВОД (Макрос для создания вложенных пар)
syntax (priority := high) "(" term ", " term ", " term,+ ")" : term

macro_rules

  | `(($a, $b, $c)) => `(ord_pr_set (ord_pr_set $a $b) $c)
  | `(($a, $b, $c, $d)) => `(ord_pr_set (ord_pr_set (ord_pr_set $a $b) $c) $d)
  | `(($a, $b, $c, $d, $e)) => `(ord_pr_set (ord_pr_set (ord_pr_set (ord_pr_set $a $b) $c) $d) $e)

  | `(($a, $b, $c, $d, $e, $f)) => `(ord_pr_set (ord_pr_set (ord_pr_set (ord_pr_set (ord_pr_set $a $b) $c) $d) $e) $f)

-- 2. ВЫВОД (Принтер для красивого отображения)
@[app_unexpander ord_pr_set]
def unexpandOrdPr : Lean.PrettyPrinter.Unexpander
  | `($$f (ord_pr_set (ord_pr_set (ord_pr_set (ord_pr_set $a $b) $c) $d) $e) $f) => `(($a, $b, $c, $d, $e, $f))
  | `($$f (ord_pr_set (ord_pr_set (ord_pr_set $a $b) $c) $d) $e) => `(($a, $b, $c, $d, $e))

  | `($$f (ord_pr_set (ord_pr_set $a $b) $c) $d) => `(($a, $b, $c, $d))
  | `($$f (ord_pr_set $a $b) $c) => `(($a, $b, $c))
  | `($$f $a $b) => `(($a, $b))
  | _ => throw ()

-- 3. ПРОВЕРКА
variable (a b c d e f : Set)
#check (a, b)
#check ((a, b, c) : Set)
#check ((a, b, c, d) : Set)
#check ((a, b, c, d, e) : Set)
#check ((a, b, c, d, e, f) : Set)
