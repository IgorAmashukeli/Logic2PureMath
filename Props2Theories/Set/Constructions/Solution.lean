import Props2Theories.TacticNames
import Props2Theories.Axioms
import Props2Theories.Logic.Props.Task
import Props2Theories.Logic.Equality.Task
open Lean PrettyPrinter Delaborator

theorem Russel_paradox : ¬ (∃ A, ∀ x, (x ∈ A ↔ x ∉ x)) := by
  intro_neg h_ex
  elim_exists h_ex, A, h_A
  specialize h_A A
  apply (negation_not_equiv (A ∈ A))
  assumption

-- Why we don't use Naive Set Theory - It is Contraversial

theorem no_comprehension : ¬ (∀ (P : Set → Prop), ∃ A, ∀ x, x ∈ A ↔ P x) := by
  intro_neg h_comp
  elim_neg (Russel_paradox)
  apply h_comp

-- If P describes existing set, it is also unique
theorem describes_elem_then_unique (P : Set → Prop) : (∃ C, ∀ x, x ∈ C ↔ P x) → (∃! C, ∀ x, x ∈ C ↔ P x) := by
  intro hex
  elim_exists hex, C, hC
  intro_exists_unique C
  intro_and
  · assumption
  · intros y hy
    apply set_extensionality_ax
    intro t
    specialize hC t
    specialize hy t
    have hy₂ := (iff_symm _ _) hy
    apply (iff_transitivity _ (P t) _) <;> assumption

-- Subset Definition And Properties
def subset (A B : Set) : Prop := ∀ x ∈ A, x ∈ B
infix:50 (priority := high) " ⊆ " => subset
def neq_subset (A B : Set) : Prop := (A ⊆ B) ∧ (A ≠ B)
infix:50 (priority := high) " ⊊ " => neq_subset
def no_subset (A B : Set) : Prop := ¬ (A ⊆ B)
infix:50 (priority := high) " ⊈ " => no_subset

theorem subset_refl : ∀ A, A ⊆ A := by
  intro A
  intro_in x
  apply (axiomatic_rule)

theorem subset_trans : ∀ A B C, A ⊆ B → B ⊆ C → A ⊆ C := by
  intros A B C hAB hBC
  intro_in x
  intro hA
  apply hBC
  apply hAB
  assumption

theorem subs_subs_then_eq : ∀ A B, (A ⊆ B ∧ B ⊆ A) ↔ A = B := by
  intros A B
  intro_iff
  · intro hAB_BA
    elim_and hAB_BA, h_AB, h_BA
    apply set_extensionality_ax
    intro x
    intro_iff
    · intro hxA
      apply h_AB
      assumption
    · intro hxB
      apply h_BA
      assumption
  · intro h_AB
    rewrite [h_AB]
    intro_and <;> apply subset_refl


theorem equality_then_subset : ∀ A B, (A = B) → (A ⊆ B) := by
  intros A B h_AB
  rewrite [h_AB]
  apply subset_refl


-- Empty Set Definition And Properties
def is_empty (X : Set) : Prop := ∀ y, (y ∉ X)

theorem is_empty_subset_any : ∀ A B, is_empty A → (A ⊆ B) := by
  intros A B hAB
  intro_in x
  intro hx
  specialize hAB x
  elim_f_neg hAB
theorem exists_empty : (∃ x, is_empty x) := by
  exact emp_st_ax

theorem exists_unique_empty : (∃! x, is_empty x) := by
  elim_exists (exists_empty), x, h_x
  intro_exists_unique x
  intro_and <;> try assumption
  intros y h_isemp
  apply_l (subs_subs_then_eq x y)
  intro_and <;> apply is_empty_subset_any <;> assumption

noncomputable def empty_set := iota_op (exists_unique_empty)
notation (priority := high) "∅" => empty_set

theorem empty_set_is_empty : is_empty ∅ := by
  apply iota_pr

theorem empty_subset_any : ∀ A, ∅ ⊆ A := by
  intro A
  apply is_empty_subset_any
  exact empty_set_is_empty

theorem is_empty_empty_set : ∀ A, is_empty A ↔ (A = ∅) := by
  intro A
  intro_iff
  · intro hemp
    apply iota_e
    assumption
  · intro hAe
    rewrite [hAe]
    exact empty_set_is_empty

theorem subset_empty_is_empty : ∀ A, (A ⊆ ∅) → (A = ∅) := by
  intros A hA
  apply_l (subs_subs_then_eq A ∅)
  intro_and
  · assumption
  · apply empty_subset_any

theorem exists_then_nonempty : ∀ A, (∃ x, x ∈ A) → (A ≠ ∅) := by
  intros A hex
  elim_exists hex, x, hx
  intro_neg h_Aemp
  rewrite [h_Aemp] at hx
  apply (empty_set_is_empty x)
  assumption

