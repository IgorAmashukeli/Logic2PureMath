import Props2Theories.A_Logic.A_Props.Task
import Props2Theories.B_Set.A_Constructions.Task

-- Union Of Two Sets
noncomputable def union2 (A B : Set) := ⋃ {A, B}
notation:max A:1024 " ∪ " B:1024 => union2 A B

-- Intersection Of Two Sets
noncomputable def inter2 (A B : Set) := {x ∈ A | x ∈ B}
notation:max A:1024 " ∩ " B:1024 => inter2 A B

-- Difference Of Two Sets
noncomputable def difference (A B : Set) := {x ∈ A | x ∉ B}
notation:max A:1024 " \\ " B:1024 => difference A B

-- Symmetric Difference Of Two Sets
noncomputable def symmetric_difference (A B : Set) := (A \ B) ∪ (B \ A)
notation:max A:1024 " △ " B:1024 => symmetric_difference A B

-- Simple Rules for Above Operations
theorem union2_prop : (∀ A B x, x ∈ A ∪ B ↔ x ∈ A ∨ x ∈ B) := sorry
theorem inter2_prop : (∀ A B x, x ∈ A ∩ B ↔ x ∈ A ∧ x ∈ B) := sorry
theorem difference_prop : (∀ A B x, x ∈ A \ B ↔ x ∈ A ∧ x ∉ B) := sorry
theorem sym_diff_prop : ∀ A B x, x ∈ A △ B ↔ (x ∈ A ⊕ x ∈ B) := sorry

-- Properties Related To Subsets
theorem left_union2_subs : ∀ A B, (A ⊆ A ∪ B) := sorry
theorem right_union2_subs : ∀ A B, (B ⊆ A ∪ B) := sorry
theorem inter2_subs_left : ∀ A B, (A ∩ B ⊆ A) := sorry
theorem inter2_subs_right : ∀ A B, (A ∩ B ⊆ B) := sorry
theorem difference_subs_left : ∀ A B, (A \ B ⊆ A) := sorry
theorem subs_l_subs_r_subs_inter2 : ∀ A B X, (X ⊆ A) → (X ⊆ B) → (X ⊆ (A ∩ B)) := sorry
theorem l_subs_r_subs_uinion2_subs : ∀ A B X, (A ⊆ X) → (B ⊆ X) → ((A ∪ B) ⊆ X) := sorry
theorem subs_is_eq_inter2 : ∀ A B, (A ⊆ B ↔ A ∩ B = A) := sorry
theorem subs_is_eq_uinion2 : ∀ A B, (A ⊆ B ↔ A ∪ B = B) := sorry

-- Idempotent Properties
theorem union2_idepm : (∀ A, A ∪ A = A) := sorry
theorem inter2_idemp : (∀ A, A ∩ A = A) := sorry

-- Self Difference And Self Symmetric Difference Properties
theorem differ_idemp_emp : ∀ A, A \ A = ∅ := sorry
theorem symm_differ_idemp_emp : ∀ A, A △ A = ∅ := sorry

-- Commutativity Properties
theorem union2_comm : (∀ A B, A ∪ B = B ∪ A) := sorry
theorem inter2_comm : (∀ A B, A ∩ B = B ∩ A) := sorry
theorem symm_diff_comm : ∀ A B, A △ B = B △ A := sorry

-- Associativity Properties
theorem union2_assoc : (∀ A B C, (A ∪ B) ∪ C = A ∪ (B ∪ C)) := sorry
theorem inter2_assoc : (∀ A B C, (A ∩ B) ∩ C = A ∩ (B ∩ C)) := sorry
theorem symm_differ_assoc_cl : ∀ A B C, ((A △ B) △ C) = (A △ (B △ C)) := sorry

-- Absorption Properties
theorem inter2_union2_absorb : (∀ A B, A ∩ (A ∪ B) = A) := sorry
theorem union_inter_absorb : (∀ A B, A ∪ (A ∩ B) = A) := sorry

-- Symmetric Difference Similiar To Absorption Property
theorem symm_differ_absorb : ∀ A B, (A △ B) △ A = B := sorry

-- Distributivity Properties
theorem inter_union_distrib : (∀ A B C, A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C)) := sorry
theorem union_inter_distrib : (∀ A B C, A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C)) := sorry

-- Complement Properties
theorem compl_compl_cl : ∀ U A, (A ⊆ U) → (U \ (U \ A)) = A := sorry
theorem demorgan_inter_cl : ∀ U A B, (U \ (A ∩ B) = (U \ A) ∪ (U \ B)) := sorry
theorem demorgan_union: ∀ U A B, (U \ (A ∪ B) = (U \ A) ∩ (U \ B)) := sorry
theorem difference_inter_prop : ∀ U A B, (A ⊆ U) → (A \ B = A ∩ (U \ B)) := sorry

-- Constant (∅ and some Enclosing Set U) properties
theorem inter2_empty : (∀ A, A ∩ ∅ = ∅) := sorry
theorem union2_empty : (∀ A, A ∪ ∅ = A) := sorry
theorem differ_empty_l : ∀ A, A \ ∅ = A := sorry
theorem differ_empty_r : ∀ A, ∅ \ A = ∅ := sorry
theorem symm_differ_empty : ∀ A, A △ ∅ = A := sorry
theorem inter2_universum : ∀ U A, (A ⊆ U) → A ∩ U = A := sorry
theorem union2_universum : ∀ U A, (A ⊆ U) → A ∪ U = U := sorry
theorem symm_differ_universum : ∀ A U, (A ⊆ U) → (A △ U) = U \ A := sorry
theorem inter2_to_empty: ∀ U A, (A ∩ (U \ A) = ∅) := sorry
theorem union2_to_universum_cl : ∀ U A, (A ⊆ U) → (A ∪ (U \ A) = U) := sorry

-- Double Difference Property
theorem diff_diff_is_diff_inter2_cl  : (∀ A B C, A \ (B \ C) = (A \ B) ∪ (A ∩ C)) := sorry

-- Set Equal To Symmetric Difference
theorem sym_diff_eq : ∀ A B, A △ B = (A ∪ B) \ (A ∩ B) := sorry

-- Monotonic and Anti-Monotonic Properties
theorem mon_union2_l : ∀ A B C, (A ⊆ B) → (A ∪ C) ⊆ (B ∪ C) := sorry
theorem mon_union2_r : ∀ A B C, (A ⊆ B) → (C ∪ A) ⊆ (C ∪ B) := sorry
theorem mon_inter2_l : ∀ A B C, (A ⊆ B) → (A ∩ C) ⊆ (B ∩ C) := sorry
theorem mon_inter2_r : ∀ A B C, (A ⊆ B) → (C ∩ A) ⊆ (C ∩ B) := sorry
theorem mon_diff_l : ∀ A B C, (A ⊆ B) → (A \ C) ⊆ (B \ C) := sorry
theorem anti_mon_diff_r : ∀ A B C, (A ⊆ B) → (C \ B) ⊆ (C \ A) := sorry
