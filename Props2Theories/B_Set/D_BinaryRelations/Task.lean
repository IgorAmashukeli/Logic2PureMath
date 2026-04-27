import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.SetSynt
import Props2Theories.B_Set.C_SetSumProduct.TupleSynt

-- Binary Relation Definitions
noncomputable def binary_relation (R : Set) : Prop := ∀ z ∈ R, ∃ a b, z = (a, b)
noncomputable def binary_relation_between (R A B : Set) : Prop := R ⊆ A × B
noncomputable def binary_relation_on (R A : Set) : Prop := R ⊆ A × A

notation:max " BinRel " R:1024 => binary_relation R
notation:max R:1024 " BinRelOn " A:1024 => binary_relation_on R A
notation:max R:1024 " BinRelBtw " A:1024 " AND " B:1024 => binary_relation_between R A B
notation:max "(" x:1024 " . " R:1024 " . " y:1024 ")" => (x, y) ∈ R

theorem bin_rel_pr_el (P : Set → Prop) : ∀ R, (BinRel R) → (∀ x y, (x . R . y) → P (x, y)) → (∀ t ∈ R, P t) := sorry
theorem bin_rel_el_pr (P : Set → Prop) : ∀ R, (BinRel R) → (∀ t ∈ R, P t) → (∀ x y, (x . R . y) → P (x, y)) := sorry
theorem bin_rel_pr_subs : ∀ R S, (BinRel R) → (∀ x y, (x . R . y) → (x . S . y)) →  R ⊆ S := sorry
theorem bin_rel_subs_pr : ∀ R S, (BinRel R) → (R ⊆ S) → (∀ x y, (x . R . y) → (x . S . y)) := sorry
theorem bin_rel_pr_eq : ∀ R S, (BinRel R) → (BinRel S) → (∀ x y, (x . R . y) ↔ (x . S . y)) → R = S := sorry
theorem bin_rel_in_un_un: ∀ R x y, (x . R . y) → (x ∈ ⋃ ⋃ R ∧ y ∈ ⋃ ⋃ R) := sorry


-- Domain And Range Relation Definition
noncomputable def dom R := {x ∈ ⋃ (⋃ R) | ∃ y, (x . R . y)}
noncomputable def rng R := {y ∈ ⋃ (⋃ R) | ∃ x, (x . R . y)}

theorem dom_prop : ∀ R x, x ∈ dom R ↔ ∃ y, (x . R . y) := sorry
theorem rng_prop : ∀ R y, y ∈ rng R ↔ ∃ x, (x . R . y) := sorry

theorem bin_rel_elem_dom : ∀ R x y, (BinRel R) → (x . R . y) → x ∈ dom R := sorry
theorem bin_rel_elem_rng : ∀ R x y, (BinRel R) → (x . R . y) → y ∈ rng R := sorry

theorem dom_rng_rel_unuin2: ∀ R, (BinRel R) → (dom R) ∪ (rng R) = ⋃ ⋃ R := sorry


-- Binary Relations -  Equivalence of Definitions
theorem bin_rel_is_btw_dmrng : ∀ R, (BinRel R) → (R BinRelBtw (dom R) AND (rng R)) := sorry
theorem bin_rel_btw_is_bin_rel : ∀ R A B, (R BinRelBtw A AND B) → (BinRel R):= sorry
theorem bin_rel_btw_dom : ∀ R A B, (R BinRelBtw A AND B) → dom R ⊆ A := sorry
theorem bin_rel_btw_rng : ∀ R A B, (R BinRelBtw A AND B) → rng R ⊆ B := sorry

noncomputable def compl (R A B) := (A × B) \ R