theorem nonempty_then_exists_cl : ∀ A, (A ≠ ∅) → ∃ x, x ∈ A := by
  intros A hAnemp
  by_contra h_nex
  elim_neg hAnemp
  apply_l (is_empty_empty_set A)
  intro x
  intro_neg hx
  elim_neg h_nex
  intro_exists_ x, hx

theorem nonempty_iff_exists_cl : ∀ A, (A ≠ ∅) ↔ ∃ x, x ∈ A := by
  intro A
  intro_iff
  · apply nonempty_then_exists_cl
  · apply exists_then_nonempty

theorem non_empty_uni_then_exi_cl (P : Set → Prop) : ∀ A, (A ≠ ∅) → (∀ x ∈ A, P x) → ∃ x ∈ A, P x := by
  intros A hAnemp hfor_P
  have h := by
    apply_l (nonempty_iff_exists_cl A)
    assumption
  elim_exists h, a, ha
  intro_exists_in a <;> try assumption
  apply hfor_P
  assumption


-- Boolean Set
theorem exists_unique_boolean : ∀ A, ∃! B, ∀ x, (x ∈ B ↔ x ⊆ A) := by
  intro A
  apply describes_elem_then_unique
  apply boolean_ax

noncomputable def boolean (A : Set) : Set := iota_op (exists_unique_boolean A)
notation:max "𝒫 " A:1024 => boolean A

theorem boolean_set_is_boolean : ∀ A, (∀ x, x ∈ 𝒫 A ↔ x ⊆ A) := by
  intro A
  apply iota_pr (exists_unique_boolean A)

theorem is_boolean_boolean_set : ∀ A B, (∀ x, x ∈ B ↔ x ⊆ A) → (B = 𝒫 A) := by
  intros A B hBA
  apply iota_e (exists_unique_boolean A)
  assumption

theorem empty_belongs_boolean : ∀ A, ∅ ∈ 𝒫 A := by
  intro A
  apply_r (boolean_set_is_boolean A ∅)
  apply empty_subset_any

theorem set_belongs_boolean_set : ∀ A, A ∈ (𝒫 A) := by
  intro A
  apply_r (boolean_set_is_boolean A A)
  apply subset_refl

theorem boolean_not_empty : ∀ A, 𝒫 A ≠ ∅ := by
  intro A
  apply exists_then_nonempty
  intro_exists ∅
  apply empty_belongs_boolean


-- Replacement Set Definition And Properties
theorem exists_unique_replacement (P : Set → Set → Prop) : ∀ A, (∀ x, ∀ y, ∀ z, P x y → P x z → y = z) → ∃! B, ∀ y, (y ∈ B ↔ ∃ x ∈ A, P x y) := by
  intro A
  intro h_fP
  apply describes_elem_then_unique
  exact (replacement_ax P A h_fP)


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
    ∀ y, y ∈ (ReplImg{ y | ∃ x ∈ A, P x y} of h) ↔ ∃ x ∈ A, P x y := by
  intro y
  apply iota_pr (exists_unique_replacement P A h)


theorem is_repl_repl_set (P : Set → Set → Prop) (A : Set) (h : ∀ x y z, P x y → P x z → y = z) (B : Set) (hB : ∀ y, (y ∈ B ↔ ∃ x ∈ A, P x y)) :
  B = ReplImg{ y | ∃ x ∈ A, P x y} of h := by
  apply iota_e
  assumption


-- Unordered Pair Constructions
def unord_pr_predicate (a b : Set) (x y : Set) := (x = ∅ ∧ y = a) ∨ (x = (𝒫 ∅) ∧ y = b)

theorem unord_pr_predicate_f (a b : Set) : ∀ x y z, (unord_pr_predicate a b x y) → (unord_pr_predicate a b x z) → y = z := by
  intros x y z h_unxy h_unxz
  have h_b := boolean_not_empty ∅
  elim_or h_unxy, h, h <;> elim_and h, h_l, h_r <;> elim_or h_unxz, g, g <;> elim_and g, g_l, g_r
  · rewrite [g_r]
    assumption
  · elim_false
    elim_neg h_b
    rewrite [← g_l]
    assumption
  · elim_false
    elim_neg h_b
    rewrite [←h_l]
    assumption
  · rewrite [g_r]
    assumption

noncomputable def unord_pr_set (a b : Set) := ReplImg{ y | ∃ x ∈ 𝒫 (𝒫 ∅), unord_pr_predicate a b x y } of (unord_pr_predicate_f a b)
notation (priority := high) "{" a ", " b "}" => unord_pr_set a b


