import Props2Theories.Axioms
open Lean PrettyPrinter Delaborator


theorem Russel_paradox : ¬ (∃ A, ∀ x, (x ∈ A ↔ x ∉ x)) := sorry

-- Why we don't use Naive Set Theory (with comprehension axiom) - It is Contraversial
theorem no_comprehension : ¬ (∀ (P : Set → Prop), ∃ A, ∀ x, x ∈ A ↔ P x) := sorry

-- If P describes existing set, it is also unique
theorem describes_elem_then_unique (P : Set → Prop) : (∃ C, ∀ x, x ∈ C ↔ P x) → (∃! C, ∀ x, x ∈ C ↔ P x) := sorry


-- Subset Definition And Properties
def subset (A B : Set) : Prop := ∀ x ∈ A, x ∈ B
infix:50 (priority := high) " ⊆ " => subset
def neq_subset (A B : Set) : Prop := (A ⊆ B) ∧ (A ≠ B)
infix:50 (priority := high) " ⊊ " => neq_subset
def no_subset (A B : Set) : Prop := ¬ (A ⊆ B)
infix:50 (priority := high) " ⊈ " => no_subset

theorem subset_refl : ∀ A, A ⊆ A := sorry
theorem subset_trans : ∀ A B C, A ⊆ B → B ⊆ C → A ⊆ C := sorry
theorem subs_subs_then_eq : ∀ A B, (A ⊆ B ∧ B ⊆ A) ↔ A = B := sorry
theorem equality_then_subset : ∀ A B, (A = B) → (A ⊆ B) := sorry


-- Empty Set Definition And Properties
def is_empty (X : Set) : Prop := ∀ y, (y ∉ X)
def is_nempty (X : Set) : Prop := ∃ y, (y ∈ X)

theorem n_nemp_is_emp : ∀ X, ¬is_nempty X → is_empty (X) := sorry
theorem n_emp_is_nemp_cl : ∀ X, ¬is_empty X → is_nempty (X) := sorry
theorem is_empty_subset_any : ∀ A B, is_empty A → (A ⊆ B) := sorry
theorem exists_empty : (∃ x, is_empty x) := sorry
theorem exists_unique_empty : (∃! x, is_empty x) := sorry

noncomputable def empty_set := iota_op (exists_unique_empty)
notation (priority := high) "∅" => empty_set

theorem empty_set_is_empty : is_empty ∅ := sorry
theorem empty_subset_any : ∀ A, ∅ ⊆ A := sorry
theorem is_empty_empty_set : ∀ A, is_empty A ↔ (A = ∅) := sorry
theorem subset_empty_is_empty : ∀ A, (A ⊆ ∅) → (A = ∅) := sorry
theorem exists_then_nonempty : ∀ A, (∃ x, x ∈ A) → (A ≠ ∅) := sorry
theorem nonempty_then_exists_cl : ∀ A, (A ≠ ∅) → (is_nempty A) := sorry
theorem nonempty_iff_exists_cl : ∀ A, (A ≠ ∅) ↔ (is_nempty A) := sorry
theorem non_empty_uni_then_exi_cl (P : Set → Prop) : ∀ A, (A ≠ ∅) → (∀ x ∈ A, P x) → ∃ x ∈ A, P x := sorry


-- Boolean Set
theorem exists_unique_boolean : ∀ A, ∃! B, ∀ x, (x ∈ B ↔ x ⊆ A) := sorry
noncomputable def boolean (A : Set) : Set := iota_op (exists_unique_boolean A)
notation:max "𝒫 " A:1024 => boolean A

theorem boolean_set_is_boolean : ∀ A, (∀ x, x ∈ 𝒫 A ↔ x ⊆ A) := sorry
theorem is_boolean_boolean_set : ∀ A B, (∀ x, x ∈ B ↔ x ⊆ A) → (B = 𝒫 A) := sorry
theorem empty_belongs_boolean : ∀ A, ∅ ∈ 𝒫 A := sorry
theorem set_belongs_boolean_set : ∀ A, A ∈ (𝒫 A) := sorry
theorem boolean_not_empty : ∀ A, 𝒫 A ≠ ∅ := sorry
theorem boolean_monotonic : ∀ A B, A ⊆ B ↔ 𝒫 A ⊆ 𝒫 B := sorry



