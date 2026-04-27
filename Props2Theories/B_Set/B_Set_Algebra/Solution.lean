import Props2Theories.A_Logic.A_Props.Task
import Props2Theories.B_Set.A_Constructions.Task

noncomputable def union2 (A B : Set) := ⋃ {A, B}
notation:max A:1024 " ∪ " B:1024 => union2 A B
noncomputable def inter2 (A B : Set) := {x ∈ A | x ∈ B}
notation:max A:1024 " ∩ " B:1024 => inter2 A B
noncomputable def difference (A B : Set) := {x ∈ A | x ∉ B}
notation:max A:1024 " \\ " B:1024 => difference A B
noncomputable def symmetric_difference (A B : Set) := (A \ B) ∪ (B \ A)
notation:max A:1024 " △ " B:1024 => symmetric_difference A B


theorem union2_prop : (∀ A B x, x ∈ A ∪ B ↔ x ∈ A ∨ x ∈ B) := by
  intro A B x
  have h := union_set_is_union {A, B} x
  intro_iff
  · intro h_xAB
    _apply_l h, h_xAB, h_ex
    elim_exists_in h_ex, C, h_Cin, h_C
    _apply_l (unord_pr_set_is_unord_pr A B C), h_Cin, h_orAB
    elim_or h_orAB, h_A, h_B
    · left
      rewrite [← h_A]; assumption
    · right
      rewrite [← h_B]; assumption
  · intro h_xAB
    apply_r h
    elim_or h_xAB, h_A, h_B
    · intro_exists_in A
      apply left_un_pr
      assumption
    · intro_exists_in B
      apply right_un_pr
      assumption

theorem inter2_prop : (∀ A B x, x ∈ A ∩ B ↔ x ∈ A ∧ x ∈ B) := by
  intros A B
  let Q t := t ∈ B
  exact (spec_is_spec A Q)

theorem difference_prop : (∀ A B x, x ∈ A \ B ↔ x ∈ A ∧ x ∉ B) := by
  intros A B
  let Q t := t ∉ B
  exact (spec_is_spec A Q)

theorem sym_diff_prop : ∀ A B x, x ∈ A △ B ↔ (x ∈ A ⊕ x ∈ B) := by
  intros A B x
  have h := union2_prop (A \ B) (B \ A) x
  intro_iff
  · intro h_x_symm
    _apply_l h, h_x_symm, h_xAB
    elim_or h_xAB, h_xA, h_xB
    · left
      apply_l (difference_prop _ _ _)
      assumption
    · right
      apply_l (difference_prop _ _ _)
      assumption
  · intro h_xAB
    apply_r h
    elim_or h_xAB, h_xA, h_xB
    · left
      apply_r (difference_prop _ _ _)
      assumption
    · right
      apply_r (difference_prop _ _ _)
      assumption

theorem left_union2_subs : ∀ A B, (A ⊆ A ∪ B) := by
  intros A B
  intro_in_ x, h_x
  apply_r (union2_prop _ _ _)
  left_

theorem right_union2_subs : ∀ A B, (B ⊆ A ∪ B) := by
  intros A B
  intro_in_ x, h_x
  apply_r (union2_prop _ _ _)
  right_

theorem inter2_subs_left : ∀ A B, (A ∩ B ⊆ A) := by
  intros A B
  apply spec_subs

theorem inter2_subs_right : ∀ A B, (A ∩ B ⊆ B) := by
  intros A B
  intro_in_ x, h_x
  let Q t := t ∈ B
  apply (spec_then_P A Q x)
  assumption

theorem difference_subs_left : ∀ A B, (A \ B ⊆ A) := by
  intros A B
  intro_in_ x, h_x
  let Q t := t ∉ B
  apply (spec_subs A Q x)
  assumption

theorem subs_l_subs_r_subs_inter2 : ∀ A B X, (X ⊆ A) → (X ⊆ B) → (X ⊆ (A ∩ B)) := by
  intros A B X h_XA h_XB
  intro_in_ x, h_x
  apply_r (inter2_prop _ _ _)
  intro_and
  · apply h_XA; assumption
  · apply h_XB; assumption