theorem unord_pr_set_is_unord_pr : ∀ a b, ∀ x, (x ∈ {a , b} ↔ x = a ∨ x = b) := by
  intros a b x
  have h : x ∈ {a, b} ↔ _ := repl_set_is_repl (unord_pr_predicate a b) (𝒫 (𝒫 ∅)) (unord_pr_predicate_f a b) x
  intro_iff
  · intro h_x
    _apply_l h, h_x, h_t
    elim_exists_in h_t, t, h_in, h_pr
    elim_or h_pr, h_pr, h_pr <;> elim_and h_pr, h_lpr, h_rpr
    · left_
    · right_
  · intro h_xab
    apply_r h
    elim_or h_xab, h_x, h_x
    · intro_exists_in ∅
      · apply empty_belongs_boolean
      · left; intro_and; rfl; assumption
    · intro_exists_in (𝒫 ∅)
      · apply set_belongs_boolean_set
      · right; intro_and; rfl; assumption

theorem unord_pr_is_unord_pr_set : ∀ C a b, (∀ x, (x ∈ C ↔ x = a ∨ x = b)) → C = {a , b} := by
  intro C a b h_x
  let Q t := t = a ∨ t = b
  have h := describes_elem_then_unique Q
  have r : ∃ B, (∀ x, x ∈ B ↔ (x = a ∨ x = b)) := by
    intro_exists {a, b}
    apply unord_pr_set_is_unord_pr
  specialize h r
  elim_exists_unique h, D, h_D, h_un
  have h_un₂ := h_un
  specialize h_un C h_x
  specialize h_un₂ {a, b} (unord_pr_set_is_unord_pr a b)
  rw [← h_un, h_un₂]


theorem left_un_pr : ∀ a b, a ∈ {a, b} := by
  intros a b
  apply_r (unord_pr_set_is_unord_pr a b a)
  left; rfl

theorem right_un_pr : ∀ a b, b ∈ {a, b} := by
  intros a b
  apply_r (unord_pr_set_is_unord_pr a b b)
  right; rfl

theorem unord_pr_rev : ∀ a b, {a, b} = {b, a} := by
  intros a b
  apply unord_pr_is_unord_pr_set
  intro x
  intro_iff
  · intro hxab
    _apply_l (unord_pr_set_is_unord_pr a b x), hxab, h_ab
    elim_or h_ab, ha, hb
    · right_
    · left_
  · intro h_ab
    elim_or h_ab, h_b, h_a
    · rewrite [h_b]
      apply right_un_pr
    · rewrite [h_a]
      apply left_un_pr

theorem unordered_pair_subs : ∀ a b A, (a ∈ A) → (b ∈ A) → ({a, b} ⊆ A) := by
  intros a b A h_a h_b
  intro x hx
  _apply_l (unord_pr_set_is_unord_pr a b x), hx, h_ab
  elim_or h_ab, h_xa, h_xb
  · rewrite [h_xa]
    assumption
  · rewrite [h_xb]
    assumption


-- Singleton Set Definition And Properties
noncomputable def singleton_set : (Set → Set) := fun (a) => unord_pr_set a a
notation (priority := high) "{" a "}" => singleton_set a


theorem singleton_a_elem_is_a : ∀ a x, x ∈ {a} ↔ x = a := by
  intro a x
  have h := unord_pr_set_is_unord_pr a a x
  intro_iff
  · intro h_xa
    _apply_l h, h_xa, h_xaxa
    elim_or h_xaxa, h_xina, h_xina
    · assumption
    · assumption
  · intro h_xeqa
    rw [h_xeqa]
    apply left_un_pr

theorem x_in_singl_x : ∀ x, x ∈ {x} := by
  intro x
  apply left_un_pr

theorem singleton_non_empty : (∀ x, ∃ t, t ∈ {x}) := by
  intro x
  intro_exists x
  apply x_in_singl_x


theorem singl_subs : ∀ A x, x ∈ A → {x} ⊆ A := by
  intros A x h_xA
  intro t htx
  have h := singleton_a_elem_is_a x t
  _apply_l h, htx, h_teqx
  rewrite [h_teqx]
  assumption


theorem neg_notin_refl : ∀ x, x ∉ x := by
  intro x
  intro_neg h_x
  have h := regularity_ax {x} (singleton_non_empty x)
  elim_exists_in h, t, h_int, h_for
  _apply_l (singleton_a_elem_is_a x t), h_int, h_teqx
  specialize_in h_for, x
  conv at h_x =>
    rhs
    rewrite [← h_teqx]
  specialize h_for h_x
  elim_neg h_for
  apply x_in_singl_x