-- Replacement Set Definition And Properties
theorem exists_unique_replacement (P : Set → Set → Prop) : ∀ A, (∀ x, ∀ y, ∀ z, P x y → P x z → y = z) → ∃! B, ∀ y, (y ∈ B ↔ ∃ x ∈ A, P x y) := sorry
noncomputable def repl_set (P : Set → Set → Prop) (A : Set) (h : ∀ x y z, P x y → P x z → y = z) := iota_op (exists_unique_replacement P A h)
syntax "ReplImg" "{ " ident " | " "∃ " ident " ∈ " term ", " term " }" " of " term : term
macro_rules
  | `(ReplImg { $y:ident | ∃ $x:ident ∈ $A, $P } of $h) =>
    `(repl_set (fun $x $y => $P) $A $h)
@[app_unexpander repl_set]
def unexpandReplSet : Unexpander
  | `($_ $P $A $h) =>
    match P with
    | `(fun $x $y => $body)
    | `(fun $x => fun $y => $body) =>
        let x_id : TSyntax `ident := ⟨x.raw⟩
        let y_id : TSyntax `ident := ⟨y.raw⟩
        `(ReplImg { $y_id | ∃ $x_id ∈ $A, $body } of $h)
    | _ => throw ()
  | _ => throw ()

theorem repl_set_is_repl (P : Set → Set → Prop) (A : Set) (h : ∀ x y z, P x y → P x z → y = z) :
    ∀ y, y ∈ (ReplImg{ y | ∃ x ∈ A, P x y} of h) ↔ ∃ x ∈ A, P x y := sorry
theorem is_repl_repl_set (P : Set → Set → Prop) (A : Set) (h : ∀ x y z, P x y → P x z → y = z) (B : Set) (hB : ∀ y, (y ∈ B ↔ ∃ x ∈ A, P x y)) :
  B = ReplImg{ y | ∃ x ∈ A, P x y} of h := sorry


-- Unordered Pair Constructions
def unord_pr_predicate (a b : Set) (x y : Set) := (x = ∅ ∧ y = a) ∨ (x = (𝒫 ∅) ∧ y = b)
theorem unord_pr_predicate_f (a b : Set) : ∀ x y z, (unord_pr_predicate a b x y) → (unord_pr_predicate a b x z) → y = z := sorry
noncomputable def unord_pr_set (a b : Set) := ReplImg{ y | ∃ x ∈ 𝒫 (𝒫 ∅), unord_pr_predicate a b x y } of (unord_pr_predicate_f a b)
notation (priority := high) "{" a ", " b "}" => unord_pr_set a b

theorem unord_pr_set_is_unord_pr : ∀ a b, ∀ x, (x ∈ {a , b} ↔ x = a ∨ x = b) := sorry
theorem unord_pr_is_unord_pr_set : ∀ C a b, (∀ x, (x ∈ C ↔ x = a ∨ x = b)) → C = {a , b} := sorry
theorem left_un_pr : ∀ a b, a ∈ {a, b} := sorry
theorem right_un_pr : ∀ a b, b ∈ {a, b} := sorry
theorem unord_pr_rev : ∀ a b, {a, b} = {b, a} := sorry
theorem unordered_pair_subs : ∀ a b A, (a ∈ A) → (b ∈ A) → ({a, b} ⊆ A) := sorry


-- Singleton Set Definition And Properties
noncomputable def singleton_set (a : Set) : Set := unord_pr_set a a
notation (priority := high) "{" a "}" => singleton_set a

theorem singleton_a_elem_is_a : ∀ a x, x ∈ {a} ↔ x = a := sorry
theorem singl_is_singl_set : ∀ C a, (∀ x, (x ∈ C ↔ x = a)) → C = {a} := sorry
theorem x_in_singl_x : ∀ x, x ∈ {x} := sorry
theorem singleton_non_empty : (∀ x, ∃ t, t ∈ {x}) := sorry
theorem singl_subs : ∀ A x, x ∈ A → {x} ⊆ A := sorry
theorem neg_notin_refl : ∀ x, x ∉ x := sorry
theorem neg_notin_symm : ∀ x y, x ∈ y → y ∉ x := sorry


-- Union Set Definition And Properties
theorem exists_unique_union : ∀ A, ∃! B, ∀ x, (x ∈ B ↔ ∃ y ∈ A, x ∈ y) := sorry
noncomputable def union_set (A : Set) := iota_op (exists_unique_union A)
notation:max "⋃ " A:1024 => union_set A