theorem l_subs_r_subs_uinion2_subs : ∀ A B X, (A ⊆ X) → (B ⊆ X) → ((A ∪ B) ⊆ X) := by
  intros A B X h_XA h_XB
  intro_in_ x, h_x
  _apply_l (union2_prop _ _ _), h_x, h_xAB
  elim_or h_xAB, h_A, h_B
  · apply h_XA; assumption
  · apply h_XB; assumption

theorem subs_is_eq_inter2 : ∀ A B, (A ⊆ B ↔ A ∩ B = A) := by
  intro A B
  intro_iff
  · intro h_AB
    apply_l (subs_subs_then_eq _ _); intro_and
    · apply inter2_subs_left
    · apply subs_l_subs_r_subs_inter2
      · apply subset_refl
      · assumption
  · intro h_AB
    rewrite [← h_AB]
    apply inter2_subs_right

theorem subs_is_eq_uinion2 : ∀ A B, (A ⊆ B ↔ A ∪ B = B) := by
  intro A B
  intro_iff
  · intro h_AB
    apply_l (subs_subs_then_eq _ _); intro_and
    · apply l_subs_r_subs_uinion2_subs
      · assumption
      · apply subset_refl
    · apply right_union2_subs
  · intro h_AB
    rewrite [← h_AB]
    apply left_union2_subs

theorem union2_idepm : (∀ A, A ∪ A = A) := by
  intro A
  apply_l (subs_is_eq_uinion2 _ _)
  apply subset_refl


theorem inter2_idemp : (∀ A, A ∩ A = A) := by
  intro A
  apply_l (subs_is_eq_inter2 _ _)
  apply subset_refl


theorem differ_idemp_emp : ∀ A, A \ A = ∅ := by
  intro A
  apply subset_empty_is_empty
  intro t h_t
  _apply_l (difference_prop _ _ _), h_t, h_inA_ninA; elim_and h_inA_ninA, h_inA, h_ninA
  elim_f_neg h_ninA

theorem symm_differ_idemp_emp : ∀ A, A △ A = ∅ := by
  intro A
  apply subset_empty_is_empty
  intro t h_t
  _apply_l (sym_diff_prop _ _ _), h_t, h_xor
  elim_or h_xor, h_and, h_and <;> elim_and h_and, h_A, h_nA <;> elim_f_neg h_nA


theorem union2_comm : (∀ A B, A ∪ B = B ∪ A) := by
  intros A B
  apply set_extensionality_ax; intro x
  calc
    _ ↔ x ∈ A ∨ x ∈ B := by apply union2_prop
    _ ↔ x ∈ B ∨ x ∈ A := by apply disj_commut
    _ ↔ _ := by apply iff_symm; apply union2_prop

theorem inter2_comm : (∀ A B, A ∩ B = B ∩ A) := by
  intros A B
  apply set_extensionality_ax; intro x
  calc
  _ ↔ x ∈ A ∧ x ∈ B := by apply inter2_prop
  _ ↔ x ∈ B ∧ x ∈ A := by apply conj_commut
  _ ↔ _ := by apply iff_symm; apply inter2_prop


theorem symm_diff_comm : ∀ A B, A △ B = B △ A := by
  intros A B
  apply set_extensionality_ax; intro x
  calc
  _ ↔ (x ∈ A ⊕ x ∈ B) := by apply sym_diff_prop
  _ ↔ (x ∈ B ⊕ x ∈ A) := by apply xor_commut
  _ ↔ _ := by apply iff_symm; apply sym_diff_prop