theorem neg_notin_symm : ∀ x y, x ∈ y → y ∉ x := by
  intro x y h_xy
  intro_neg h_yx
  have h_ex : ∃ t, t ∈ {x, y} := by
    intro_exists x
    apply left_un_pr
  have h := regularity_ax {x, y} h_ex
  elim_exists_in h, B, h_Bin, h_PB
  _apply_l (unord_pr_set_is_unord_pr x y B), h_Bin, h_Bx_By
  elim_or h_Bx_By, h_Bx, h_By
  · specialize_in h_PB, y
    rewrite [← h_Bx] at h_yx
    specialize h_PB h_yx
    elim_neg h_PB
    apply right_un_pr
  · specialize_in h_PB, x
    rewrite [← h_By] at h_xy
    specialize h_PB h_xy
    elim_neg h_PB
    apply left_un_pr


-- Union Set Definition And Properties
theorem exists_unique_union : ∀ A, ∃! B, ∀ x, (x ∈ B ↔ ∃ y ∈ A, x ∈ y) := by
  intro A
  apply describes_elem_then_unique
  apply union_ax


noncomputable def union_set (A : Set) := iota_op (exists_unique_union A)
notation:max "⋃ " A:1024 => union_set A

theorem union_set_is_union : (∀ A x, (x ∈ ⋃ A ↔ ∃ y ∈ A, x ∈ y)) := by
  intro A x
  exact (iota_pr (exists_unique_union A) x)

theorem is_union_then_union_set : ∀ A B, (∀ A x, (x ∈ B ↔ ∃ y ∈ A, x ∈ y)) → (B = ⋃ A) := by
  intros A B
  intro h
  apply (iota_e (exists_unique_union A))
  apply h


theorem union_empty : ⋃ ∅ = ∅ := by
  apply_l (is_empty_empty_set _)
  intro t
  intro_neg h_t_un
  _apply_l (union_set_is_union ∅ t), h_t_un, h_exy
  elim_exists_in h_exy, s, h_ins, h_pts
  have h := empty_set_is_empty s
  elim_neg_ h

theorem union_singleton : ∀ A, ⋃ {A} = A := by
  intro A
  have h := union_set_is_union {A}
  apply set_extensionality_ax
  intro x
  specialize h x
  intro_iff
  · intro hx
    _apply_l h, hx, h_y
    elim_exists_in h_y, t, htin, htprop
    _apply_l (singleton_a_elem_is_a A t), htin, h_teqA
    rewrite [← h_teqA]
    assumption
  · intro hx
    apply_r h
    intro_exists_in A
    · apply x_in_singl_x
    · assumption

theorem union_boolean : (∀ A, ⋃ (𝒫 A) = A) := by
  intro A
  apply set_extensionality_ax; intro x
  intro_iff
  · intro h_x
    _apply_l (union_set_is_union _ _), h_x, h_ex
    elim_exists_in h_ex, B, h_inB, h_xB
    _apply_l (boolean_set_is_boolean _ _), h_inB, h_BA
    apply h_BA; assumption
  · intro h_x
    apply_r (union_set_is_union _ _)
    intro_exists_in A
    · apply set_belongs_boolean_set
    · assumption

theorem elem_subset_union : (∀ A, ∀ x ∈ A, x ⊆ ⋃ A) := by
  intro A
  intro_in_ x, h_x
  intro t h_t
  apply_r (union_set_is_union _ _)
  intro_exists_in_ x, h_x, h_t

theorem union_subset_monotonic : ∀ A B, A ⊆ B → ⋃ A ⊆ ⋃ B := by
  intro A B hAB
  intro x h_x
  _apply_l (union_set_is_union _ _), h_x, h_ex
  elim_exists_in h_ex, C, hCin, hCpr
  apply_r (union_set_is_union _ _)
  intro_exists_in C
  · apply hAB; assumption
  · assumption

theorem all_ss_then_union_ss : ∀ A B, (∀ X ∈ A, X ⊆ B) → (⋃ A ⊆ B) := by
  intro A B h_xAB
  intro_in_ t, h_t
  _apply_l (union_set_is_union _ _), h_t, h_ex
  elim_exists_in h_ex, C, hCin, hCpr
  specialize_in_ h_xAB, C, hCin
  apply h_xAB
  assumption


theorem boolean_union : (∀ A, A ⊆ 𝒫 (⋃ A)) := by
  intro A
  intros t ht
  apply_r (boolean_set_is_boolean _ _)
  apply elem_subset_union
  assumption


theorem sub_bool_un_mem_bool : ∀ A B, (A ⊆ 𝒫 B → ((⋃ A) ∈ 𝒫 B)) := by
  intro A B hApB
  apply_r (boolean_set_is_boolean _ _)
  intro_in_ t, h_t
  _apply_l (union_set_is_union _ _), h_t, h_ex
  elim_exists_in h_ex, C, hCin, hCpr
  specialize_in_ hApB, C, hCin
  _apply_l (boolean_set_is_boolean _ _), hApB, hCB
  apply hCB
  assumption


--