theorem union_set_is_union : (∀ A x, (x ∈ ⋃ A ↔ ∃ y ∈ A, x ∈ y)) := sorry
theorem is_union_then_union_set : ∀ A B, (∀ A x, (x ∈ B ↔ ∃ y ∈ A, x ∈ y)) → (B = ⋃ A) := sorry
theorem union_empty : ⋃ ∅ = ∅ := sorry
theorem union_singleton : ∀ A, ⋃ {A} = A := sorry
theorem union_boolean : (∀ A, ⋃ (𝒫 A) = A) := sorry
theorem elem_subset_union : (∀ A, ∀ x ∈ A, x ⊆ ⋃ A) := sorry
theorem union_subset_monotonic : ∀ A B, A ⊆ B → ⋃ A ⊆ ⋃ B := sorry
theorem all_ss_then_union_ss : ∀ A B, (∀ X ∈ A, X ⊆ B) → (⋃ A ⊆ B) := sorry
theorem boolean_union : (∀ A, A ⊆ 𝒫 (⋃ A)) := sorry
theorem sub_bool_un_mem_bool : ∀ A B, (A ⊆ 𝒫 B → ((⋃ A) ∈ 𝒫 B)) := sorry


-- Specification Set Definition And Properties
def specific_pred (P : Set → Prop) (x y : Set) : Prop := P x ∧ x = y
theorem specific_pred_f (P : Set → Prop) : ∀ x y z, specific_pred P x y → specific_pred P x z → y = z := sorry
noncomputable def specific_set (A : Set) (P : Set → Prop) : Set := ReplImg{ y | ∃ x ∈ A, specific_pred P x y } of (specific_pred_f P)
syntax "{ " ident " ∈ " term " | " term " }" : term
macro_rules
  | `({ $x:ident ∈ $A | $P }) => `(specific_set $A (fun $x => $P))
@[app_unexpander specific_set]
def unexpandSpecificSet : Unexpander
  | `($_ $A fun $x => $P) =>
    let x_id : TSyntax `ident := ⟨x.raw⟩
    `({ $x_id ∈ $A | $P })
  | _ => throw ()

theorem spec_is_spec (A : Set) (P : Set → Prop) : (∀ x, x ∈ {x ∈ A | P x} ↔ x ∈ A ∧ P x) := sorry
theorem spec_then_P (A : Set) (P : Set → Prop) : ∀ x, (x ∈ {x ∈ A | P x}) → P x := sorry
theorem spec_subs (A : Set) (P : Set → Prop) : {x ∈ A | P x} ⊆ A := sorry
theorem elem_P_then_spec (A : Set) (P : Set → Prop) : ∀ x, (x ∈ A) → (P x) → x ∈ {x ∈ A | P x} := sorry
theorem is_spec_spec_set (A : Set) (P : Set → Prop) : ∀ B, (∀ x, x ∈ B ↔ (x ∈ A ∧ P x)) → B = {x ∈ A | P x} := sorry

-- There is no universal set (prove without using regularity_ax)
theorem no_universal_set : ¬ ∃ A, ∀ x, x ∈ A := sorry

-- Intersection Set Definition And Properties
noncomputable def intersection_set (A : Set) : Set := {x ∈ ⋃ A | ∀ y ∈ A, x ∈ y}
notation:max "⋂ " A:1024 => intersection_set A

theorem interset_is_interset : ∀ A x, x ∈ ⋂ A ↔ (x ∈ ⋃ A ∧ ∀ y ∈ A, x ∈ y) := sorry
theorem interset_sub_union : ∀ A, ⋂ A ⊆ ⋃ A := sorry
theorem interset_all_in : ∀ A x, (x ∈ ⋂ A) → (∀ y ∈ A, x ∈ y) := sorry
theorem intersection_non_empty : ∀ A, ((is_nempty A) → ∀ x, (x ∈ ⋂ A) ↔ ∀ y ∈ A, x ∈ y) := sorry
theorem all_in_exi_interset : ∀ A x, (is_nempty A) → (∀ y ∈ A, x ∈ y) → (x ∈ ⋂ A) := sorry
theorem intersect_subset_monotonic : ∀ A B, (is_nempty A) → (A ⊆ B) → (⋂ B ⊆ ⋂ A) := sorry