theorem union2_assoc : (∀ A B C, (A ∪ B) ∪ C = A ∪ (B ∪ C)) := by
  intros A B C
  apply set_extensionality_ax; intro x
  calc
    _↔ (x ∈ A ∪ B) ∨ (x ∈ C) := by apply union2_prop
    _ ↔ (x ∈ A ∨ x ∈ B) ∨ _ := by apply disj_congr_r; apply union2_prop
    _ ↔ (x ∈ A) ∨ (x ∈ B ∨ x ∈ C) := by apply disj_assoc
    _ ↔ _ ∨ (x ∈ B ∪ C) := by apply disj_congr_l; apply iff_symm; apply union2_prop
    _ ↔ _ := by apply iff_symm; apply union2_prop

theorem inter2_assoc : (∀ A B C, (A ∩ B) ∩ C = A ∩ (B ∩ C)) := by
  intros A B C
  apply set_extensionality_ax; intro x
  calc
    _ ↔ (x ∈ (A ∩ B)) ∧ (x ∈ C) := by apply inter2_prop
    _ ↔ (x ∈ A ∧ x ∈ B) ∧ _ := by apply conj_congr_r; apply inter2_prop
    _ ↔ (x ∈ A) ∧ (x ∈ B ∧ x ∈ C) := by apply conj_assoc
    _ ↔ _ ∧ (x ∈ B ∩ C) := by apply conj_congr_l; apply iff_symm; apply inter2_prop
    _ ↔ _ := by apply iff_symm; apply inter2_prop


  theorem symm_differ_assoc_cl : ∀ A B C, ((A △ B) △ C) = (A △ (B △ C)) := by
    intros A B C
    apply set_extensionality_ax; intro x
    calc
    _ ↔ ((x ∈ (A △ B)) ⊕ x ∈ C) := by apply sym_diff_prop
    _ ↔ (((x ∈ A) ⊕ (x ∈ B)) ⊕ (x ∈ C)) := by
      have h₁ : (x ∈ A △ B) = (x ∈ A ⊕ x ∈ B) := by
        _propext_cl_
        apply sym_diff_prop
      have h : (x ∈ A △ B ⊕ x ∈ C) = ((x ∈ A ⊕ x ∈ B) ⊕ x ∈ C) := by rw [h₁]
      rewrite [h]
      apply trivial_equivalence
    _ ↔ ((x ∈ A) ⊕ ((x ∈ B) ⊕ (x ∈ C))) := by apply xor_assoc_cl
    _ ↔ ((x ∈ A) ⊕ (x ∈ B △ C)) := by
      have h₁ : ((x ∈ B) ⊕ (x ∈ C)) = (x ∈ (B △ C)) := by
        _propext_cl_
        apply iff_symm; apply sym_diff_prop
      have h : ((x ∈ A) ⊕ ((x ∈ B) ⊕ (x ∈ C))) = ((x ∈ A) ⊕ (x ∈ B △ C)) := by rw [h₁]
      rewrite [h]
      apply trivial_equivalence
    _ ↔ _ := by apply iff_symm; apply sym_diff_prop








theorem inter2_union2_absorb : (∀ A B, A ∩ (A ∪ B) = A) := by
  intros A B
  apply_l (subs_is_eq_inter2 _ _)
  apply left_union2_subs

theorem union_inter_absorb : (∀ A B, A ∪ (A ∩ B) = A) := by
  intros A B
  calc
    _ = (A ∩ B) ∪ A := by apply union2_comm
    _ = _ := by apply_l (subs_is_eq_uinion2 _ _); apply inter2_subs_left


theorem symm_differ_absorb : ∀ A B, (A △ B) △ A = B := by
  intros A B
  apply set_extensionality_ax; intro x
  calc
  _ ↔ (x ∈ (A △ B) ⊕ (x ∈ A)) := by apply sym_diff_prop
  _ ↔ (((x ∈ A) ⊕ (x ∈ B)) ⊕ (x ∈ A)) := by
    have h₁ : (x ∈ A △ B) = (x ∈ A ⊕ x ∈ B) := by
        _propext_cl_
        apply sym_diff_prop
    have h : (x ∈ (A △ B) ⊕ (x ∈ A)) = (((x ∈ A) ⊕ (x ∈ B)) ⊕ (x ∈ A)) := by rw [h₁]
    rewrite [h]
    apply trivial_equivalence
  _ ↔ _ := by apply iff_symm; apply xor_absorb_cl (x ∈ A) (x ∈ B)