-- Binary Relations With Set Operations
theorem emp_bin_rel : BinRel ∅ := sorry
theorem bin_rel_subs : ∀ P Q, (BinRel Q) → (P ⊆ Q) → BinRel P := sorry
theorem bin_rel_union2 : ∀ P Q, BinRel P → BinRel Q → BinRel (P ∪ Q) := sorry
theorem bin_rel_inter2 : ∀ P Q, BinRel P → BinRel (P ∩ Q) := sorry
theorem bin_rel_diff : ∀ P Q, BinRel P → BinRel (P \ Q) := sorry
theorem bin_rel_sym_diff : ∀ P Q, BinRel P → BinRel Q → BinRel (P △ Q) := sorry
theorem bin_rel_disj_union2 : ∀ A B, BinRel (A ⊔ B) := sorry
theorem bin_rel_cart : ∀ A B, BinRel (A × B) := sorry
theorem bin_rel_compl : ∀ R A B, BinRel (compl R A B) := sorry
theorem bin_rel_union : ∀ S, (∀ R ∈ S, (BinRel R)) → BinRel (⋃ S) := sorry
theorem bin_rel_inter_uni : ∀ S, (∀ R ∈ S, (BinRel R)) → BinRel (⋂ S) := sorry
theorem bin_rel_inter_exi : ∀ S, (∃ R ∈ S, (BinRel R)) → BinRel (⋂ S) := sorry

-- Binary Relations Btw With Set Operations

theorem emp_bin_rel_btw : ∀ A B, (∅ BinRelBtw A AND B) := sorry
theorem bin_rel_btw_subs : ∀ P Q A B, (Q BinRelBtw A AND B) → (P ⊆ Q) → (P BinRelBtw A AND B) := sorry
theorem bin_rel_btw_mon_l : ∀ R A B C, (R BinRelBtw A AND B) → A ⊆ C → (R BinRelBtw C AND B) := sorry
theorem bin_rel_btw_mon_r : ∀ R A B C, (R BinRelBtw A AND B) → B ⊆ C → (R BinRelBtw A AND C) := sorry
theorem bin_rel_btw_union2 : ∀ P Q A B C D, (P BinRelBtw A AND B) → (Q BinRelBtw C AND D) → ((P ∪ Q) BinRelBtw (A ∪ C) AND (B ∪ D)) := sorry
theorem bin_rel_btw_union2_eq : ∀ P Q A B, (P BinRelBtw A AND B) → (Q BinRelBtw A AND B) → ((P ∪ Q) BinRelBtw A AND B) := sorry
theorem bin_rel_btw_inter2 : ∀ P Q A B C D, (P BinRelBtw A AND B) → (Q BinRelBtw C AND D) → ((P ∩ Q) BinRelBtw (A ∩ C) AND (B ∩ D)) := sorry
theorem bin_rel_btw_inter2_eq : ∀ P Q A B, (P BinRelBtw A AND B) → ((P ∩ Q) BinRelBtw A AND B) := sorry
theorem bin_rel_btw_diff_eq : ∀ P Q A B, (P BinRelBtw A AND B) → ((P \ Q) BinRelBtw A AND B) := sorry
theorem bin_rel_btw_sym_diff_eq : ∀ P Q A B, (P BinRelBtw A AND B) → (Q BinRelBtw A AND B) → ((P △ Q) BinRelBtw A AND B) := sorry
theorem bin_rel_btw_dij_union2 : ∀ A B, ((A ⊔ B) BinRelBtw (A ∪ B) AND {∅, {∅}}) := sorry
theorem bin_rel_btw_cart : ∀ A B, ((A × B) BinRelBtw A AND B) := sorry
theorem bin_rel_btw_compl : ∀ R A B, (compl R A B) BinRelBtw A AND B := sorry
theorem bin_rel_btw_union : ∀ S A B, (∀ R ∈ S, ∃ a ∈ A, ∃ b ∈ B, R BinRelBtw a AND b) → (⋃ S) BinRelBtw (⋃ A) AND (⋃ B) := sorry
theorem bin_rel_btw_union_eq : ∀ S A B, (∀ R ∈ S, (R BinRelBtw A AND B)) → ((⋃ S) BinRelBtw A AND B) := sorry
theorem bin_rel_btw_inter_uni : ∀ S A B, (∀ R ∈ S, ∃ a ∈ A, ∃ b ∈ B, R BinRelBtw a AND b) → (⋂ S) BinRelBtw (⋃ A) AND (⋃ B) := sorry
theorem bin_rel_btw_inter_uni_eq : ∀ S A B, (∀ R ∈ S, (R BinRelBtw A AND B)) → ((⋂ S) BinRelBtw A AND B) := sorry
theorem bin_rel_btw_inter_exi : ∀ S A B, (∃ R ∈ S, ∀ a ∈ A, ∀ b ∈ B, R BinRelBtw a AND b) → (⋂ S) BinRelBtw (⋂ A) AND (⋂ B) := sorry
theorem bin_rel_btw_inter_exi_eq : ∀ S A B, (∃ R ∈ S, R BinRelBtw A AND B) → ((⋂ S) BinRelBtw A AND B) := sorry


