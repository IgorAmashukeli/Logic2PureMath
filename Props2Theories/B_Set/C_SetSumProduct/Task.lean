import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.SetSynt

-- Ordered Pair Definition And Properties
noncomputable def ord_pr_set (a b : Set) := {{a}, {a, b}}
notation (priority := high) "(" a ", " b ")" => ord_pr_set a b

theorem ord_pr_prop : ∀ a b c d, a = c ∧ b = d ↔ (a, b) = (c, d) := sorry
theorem int_ord_pr : ∀ a b, ⋂ (a, b) = {a} := sorry
theorem union_pair_is_all_coords : ∀ a b, ⋃ (a, b) = {a, b} := sorry
theorem coordinates_snd_corr_lemma : ∀ a b, {y ∈ ⋃ (a, b) | ∃ x, (a, b) = (x, y)} = {b} := sorry

-- Pair Projectors Definitions And Properties
noncomputable def fst_coor (pr : Set) : Set := ⋃ (⋂ pr)
noncomputable def snd_coor (pr : Set) : Set := ⋃ ({y ∈ ⋃ pr | ∃ x, pr = (x, y)})
notation:max "π₁ " pr:1024 => fst_coor pr
notation:max "π₂ " pr:1024 => snd_coor pr

theorem pi1_left : ∀ a b, π₁ (a, b) = a := sorry
theorem pi2_right : ∀ a b, π₂ (a, b) = b := sorry


-- Cartesian Product Of Two Sets Definition And Properties
theorem ord_pr_in_boolbool : ∀ A B, ∀ a ∈ A, ∀ b ∈ B, (a, b) ∈ 𝒫 (𝒫 (A ∪ B)) := sorry
noncomputable def cart_prod (A : Set) (B : Set) : Set := {z ∈ 𝒫 (𝒫 (A ∪ B)) | ∃ x ∈ A, ∃ y ∈ B, z = (x, y)}
notation:max A:1024 " × " B:1024 => cart_prod A B

theorem cart_prod_prop : ∀ A B pr, pr ∈ (A × B) ↔ (∃ x ∈ A, ∃ y ∈ B, pr = (x, y)) := sorry
theorem cart_prod_pr_prop : ∀ A B a b, (a, b) ∈ (A × B) ↔ (a ∈ A ∧ b ∈ B) := sorry

theorem cart_pi1_in : ∀ A B pr, pr ∈ A × B → π₁ pr ∈ A := sorry
theorem cart_pi2_in : ∀ A B pr, pr ∈ A × B → π₂ pr ∈ B := sorry
theorem cart_pr_pi12 : ∀ A B pr, pr ∈ A × B → pr = (π₁ pr, π₂ pr) := sorry
theorem cart_eq_pi_eq_pr : ∀ A B, ∀ pr₁ pr₂ ∈ A × B, (π₁ pr₁ = π₁ pr₂) → (π₂ pr₁ = π₂ pr₂) → pr₁ = pr₂ := sorry

theorem cart_prop_pr_el (P : Set → Prop) : ∀ A B, (∀ x ∈ A, ∀ y ∈ B, P (x, y)) → ∀ t ∈ (A × B), P t := sorry
theorem cart_prop_el_pr (P : Set → Prop) : ∀ A B, (∀ t ∈ (A × B), P t) → ((∀ x ∈ A, ∀ y ∈ B, P (x, y))) := sorry

theorem cart_empty_l : ∀ A, (∅ × A) = ∅ := sorry
theorem cart_empty_r : ∀ A, (A × ∅) = ∅ := sorry
theorem lr_nempty_cart : ∀ A B, (is_nempty A) → (is_nempty B) → (is_nempty (A × B)) := sorry
theorem cart_nemp_eq : ∀ A B C D : Set, (is_nempty A) → (is_nempty B) →
(((A × B) = (C × D)) ↔ ((A = C) ∧ (B = D))) := sorry

theorem cart_prod_mon_l : ∀ A B C, A ⊆ C → (A × B) ⊆ C × B := sorry
theorem cart_prod_mon_r : ∀ A B C, (B ⊆ C) → (A × B) ⊆ (A × C) := sorry
theorem cart_inter2_distrib : ∀ A B C D, (A × B) ∩ (C × D) = (A ∩ C) × (B ∩ D) := sorry
theorem cart_union2_distrib_l : ∀ A B C, (A × (B ∪ C)) = (A × B) ∪ (A × C) := sorry
theorem cart_union2_distrib_r : ∀ A B C, ((A ∪ B) × C) = (A × C) ∪ (B × C) := sorry
theorem cart_diff_distrib_l :  ∀ A B C, (A × (B \ C)) = (A × B) \ (A × C) := sorry
theorem cart_comp_cl : ∀ U V A B, (A ⊆ U) → (B ⊆ V) →
((U × V) \ (A × B)) = (U \ A) × (V \ B) ∪ (U \ A) × B ∪ (A × (V \ B)) := sorry