theorem inter_union_distrib : (∀ A B C, A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C)) := by
  intros A B C
  apply set_extensionality_ax; intro x
  calc
  _ ↔ (x ∈ A) ∧ (x ∈ (B ∪ C)) := by apply inter2_prop
  _ ↔ _ ∧ (x ∈ B ∨ x ∈ C) := by apply conj_congr_l; apply union2_prop;
  _ ↔ (x ∈ A ∧ x ∈ B) ∨ (x ∈ A ∧ x ∈ C) := by apply conj_disj_distrib
  _ ↔ (x ∈ A ∩ B) ∨ _:= by apply disj_congr_r; apply iff_symm; apply inter2_prop
  _ ↔ _ ∨ (x ∈ A ∩ C) := by apply disj_congr_l; apply iff_symm; apply inter2_prop
  _ ↔ _ := by apply iff_symm; apply union2_prop


theorem union_inter_distrib : (∀ A B C, A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C)) := by
  intros A B C
  apply set_extensionality_ax; intro x
  calc
  _ ↔ x ∈ A ∨ (x ∈ B ∩ C) := by apply union2_prop
  _ ↔ _ ∨ (x ∈ B ∧ x ∈ C) := by apply disj_congr_l; apply inter2_prop
  _ ↔ (x ∈ A ∨ x ∈ B) ∧ (x ∈ A ∨ x ∈ C) := by apply disj_conj_distrib
  _ ↔ (x ∈ A ∪ B) ∧ _ := by apply conj_congr_r; apply iff_symm; apply union2_prop;
  _ ↔ _ ∧ (x ∈ A ∪ C) := by apply conj_congr_l; apply iff_symm; apply union2_prop
  _ ↔ _ := by apply iff_symm; apply inter2_prop

theorem compl_compl_cl : ∀ U A, (A ⊆ U) → (U \ (U \ A)) = A := by
  intros U A h
  apply set_extensionality_ax; intro x
  calc
  _ ↔ (x ∈ U) ∧ (x ∉ U \ A) := by apply difference_prop
  _ ↔ (x ∈ U ∧ x ∈ U) ∧ _ := by apply conj_congr_r; apply conj_idemp
  _ ↔ (x ∈ U) ∧ (x ∈ U ∧ x ∉ U \ A) := by apply conj_assoc
  _ ↔ (x ∈ U) ∧ (x ∈ A) := by
    apply conj_congr_l;
    intro_iff
    · intro h_xUA
      elim_and h_xUA, h_xU, h_xnUA
      by_contra h_xnA
      elim_neg h_xnUA
      apply_r (difference_prop _ _ _); intro_and <;> assumption
    · intro h_xA
      intro_and
      · apply h; assumption
      · intro_neg h_xUA
        _apply_l (difference_prop _ _ _), h_xUA, h_xUandA
        elim_and h_xUandA, h_xU, h_xA
        elim_neg_ h_xA
  _ ↔ _ := by
    _apply_l (subs_is_eq_inter2 _ _), h, h_inter;
    conv =>
      rhs;
      rewrite [← h_inter]
    apply iff_symm;
    rewrite [inter2_comm]
    apply inter2_prop