-- dom and rng with Set Operations
theorem dom_emp : dom ∅ = ∅ := sorry
theorem rng_emp : rng ∅ = ∅ := sorry
theorem dom_nemp : ∀ P, (is_nempty P) ↔ (is_nempty (dom P)) := sorry
theorem rng_nemp : ∀ P, (BinRel P) → ((is_nempty P) ↔ (is_nempty (rng P))) := sorry
theorem dom_subs : ∀ P Q, (P ⊆ Q) → (dom P) ⊆ (dom Q) := sorry
theorem rng_subs : ∀ P Q, (P ⊆ Q) → (rng P) ⊆ (rng Q) := sorry
theorem dom_union2 : ∀ P Q, (BinRel P) → (BinRel Q) → dom (P ∪ Q) = (dom P) ∪ (dom Q) := sorry
theorem rng_union2 : ∀ P Q, (BinRel P) → (BinRel Q) → rng (P ∪ Q) = (rng P) ∪ (rng Q) := sorry
theorem dom_inter2 : ∀ P Q, dom (P ∩ Q) ⊆ ((dom P) ∩ (dom Q)) := sorry
theorem rng_inter2 : ∀ P Q, rng (P ∩ Q) ⊆ ((rng P) ∩ (rng Q)) := sorry
theorem dom_diff : ∀ P Q, ((dom P) \ (dom Q)) ⊆ (dom (P \ Q)) := sorry
theorem rng_diff : ∀ P Q, ((rng P) \ (rng Q)) ⊆ (rng (P \ Q)) := sorry
theorem dom_sym_diff : ∀ P Q, (BinRel P) → BinRel Q → (dom P) △ (dom Q) ⊆ (dom (P △ Q)) := sorry
theorem rng_sym_diff : ∀ P Q, (BinRel P) → BinRel Q → (rng P) △ (rng Q) ⊆ (rng (P △ Q)) := sorry
theorem dom_disj_union2 : ∀ A B, dom (A ⊔ B) = A ∪ B := sorry
theorem rng_disj_union2 : ∀ A B, rng (A ⊔ B) ⊆ {∅, {∅}} := sorry
theorem dom_cart : ∀ A B, (is_nempty B) → dom (A × B) = A := sorry
theorem rng_cart : ∀ A B, (is_nempty A) → rng (A × B) = B := sorry
theorem dom_compl_cl : ∀ R A B, (is_nempty B) → (R BinRelBtw A AND B)
→ A \ (dom R) ⊆ (dom (compl R A B)) := sorry
theorem rng_compl_cl : ∀ R A B, (is_nempty A) → (R BinRelBtw A AND B)
→ A \ (rng R) ⊆ (rng (compl R A B)) := sorry


-- id Binary Relation Definition And Properties
noncomputable def id_ A := {t ∈ (A × A) | ∃ x, t = (x, x)}


theorem id_bin_rel : ∀ A, BinRel (id_ A) := sorry
theorem id_bin_rel_on : ∀ A, (id_ A) BinRelOn A := sorry
theorem id_prop : ∀ A, ∀ t, (t ∈ id_ A) ↔ ∃ x ∈ A, t = (x, x) := sorry
theorem id_pr_prop : ∀ A, ∀ x, (x . (id_ A) . x) ↔ x ∈ A := sorry
theorem in_id : ∀ A, ∀ x ∈ A, (x . (id_ A) . x) := sorry
theorem id_in_l : ∀ A, ∀ x y, (x . (id_ A) . y) → (x ∈ A) := sorry
theorem id_in_r : ∀ A, ∀ x y, (x . (id_ A) . y) → (y ∈ A) := sorry
theorem id_then_eq : ∀ A, ∀ x y, (x . (id_ A) . y) → x = y := sorry
