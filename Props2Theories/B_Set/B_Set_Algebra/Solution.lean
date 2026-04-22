import Props2Theories.TacticNames
import Props2Theories.Axioms
import Props2Theories.B_Set.A_Constructions.Task

noncomputable def union_2sets (A B : Set) := ⋃ {A, B}
notation:max A:1024 " ∪ " B:1024 => union_2sets A B
noncomputable def intersect_2sets (A B : Set) := {x ∈ A | x ∈ B}
notation:max A:1024 " ∩ " B:1024 => intersect_2sets A B
noncomputable def difference (A B : Set) := {x ∈ A | x ∉ B}
notation:max A:1024 " \\ " B:1024 => difference A B
noncomputable def symmetric_difference (A B : Set) := (A \ B) ∪ (B \ A)
notation:max A:1024 "△" B:1024 => symmetric_difference A B


theorem union2_sets_prop : (∀ A B x, x ∈ A ∪ B ↔ x ∈ A ∨ x ∈ B) := by
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

theorem intersect_2sets_prop : (∀ A B x, x ∈ A ∩ B ↔ x ∈ A ∧ x ∈ B) := by
  intro A B x
