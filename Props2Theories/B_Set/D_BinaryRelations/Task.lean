import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.SetSynt
import Props2Theories.B_Set.C_SetSumProduct.TupleSynt

-- Binary Relation Definitions
noncomputable def binary_relation (R : Set) : Prop := ∀ z ∈ R, ∃ a, ∃ b, z = (a, b)
noncomputable def binary_relation_between (R A B : Set) : Prop := R ⊆ A × B
noncomputable def binary_relation_on (R A : Set) : Prop := R ⊆ A × A

notation:max " BinRel " R:1024 => binary_relation R
notation:max R:1024 "BinRelOn " A:1024 => binary_relation_on R A
notation:max R:1024 "BinRelBtw " A:1024 " And " B:1024 => binary_relation_between R A B
notation:max "(" x:1024 " . " R:1024 " . " y:1024 ")" => (x, y) ∈ R


theorem bin_rel_pr_el (P : Set → Prop) : ∀ R, (BinRel R) → (∀ x y, (x . R . y) → P (x, y)) → (∀ t ∈ R, P t) := sorry

theorem bin_rel_in_un_un: ∀ R x y, (x . R . y) → (x ∈ ⋃ ⋃ R ∧ y ∈ ⋃ ⋃ R) := sorry

noncomputable def dom (R : Set) := {x ∈ ⋃ (⋃ R) | ∃ y, (x . R . y)}
noncomputable def rng (R : Set) := {y ∈ ⋃ (⋃ R) | ∃ x, (x . R . y)}

theorem dom_rng_rel_unuin2: ∀ R, (BinRel R) → (dom R) ∪ (rng R) = ⋃ ⋃ R := sorry