theorem demorgan_inter_cl : ∀ U A B, (U \ (A ∩ B) = (U \ A) ∪ (U \ B)) := by
  intro U A B
  apply set_extensionality_ax; intro x
  calc
  _ ↔ (x ∈ U) ∧ (x ∉ (A ∩ B)) := by apply difference_prop
  _ ↔ _ ∧ (¬ (x ∈ A ∧ x ∈ B)) := by apply conj_congr_l; apply neg_congr; apply inter2_prop
  _ ↔ _ ∧ ((x ∉ A) ∨ x ∉ B) := by apply conj_congr_l; apply morgan_conj_cl
  _ ↔ (x ∈ U ∧ (x ∉ A)) ∨ (x ∈ U ∧ (x ∉ B)) := by apply conj_disj_distrib
  _ ↔ (x ∈ U \ A) ∨ _ := by apply disj_congr_r; apply iff_symm; apply difference_prop
  _ ↔ _ ∨ (x ∈ U \ B) := by apply disj_congr_l; apply iff_symm; apply difference_prop
  _ ↔ _ := by apply iff_symm; apply union2_prop


theorem demorgan_union: ∀ U A B, (U \ (A ∪ B) = (U \ A) ∩ (U \ B)) := by
  intro U A B
  apply set_extensionality_ax; intro x
  calc
  _ ↔ (x ∈ U) ∧ (x ∉ (A ∪ B)) := by apply difference_prop
  _ ↔ _ ∧ (¬ (x ∈ A ∨ x ∈ B)) := by apply conj_congr_l; apply neg_congr; apply union2_prop
  _ ↔ _ ∧ ((x ∉ A) ∧ (x ∉ B)) := by apply conj_congr_l; apply morgan_disj
  _ ↔ ((x ∈ U) ∧ (x ∈ U)) ∧ _ := by apply conj_congr_r; apply conj_idemp
  _ ↔ (x ∈ U) ∧ (x ∈ U ∧ ((x ∉ A) ∧ (x ∉ B))) := by apply conj_assoc;
  _ ↔ _ ∧ ((x ∈ U ∧ (x ∉ A)) ∧ (x ∉ B)) := by apply conj_congr_l; apply iff_symm; apply conj_assoc
  _ ↔ _ ∧ ((x ∈ U \ A) ∧ _) := by apply conj_congr_l; apply conj_congr_r; apply iff_symm; apply difference_prop
  _ ↔ ((x ∈ U) ∧ (x ∈ U \ A)) ∧ (x ∉ B) := by apply iff_symm; apply conj_assoc
  _ ↔ ((x ∈ U \ A) ∧ (x ∈ U)) ∧ (x ∉ B) := by apply conj_congr_r; apply conj_commut
  _ ↔ (x ∈ U \ A) ∧ (x ∈ U ∧ x ∉ B) := by apply conj_assoc
  _ ↔ _ ∧ (x ∈ U \ B) := by apply conj_congr_l; apply iff_symm; apply difference_prop
  _ ↔ (x ∈ (U \ A) ∩ (U \ B)) := by apply iff_symm; apply inter2_prop




theorem difference_inter_prop : ∀ U A B, (A ⊆ U) → (A \ B = A ∩ (U \ B)) := by
  intros U A B h_AU
  apply set_extensionality_ax; intro x
  intro_iff
  · intro h_AB
    _apply_l (difference_prop _ _ _), h_AB, h
    elim_and h, h_A, h_nB
    apply_r (inter2_prop _ _ _); intro_and
    · assumption
    · apply_r (difference_prop _ _ _)
      intro_and <;> try assumption
      · apply h_AU
        assumption
  · intro h_xAUB
    _apply_l (inter2_prop _ _ _), h_xAUB, h
    elim_and h, h_A, h_UB
    _apply_l (difference_prop _ _ _), h_UB, h_UnB
    elim_and h_UnB, h_U, h_nB
    apply_r (difference_prop _ _ _); intro_and <;> assumption


theorem inter2_empty : (∀ A, A ∩ ∅ = ∅) := by
  intro A
  apply subset_empty_is_empty
  intro_in_ t, h_t
  _apply_l (inter2_prop _ _ _), h_t, h
  elim_and h, h_A, h_emp
  assumption


theorem union2_empty : (∀ A, A ∪ ∅ = A) := by
  intro A
  rewrite [union2_comm]
  apply_l (subs_is_eq_uinion2 _ _)
  apply empty_subset_any


