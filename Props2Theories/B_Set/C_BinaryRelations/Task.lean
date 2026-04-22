import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.SetSynt

-- Ordered Pair Definition And Properties
noncomputable def ord_pr_set (a b : Set) := {{a}, {a, b}}
notation (priority := high) "(" a₁ ", " a₂ ")" => ord_pr_set a₁ a₂

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


-- Cartesian Product Definition And Its Properties
theorem ord_pr_in_boolbool : ∀ A B, ∀ a ∈ A, ∀ b ∈ B, (a, b) ∈ 𝒫 (𝒫 (A ∪ B)) := sorry
noncomputable def cart_prod (A : Set) (B : Set) : Set := {z ∈ 𝒫 (𝒫 (A ∪ B)) | ∃ x ∈ A, ∃ y ∈ B, z = (x, y)}
notation:max A:1024 " × " B:1024 => cart_prod A B


theorem cart_prod_prop : ∀ A B pr, pr ∈ (A × B) ↔ (∃ x ∈ A, ∃ y ∈ B, pr = (x, y)) := sorry
theorem cart_prod_pr_prop : ∀ A B a b, (a, b) ∈ (A × B) ↔ (a ∈ A ∧ b ∈ B) := sorry

theorem cart_pi1_in : ∀ A B pr, pr ∈ A × B → π₁ pr ∈ A := sorry
theorem cart_pi2_in : ∀ A B pr, pr ∈ A × B → π₂ pr ∈ B := sorry
theorem cart_pr_pi12 : ∀ A B pr, pr ∈ A × B → pr = (π₁ pr, π₂ pr) := sorry
theorem eq_pi_eq_pr : ∀ A B, ∀ pr₁ pr₂ ∈ A × B, (π₁ pr₁ = π₁ pr₂) → (π₂ pr₁ = π₂ pr₂) → pr₁ = pr₂ := sorry

theorem cart_prod_mon : ∀ A B C D, A ⊆ C → B ⊆ D → (A × B) ⊆ C × D := sorry