-- Disjoint Union (Or Sum) of Two Sets Definition And Properties
noncomputable def disj_union2 (A B : Set) := (A × {∅}) ∪ (B × {{∅}})
notation:max A:1024 " ⊔ " B:1024 => disj_union2 A B

theorem disj_union2_prop : ∀ A B pr,
(pr ∈ A ⊔ B) ↔ (∃ x ∈ A, pr = (x, ∅)) ∨ (∃ x ∈ B, pr = (x, {∅})) := sorry
theorem disj_union2_pr_prop : ∀ A B x y,
(x, y) ∈ (A ⊔ B) ↔ (x ∈ A ∧ y = ∅) ∨ (x ∈ B ∧ y = {∅}) := sorry

theorem disj_union2_pi1_in : ∀ A B pr, pr ∈ A ⊔ B → π₁ pr ∈ A ∪ B := sorry
theorem disj_union2_pi2_in : ∀ A B pr, pr ∈ A ⊔ B → π₂ pr ∈ {∅, {∅}} := sorry
theorem disj_union2_pr_pi12 : ∀ A B pr, pr ∈ A ⊔ B → pr = (π₁ pr, π₂ pr) := sorry
theorem disj_union2_eq_pi_eq_pr : ∀ A B, ∀ pr₁ pr₂ ∈ A ⊔ B, (π₁ pr₁ = π₁ pr₂) → (π₂ pr₁ = π₂ pr₂) → pr₁ = pr₂ := sorry


theorem disj_union2_in_left :  ∀ A x, (x ∈ A) → (x, ∅) ∈ (A × {∅}) := sorry
theorem disj_union2_in_right :  ∀ B x, (x ∈ B) → (x, {∅}) ∈ (B × {{∅}}) := sorry

theorem disj_union2_left_in : ∀ A B x, (x ∈ A) → ((x, ∅) ∈ (A ⊔ B)) := sorry
theorem disj_union2_right_in : ∀ A B x, (x ∈ B) → ((x, {∅}) ∈ (A ⊔ B)) := sorry

theorem disj_union2_prop_pr_el (P : Set → Prop) : ∀ A B, (∀ x ∈ A, P (x, ∅)) → (∀ y ∈ B, P (y, {∅})) → ∀ t ∈ (A ⊔ B), P t := sorry
theorem disj_union2_prop_el_pr (P : Set → Prop) : ∀ A B, (∀ t ∈ (A ⊔ B), P t) → ((∀ x ∈ A, P (x, ∅)) ∧ ∀ y ∈ B, P (y, {∅})) := sorry

-- Left And Right Sets From Disjoint Union
noncomputable def disjoint_union2_left (X: Set) := {y ∈ X | (π₂ y) = ∅}
noncomputable def disjoint_union2_right (X : Set) := {y ∈ X | (π₂ y) = {∅}}
notation:max "DUL " dsjun:1024 => disjoint_union2_left dsjun
notation:max "DUR " dsjun:1024 => disjoint_union2_right dsjun

theorem dul_subs : ∀ X, (DUL X) ⊆ X := sorry
theorem dur_subs : ∀ X, (DUR X) ⊆ X := sorry
theorem dulr_inter2 : ∀ X, (DUL X) ∩ (DUR X) = ∅ := sorry

theorem dul_disj_union2 : ∀ A B, (DUL (A ⊔ B)) = (A × {∅}) := sorry
theorem dur_disj_union2 : ∀ A B, (DUR (A ⊔ B)) = (B × {{∅}}) := sorry

theorem dulr_union2 : ∀ A B, (DUL (A ⊔ B)) ∪ (DUR (A ⊔ B)) = (A ⊔ B) := sorry

theorem disj_union2_emp_l : ∀ A, A ⊔ ∅ = A × {∅} := sorry
theorem disj_union2_emp_r : ∀ A, ∅ ⊔ A = A × {{∅}} := sorry

theorem disj_union2_emp_lr : ∅ ⊔ ∅ = ∅ := sorry

theorem disj_union2_nemp_l : ∀ A B, (is_nempty A) → (is_nempty (A ⊔ B)) := sorry
theorem disj_union2_nemp_r : ∀ A B, (is_nempty B) → (is_nempty (A ⊔ B)) := sorry

theorem disj_union2_mon_l : ∀ A B C, (A ⊆ C) → (A ⊔ B) ⊆ (C ⊔ B) := sorry
theorem disj_union2_mon_r : ∀ A B C, (B ⊆ C) → (A ⊔ B) ⊆ (A ⊔ C) := sorry

theorem disj_union2_union2_distrib : ∀ A B C D, (A ⊔ B) ∪ (C ⊔ D) = ((A ∪ C) ⊔ (B ∪ D)) := sorry
theorem disj_union2_inter2_distrib : ∀ A B C D, (A ⊔ B) ∩ (C ⊔ D) = ((A ∩ C) ⊔ (B ∩ D)) := sorry