theorem differ_empty_l : ∀ A, A \ ∅ = A := by
  intro A
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply difference_subs_left
  · intro h_t
    apply_r (difference_prop _ _ _); intro_and
    · assumption
    · exact empty_set_is_empty t


theorem differ_empty_r : ∀ A, ∅ \ A = ∅ := by
  intro A
  apply subset_empty_is_empty
  apply difference_subs_left



theorem symm_differ_empty : ∀ A, A △ ∅ = A := by
  intro A
  apply set_extensionality_ax; intro t;
  intro_iff
  · intro h_t
    _apply_l (sym_diff_prop _ _ _), h_t, h_xor; clear h_t;
    elim_or h_xor, h_or, h_or
    · elim_and_ h_or
    · elim_and h_or, h_inemp, h_ninA
      elim_f_neg (empty_set_is_empty t)
  · intro h_t
    apply_r (sym_diff_prop _ _ _)
    left; intro_and
    · assumption
    · exact empty_set_is_empty t


theorem symm_differ_universum : ∀ A U, (A ⊆ U) → (A △ U) = U \ A := by
  intro A U h_AU
  apply_l (subs_subs_then_eq _ _)
  intro_and
  · intro t h_t
    apply_r (difference_prop _ _ _)
    _apply_l (sym_diff_prop _ _ _), h_t, h_xor; elim_or h_xor, h_and, h_and <;> elim_and h_and, h_l, h_r
    · intro_and
      · apply h_AU; assumption
      · intro_neg h_inA
        specialize_in_ h_AU, t, h_inA
        elim_neg_ h_r
    · intro_and
      · assumption
      · assumption
  · apply right_union2_subs




theorem inter2_universum : ∀ U A, (A ⊆ U) → A ∩ U = A := by
  intro U A h_AU
  apply_l_ (subs_is_eq_inter2 _ _)


theorem union2_universum : ∀ U A, (A ⊆ U) → A ∪ U = U := by
  intro U A h_AU
  apply_l_ (subs_is_eq_uinion2 _ _)


theorem inter2_to_empty: ∀ U A, (A ∩ (U \ A) = ∅) := by
  intros U A
  apply subset_empty_is_empty
  intro_in_ t, h_t
  _apply_l (inter2_prop _ _ _), h_t, h_in
  elim_and h_in, h_inA, h_inUnA
  _apply_l (difference_prop _ _ _), h_inUnA, h_inUandnA
  elim_and h_inUandnA, h_inU, h_innA
  elim_f_neg h_innA

theorem union2_to_universum_cl : ∀ U A, (A ⊆ U) → (A ∪ (U \ A) = U) := by
  intros U A h_AU
  apply set_extensionality_ax; intro x
  intro_iff
  · intro h_x
    _apply_l (union2_prop _ _ _), h_x, h_or
    elim_or h_or, h_A, h_UA
    · apply h_AU; assumption
    · let Q t := t ∉ A
      apply (spec_subs U Q)
      assumption
  · intro h_U
    apply_r (union2_prop _ _ _)
    elim_or (tnd_cl (x ∈ A)), h_A, h_nA
    · left_
    · right
      apply_r (difference_prop _ _ _); intro_and <;> assumption


theorem diff_diff_is_diff_inter2_cl  : (∀ A B C, A \ (B \ C) = (A \ B) ∪ (A ∩ C)) := by
  intros A B C
  let U := (A ∪ B) ∪ C
  have h_a : A ⊆ U := by
    apply subset_trans _ (A ∪ B) _ <;> apply left_union2_subs
  have h_b : B ⊆ U := by
      apply subset_trans _ (A ∪ B) _
      · apply right_union2_subs
      · apply left_union2_subs
  have h_c : C ⊆ U := by apply right_union2_subs
  have h_u₂ : ((U \ B) ∪ C) ⊆ U := by
      apply l_subs_r_subs_uinion2_subs
      · apply difference_subs_left
      · assumption
  calc
  _ = A ∩ (U \ (B \ C)) := by apply difference_inter_prop; apply subset_trans _ (A ∪ B) _ <;> apply left_union2_subs
  _ = A ∩ (U \ (B ∩ (U \ C))) := by rw [difference_inter_prop U B C h_b]
  _ = A ∩ (U \ ((U \ (U \ B)) ∩ (U \ C))) := by rw [compl_compl_cl U B h_b]
  _ = A ∩ (U \ (U \ ((U \ B) ∪ C))) := by rw [← demorgan_union U (U \ B) C]
  _ = A ∩ ((U \ B) ∪ C) := by rw [compl_compl_cl U ((U \ B) ∪ C) h_u₂]
  _  = (A ∩ (U \ B)) ∪ (A ∩ C) := by apply inter_union_distrib
  _ = _ := by rw [← difference_inter_prop U A B h_a]




theorem sym_diff_eq : ∀ A B, A △ B = (A ∪ B) \ (A ∩ B) := by
  intros A B
  apply set_extensionality_ax; intro x;
  calc
    _ ↔ (x ∈ A ⊕ x ∈ B) := by apply sym_diff_prop
    _ ↔ (x ∈ A ∨ x ∈ B) ∧ (¬ (x ∈ A ∧ x ∈ B)) := by apply xor_equiv_def
    _ ↔ (x ∈ A ∪ B) ∧ _ := by apply conj_congr_r; apply iff_symm; apply union2_prop
    _ ↔ _ ∧ (x ∉ (A ∩ B)) := by apply conj_congr_l; apply neg_congr; apply iff_symm; apply inter2_prop
    _ ↔ _ := by apply iff_symm; apply difference_prop


theorem mon_union2_l : ∀ A B C, (A ⊆ B) → (A ∪ C) ⊆ (B ∪ C) := by
  intro A B C h_AB
  intro_in_ t, h_t
  apply_r (union2_prop _ _ _)
  _apply_l (union2_prop _ _ _), h_t, h
  elim_or h, h_A, h_C
  · left; apply h_AB; assumption
  · right_

theorem mon_union2_r : ∀ A B C, (A ⊆ B) → (C ∪ A) ⊆ (C ∪ B) := by
  intro A B C h_AB
  conv =>
    lhs
    rewrite [union2_comm]
  conv =>
    rhs
    rewrite [union2_comm]
  apply mon_union2_l <;> assumption


theorem mon_inter2_l : ∀ A B C, (A ⊆ B) → (A ∩ C) ⊆ (B ∩ C) := by
  intro A B C h_AB
  intro_in_ t, h_t
  apply_r (inter2_prop _ _ _)
  _apply_l (inter2_prop _ _ _), h_t, h
  elim_and h, h_A, h_C
  intro_and
  · apply h_AB; assumption
  · assumption

theorem mon_inter2_r : ∀ A B C, (A ⊆ B) → (C ∩ A) ⊆ (C ∩ B) := by
  intro A B C h_AB
  conv =>
    lhs
    rewrite [inter2_comm]
  conv =>
    rhs
    rewrite [inter2_comm]
  apply mon_inter2_l <;> assumption


theorem mon_diff_l : ∀ A B C, (A ⊆ B) → (A \ C) ⊆ (B \ C) := by
  intro A B C h_AB
  intro_in_ t, h_t
  apply_r (difference_prop _ _ _)
  _apply_l (difference_prop _ _ _), h_t, h
  elim_and h, h_A, h_nC
  intro_and
  · apply h_AB; assumption
  · assumption

theorem anti_mon_diff_r : ∀ A B C, (A ⊆ B) → (C \ B) ⊆ (C \ A) := by
  intro A B C h_AB
  intro_in_ t, h_t
  apply_r (difference_prop _ _ _)
  _apply_l (difference_prop _ _ _), h_t, h
  elim_and h, h_C, h_nB
  intro_and
  · assumption
  · intro_neg h_A
    elim_neg h_nB
    apply h_AB; assumption
