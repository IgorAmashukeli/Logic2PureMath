import Props2Theories.A_Logic.C_Equality.Task
import Props2Theories.A_Logic.B_Quants.Task
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
notation:max "( " x:1024 " . " R:1024 " . " y:102 ")" => (x, y) ∈ R



theorem bin_rel_pr_el (P : Set → Prop) : ∀ R, (BinRel R) → (∀ x y, (x . R . y) → P (x, y)) → (∀ t ∈ R, P t) := by
  intros R h_R h
  intro_in_ t, h_t
  specialize_in_ h_R, t, h_t; elim_exists h_R, a, h_a; elim_exists h_a, b, h_b; clear h_a h_R
  rewrite [h_b] at h_t ⊢; apply h; assumption


theorem bin_rel_el_pr (P : Set → Prop) : ∀ R, (BinRel R) → (∀ t ∈ R, P t) → (∀ x y, (x . R . y) → P (x, y)) := by
  intros R h_r h x y h_xy
  apply h; assumption


theorem bin_rel_pr_subs : ∀ R S, (BinRel R) → (∀ x y, (x . R . y) → (x . S . y)) →  R ⊆ S := by
  intros R S h_R h_pr
  apply bin_rel_pr_el <;> assumption

theorem bin_rel_subs_pr : ∀ R S, (BinRel R) → (R ⊆ S) → (∀ x y, (x . R . y) → (x . S . y)) := by
  intros R S h_R h_RS
  intro x y h_xy
  apply h_RS; assumption

theorem bin_rel_pr_eq : ∀ R S, (BinRel R) → (BinRel S) → (∀ x y, (x . R . y) ↔ (x . S . y)) → R = S := by
  intro R S h_R h_S h_pr
  apply set_extensionality_ax; intro t; intro_iff
  · apply bin_rel_pr_el
    · assumption
    · intros x y h_xy
      apply_l (h_pr x y); assumption
  · apply bin_rel_pr_el
    · assumption
    · intros x y h_xy
      apply_r (h_pr x y); assumption



theorem bin_rel_in_un_un: ∀ R x y, (x . R . y) → (x ∈ ⋃ ⋃ R ∧ y ∈ ⋃ ⋃ R) := by
  intro R x y h_xy
  intro_and
  · apply_r (union_set_is_union _ _)
    intro_exists_in {x, y}
    · apply_r (union_set_is_union _ _)
      intro_exists_in (x, y)
      · assumption
      · apply right_un_pr
    · apply left_un_pr
  · apply_r (union_set_is_union _ _)
    intro_exists_in {x, y}
    · apply_r (union_set_is_union _ _)
      intro_exists_in (x, y)
      · assumption
      · apply right_un_pr
    · apply right_un_pr


-- Domain And Rng Of a Binary Relation
noncomputable def dom (R : Set) := {x ∈ ⋃ (⋃ R) | ∃ y, (x . R . y)}
noncomputable def rng (R : Set) := {y ∈ ⋃ (⋃ R) | ∃ x, (x . R . y)}


theorem dom_prop : ∀ R x, x ∈ dom R ↔ ∃ y, (x . R . y) := by
  intros R x
  intro_iff
  · intro h_x
    have h := (spec_then_P _ _) x h_x; assumption
  · intro h_x
    apply elem_P_then_spec <;> try assumption
    elim_exists h_x, y, h_y;
    have h := bin_rel_in_un_un R x y h_y; elim_and_ h


theorem rng_prop : ∀ R y, y ∈ rng R ↔ ∃ x, (x . R . y) := by
  intros R y
  intro_iff
  · intro h_y
    have h := (spec_then_P _ _) y h_y; assumption
  · intro h_y
    apply elem_P_then_spec <;> try assumption
    elim_exists h_y, x, h_x;
    have h := bin_rel_in_un_un R x y h_x; elim_and_ h


theorem bin_rel_elem_dom : ∀ R x y, (BinRel R) → (x . R . y) → x ∈ dom R := by
  intros R x y h_R h_xRy
  apply_r (dom_prop _ _)
  intro_exists y; assumption


theorem bin_rel_elem_rng : ∀ R x y, (BinRel R) → (x . R . y) → y ∈ rng R := by
  intros R x y h_R h_xRy
  apply_r (rng_prop _ _)
  intro_exists x; assumption


theorem dom_rng_rel_unuin2: ∀ R, (BinRel R) → (dom R) ∪ (rng R) = ⋃ ⋃ R := by
  intros R h_R
  apply set_extensionality_ax; intro t; intro_iff
  · intro h_t
    _apply_l (union2_prop _ _ _), h_t, h_int; clear h_t; elim_or h_int, h_indom, h_inrng
    · revert h_indom; apply spec_subs
    · revert h_inrng; apply spec_subs
  · intro h_t
    apply_r (union2_prop _ _ _)
    _apply_l (union_set_is_union _ _), h_t, h_ex; elim_exists_in h_ex, T, h_Tin, h_T; clear h_ex
    _apply_l (union_set_is_union _ _), h_Tin, h_ex; elim_exists_in h_ex, D, h_Din, h_D; clear h_Tin h_ex
    specialize_in_ h_R, D, h_Din
    elim_exists h_R, x, h_x; elim_exists h_x, y, h_y; clear h_R h_x;
    rewrite [h_y] at h_D h_Din
    _apply_l (unord_pr_set_is_unord_pr _ _ _), h_D, h_orin; clear h_D
    elim_or h_orin, h_Tx, h_Txy
    · rewrite [h_Tx] at h_T
      _apply_l (singleton_a_elem_is_a _ _), h_T, h_eq
      rewrite [h_eq] at h_t ⊢
      left; apply elem_P_then_spec
      · assumption
      · intro_exists y; assumption
    · rewrite [h_Txy] at h_T
      _apply_l (unord_pr_set_is_unord_pr _ _ _), h_T, h_eq
      elim_or h_eq, h_eqx, h_eqy
      · rewrite [h_eqx] at h_t ⊢
        left; apply elem_P_then_spec
        · assumption
        · intro_exists y; assumption
      · rewrite [h_eqy] at h_t ⊢
        _apply_l (unord_pr_set_is_unord_pr _ _ _), h_T, h_eq
        right; apply elem_P_then_spec
        · assumption
        · intro_exists x; assumption


theorem bin_rel_is_btw_dmrng : ∀ R, (BinRel R) → (R BinRelBtw (dom R) AND (rng R)) := by
  intros R h_R
  intro_in t
  let P t := t ∈ (dom R) × (rng R)
  apply bin_rel_pr_el P R h_R
  intro_in x; intro_in y; intro h_xy;
  apply_r (cart_prod_pr_prop _ _ _ _); intro_and;
  · apply_r (dom_prop _ _)
    intro_exists y; assumption
  · apply_r (rng_prop _ _)
    intro_exists x; assumption

theorem bin_rel_btw_is_bin_rel : ∀ R A B, (R BinRelBtw A AND B) → (BinRel R) := by
  intros R A B h_R
  intros t h_t
  have h_rin := h_R t h_t
  revert h_rin
  apply cart_prop_pr_el
  intro_in_ x, h_x; intro_in_ y, h_y;
  intro_exists x; intro_exists y;
  rfl


theorem bin_rel_btw_dom : ∀ R A B, (R BinRelBtw A AND B) → dom R ⊆ A := by
  intros R A B h_R
  intros x h_x
  _apply_l (dom_prop R x), h_x, h_eq
  elim_exists h_eq, y, h_y; specialize_in_ h_R, (x, y), h_y
  _apply_l (cart_prod_pr_prop _ _ _ _), h_R, h_xA_yB; elim_and_ h_xA_yB


theorem bin_rel_btw_rng : ∀ R A B, (R BinRelBtw A AND B) → rng R ⊆ B := by
  intros R A B h_R
  intros y h_y
  _apply_l (rng_prop R y), h_y, h_eq
  elim_exists h_eq, x, h_x; specialize_in_ h_R, (x, y), h_x
  _apply_l (cart_prod_pr_prop _ _ _ _), h_R, h_xA_yB; elim_and_ h_xA_yB


noncomputable def compl (R A B : Set) : Set := (A × B) \ R


theorem emp_bin_rel : BinRel ∅ := by
  intros t h_t
  elim_f_neg (empty_set_is_empty t)


theorem bin_rel_subs : ∀ P Q, (BinRel Q) → (P ⊆ Q) → BinRel P := by
  intros P Q h_Q h_PQ
  intros t h_t
  specialize_in_ h_PQ, t, h_t
  specialize_in_ h_Q, t, h_PQ
  assumption


theorem bin_rel_union2 : ∀ P Q, BinRel P → BinRel Q → BinRel (P ∪ Q) := by
  intros P Q h_P h_Q
  intros t h_t
  _apply_l (union2_prop _ _ _), h_t, h_tPQ
  elim_or h_tPQ, h_tP, h_tQ; clear h_t
  · specialize_in_ h_P, t, h_tP
    assumption
  · specialize_in_ h_Q, t, h_tQ
    assumption

theorem bin_rel_inter2 : ∀ P Q, BinRel P → BinRel (P ∩ Q) := by
  intros P Q h_P
  intros t h_t
  _apply_l (inter2_prop _ _ _), h_t, h_tPQ; elim_and h_tPQ, h_tP, h_tQ; clear h_t h_tPQ
  specialize_in_ h_P, t, h_tP
  assumption

theorem bin_rel_diff : ∀ P Q, BinRel P → BinRel (P \ Q) := by
  intros P Q h_P
  intros t h_t
  _apply_l (difference_prop _ _ _), h_t, h_tPQ; elim_and h_tPQ, h_tP, h_tQ; clear h_t h_tPQ
  specialize_in_ h_P, t, h_tP
  assumption


theorem bin_rel_sym_diff : ∀ P Q, BinRel P → BinRel Q → BinRel (P △ Q) := by
  intros P Q
  intros t h_t
  rw [sym_diff_eq]
  apply bin_rel_diff
  apply bin_rel_union2 <;> assumption


theorem bin_rel_disj_union2 : ∀ A B, BinRel (A ⊔ B) := by
  intros A B
  intro_in_ pr, h_pr
  _apply_l (disj_union2_prop _ _ _), h_pr, h_ex_or
  elim_or h_ex_or, h_ex, h_ex
  · elim_exists_in h_ex, x, h_xin, h_x
    intro_exists x; intro_exists ∅; assumption
  · elim_exists_in h_ex, y, h_yin, h_y
    intro_exists y; intro_exists {∅}; assumption



theorem bin_rel_cart : ∀ A B, BinRel (A × B) := by
  intros A B
  intro_in_ t, h_t
  revert h_t
  apply cart_prop_pr_el; intro_in_ x, h_x; intro_in_ y, h_y;
  intro_exists x; intro_exists y; rfl

theorem bin_rel_compl : ∀ R A B, BinRel (compl R A B) := by
  intros R A B
  apply bin_rel_diff
  apply bin_rel_cart


theorem bin_rel_union : ∀ S, (∀ R ∈ S, (BinRel R)) → BinRel (⋃ S) := by
  intros S h_RS
  intro_in_ t, h_t
  _apply_l (union_set_is_union _ _), h_t, h_ex; clear h_t
  elim_exists_in h_ex, M, h_Min, h_M; clear h_ex
  specialize_in_ h_RS, M, h_Min
  specialize_in_ h_RS, t, h_M
  assumption


theorem bin_rel_inter : ∀ S, (∀ R ∈ S, (BinRel R)) → BinRel (⋂ S) := by
  intros S h_RS
  have h := bin_rel_union S h_RS
  have h₁ := bin_rel_subs (⋂ S) (⋃ S) h (interset_sub_union S)
  assumption


theorem bin_rel_inter_exi : ∀ S, (∃ R ∈ S, (BinRel R)) → BinRel (⋂ S) := by
  intros S h_RS
  elim_exists_in h_RS, R, h_Rin, h_R; clear h_RS
  intro_in_ t, h_t
  have h_ex : is_nempty S := by
    intro_exists R; assumption
  have h := intersection_non_empty S h_ex t
  _apply_l h, h_t, h_all
  specialize_in_ h_all, R, h_Rin
  specialize_in_ h_R, t, h_all; assumption


theorem emp_bin_rel_btw : ∀ A B, (∅ BinRelBtw A AND B) := by
  intros A B
  apply empty_subset_any

theorem bin_rel_btw_subs : ∀ P Q A B, (Q BinRelBtw A AND B) → (P ⊆ Q) → (P BinRelBtw A AND B) := by
  intros P Q A B
  intro h_AB
  intro h_PQ
  apply subset_trans _ Q _ <;> assumption

theorem bin_rel_btw_mon_l : ∀ R A B C, (R BinRelBtw A AND B) → A ⊆ C → (R BinRelBtw C AND B) := by
  intros R A B C h_AB h_AC
  apply subset_trans _ (A × B) _
  · assumption
  · apply cart_prod_mon_l; assumption

theorem bin_rel_btw_mon_r : ∀ R A B C, (R BinRelBtw A AND B) → B ⊆ C → (R BinRelBtw A AND C) := by
  intros R A B C h_AB h_BC
  apply subset_trans _ (A × B) _
  · assumption
  · apply cart_prod_mon_r; assumption

theorem bin_rel_btw_union2 : ∀ P Q A B C D, (P BinRelBtw A AND B) → (Q BinRelBtw C AND D) → ((P ∪ Q) BinRelBtw (A ∪ C) AND (B ∪ D)) := by
  intros P Q A B C D h_PAB h_QCD
  have h_P := bin_rel_btw_is_bin_rel P _ _ h_PAB
  have h_Q := bin_rel_btw_is_bin_rel Q _ _ h_QCD
  have h := bin_rel_union2 P Q h_P h_Q
  apply bin_rel_pr_el <;> try assumption
  intros x y; intro h_xy
  apply_r (cart_prod_pr_prop _ _ _ _)
  _apply_l (union2_prop _ _ _), h_xy, h_orxy;
  elim_or h_orxy, h_xyP, h_xyQ <;> clear h_xy <;> intro_and <;> apply_r (union2_prop _ _ _)
  all_goals (try specialize_in_ h_PAB, (x, y), h_xyP); all_goals (try specialize_in_ h_QCD, (x, y), h_xyQ)
  all_goals (try (_apply_l (cart_prod_pr_prop _ _ _ _), h_PAB, h_and));
  all_goals (try (_apply_l (cart_prod_pr_prop _ _ _ _), h_QCD, h_and));
  all_goals elim_and h_and, h_x_l, h_xr
  all_goals (try left_); all_goals (try right_)

theorem bin_rel_btw_union2_eq : ∀ P Q A B, (P BinRelBtw A AND B) → (Q BinRelBtw A AND B) → ((P ∪ Q) BinRelBtw A AND B) := by
  intros P Q A B h_PAB h_QAB
  have h := bin_rel_btw_union2 P Q A B A B h_PAB h_QAB
  rewrite [union2_idepm A, union2_idepm B] at h; assumption


theorem bin_rel_btw_inter2 : ∀ P Q A B C D, (P BinRelBtw A AND B) → (Q BinRelBtw C AND D) → ((P ∩ Q) BinRelBtw (A ∩ C) AND (B ∩ D)) := by
  intros P Q A B C D h_PAB h_QCD
  have h_P := bin_rel_btw_is_bin_rel P _ _ h_PAB
  have h := bin_rel_inter2 P Q h_P
  apply bin_rel_pr_el <;> try assumption
  intros x y; intro h_xy
  apply_r (cart_prod_pr_prop _ _ _ _)
  _apply_l (inter2_prop _ _ _), h_xy, h_andxy; elim_and h_andxy, h_inP, h_inQ; clear h_xy h_andxy
  intro_and <;> apply_r (inter2_prop _ _ _) <;> intro_and
  <;> specialize_in_ h_PAB, (x, y), h_inP <;> specialize_in_ h_QCD, (x, y), h_inQ
  <;> _apply_l (cart_prod_pr_prop _ _ _ _), h_PAB, h_andAB <;> _apply_l (cart_prod_pr_prop _ _ _ _), h_QCD, h_andCD
  <;> elim_and h_andAB, h_A, h_B <;> elim_and h_andCD, h_C, h_D
  <;> assumption

theorem bin_rel_btw_inter2_eq : ∀ P Q A B, (P BinRelBtw A AND B) → ((P ∩ Q) BinRelBtw A AND B) := by
  intros P Q A B h_PAB t h_t
  apply h_PAB
  apply inter2_subs_left P Q
  assumption


theorem bin_rel_btw_diff : ∀ P Q A B, (P BinRelBtw A AND B) → ((P \ Q) BinRelBtw A AND B) := by
  intros P Q A B h_PAB t h_t
  apply h_PAB
  apply (difference_subs_left P Q)
  assumption


theorem bin_rel_btw_sym_diff_eq : ∀ P Q A B, (P BinRelBtw A AND B) → (Q BinRelBtw A AND B) → ((P △ Q) BinRelBtw A AND B) := by
  intros P Q A B h_PAB h_QAB
  rw [sym_diff_eq]
  apply bin_rel_btw_diff
  apply bin_rel_btw_union2_eq <;> assumption

theorem bin_rel_btw_dij_union2 : ∀ A B, ((A ⊔ B) BinRelBtw (A ∪ B) AND {∅, {∅}}) := by
  intros A B
  intro t
  have h := bin_rel_disj_union2 A B
  apply bin_rel_pr_el
  · assumption
  · intro x y h_xy
    apply_r (cart_prod_pr_prop _ _ _ _); intro_and
    have h₁ := disj_union2_pi1_in A B (x, y) h_xy; rewrite [pi1_left] at h₁; assumption
    have h₂ := disj_union2_pi2_in A B (x, y) h_xy; rewrite [pi2_right] at h₂; assumption


theorem bin_rel_btw_cart : ∀ A B, ((A × B) BinRelBtw A AND B) := by
  intros A B
  apply subset_refl

theorem bin_rel_btw_compl : ∀ R A B, (compl R A B) BinRelBtw A AND B := by
  intros R A B
  apply difference_subs_left

theorem bin_rel_btw_union : ∀ S A B, (∀ R ∈ S, ∃ a ∈ A, ∃ b ∈ B, R BinRelBtw a AND b) → (⋃ S) BinRelBtw (⋃ A) AND (⋃ B) := by
  intros S A B h
  apply bin_rel_pr_el
  · apply bin_rel_union
    intro_in_ R, h_R
    specialize_in_ h, R, h_R
    elim_exists_in h, a, h_ain, h_a; clear h; elim_exists_in h_a, b, h_bin, h_b; clear h_a
    apply bin_rel_btw_is_bin_rel R a b; assumption
  · intros x y h_xy
    apply_r (cart_prod_pr_prop _ _ _ _)
    _apply_l (union_set_is_union _ _), h_xy, h_ex;
    elim_exists_in h_ex, R, h_Rin, h_R; clear h_ex h_xy
    specialize_in_ h, R, h_Rin
    elim_exists_in h, a, h_ain, h_a; clear h; elim_exists_in h_a, b, h_bin, h_b; clear h_a
    specialize_in_ h_b, (x, y), h_R
    _apply_l (cart_prod_pr_prop _ _ _ _), h_b, h_inand; clear h_b; elim_and h_inand, h_ina, h_inb; clear h_inand
    intro_and
    · apply_r (union_set_is_union _ _); intro_exists_in a <;> assumption
    · apply_r (union_set_is_union _ _); intro_exists_in b <;> assumption


theorem bin_rel_btw_union_eq : ∀ S A B, (∀ R ∈ S, (R BinRelBtw A AND B)) → ((⋃ S) BinRelBtw A AND B) := by
  intros S A B h
  apply bin_rel_pr_el
  · apply bin_rel_union
    intro_in_ R, h_R
    specialize_in_ h, R, h_R
    apply bin_rel_btw_is_bin_rel R A B; assumption
  · intros x y h_xy
    _apply_l (union_set_is_union _ _), h_xy, h_ex;
    elim_exists_in h_ex, R, h_Rin, h_R; clear h_ex h_xy
    specialize_in_ h, R, h_Rin
    apply h
    assumption


theorem bin_rel_btw_inter_uni : ∀ S A B, (∀ R ∈ S, ∃ a ∈ A, ∃ b ∈ B, R BinRelBtw a AND b) → (⋂ S) BinRelBtw (⋃ A) AND (⋃ B) := by
  intros S A B h
  have h₁ := bin_rel_btw_union S A B h
  have h₂ := bin_rel_btw_subs (⋂ S) (⋃ S) (⋃ A) (⋃ B) h₁
  apply h₂
  apply interset_sub_union


theorem bin_rel_btw_inter_uni_eq : ∀ S A B, (∀ R ∈ S, (R BinRelBtw A AND B)) → ((⋂ S) BinRelBtw A AND B) := by
  intros S A B h
  have h₁ := bin_rel_btw_union_eq S A B h
  have h₂ := bin_rel_btw_subs (⋂ S) (⋃ S) A B h₁
  apply h₂
  apply interset_sub_union


theorem bin_rel_btw_inter_exi : ∀ S A B, (is_nempty A) → (is_nempty B) → (∃ R ∈ S, ∀ a ∈ A, ∀ b ∈ B, R BinRelBtw a AND b) → (⋂ S) BinRelBtw (⋂ A) AND (⋂ B) := by
  intros S A B h_A h_B h
  elim_exists_in h, C, h_inC, hC; clear h
  elim_exists h_A, a, h_a
  elim_exists h_B, b, h_b
  apply bin_rel_pr_el
  · apply bin_rel_inter_exi
    intro_exists C <;> intro_and
    · assumption
    · apply bin_rel_btw_is_bin_rel C a b
      apply hC <;> assumption
  · intro x y h_xy
    apply_r (cart_prod_pr_prop _ _ _ _)
    intro_and
    · apply all_in_exi_interset; assumption; intros R h_R
      have h₁ := interset_all_in S (x, y) h_xy
      specialize_in_ h₁, C, h_inC
      specialize_in_ hC, R, h_R
      specialize_in_ hC, b, h_b
      specialize_in_ hC, (x, y), h₁
      _apply_l (cart_prod_pr_prop _ _ _ _), hC, h_Rb; elim_and h_Rb, h_inR, h_inb; clear h_Rb
      assumption
    · apply all_in_exi_interset; assumption; intros R h_R
      have h₁ := interset_all_in S (x, y) h_xy
      specialize_in_ h₁, C, h_inC
      specialize_in_ hC, a, h_a
      specialize_in_ hC, R, h_R
      specialize_in_ hC, (x, y), h₁
      _apply_l (cart_prod_pr_prop _ _ _ _), hC, h_aR; elim_and h_aR, h_ina, h_inR; clear h_aR
      assumption


theorem bin_rel_btw_inter_exi_eq : ∀ S A B, (∃ R ∈ S, R BinRelBtw A AND B) → ((⋂ S) BinRelBtw A AND B) := by
  intros S A B h
  elim_exists_in h, R, h_Rin, h_R; clear h
  have h₁ := inter_subset_elem S
  specialize_in_ h₁, R, h_Rin
  apply bin_rel_btw_subs (⋂ S) R <;> assumption


theorem dom_emp : dom ∅ = ∅ := by
  apply subset_empty_is_empty
  intro t h_t
  _apply_l (dom_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_t h_ex
  elim_f_neg (empty_set_is_empty (t, y))


theorem rng_emp : rng ∅ = ∅ := by
  apply subset_empty_is_empty
  intro t h_t
  _apply_l (rng_prop _ _), h_t, h_ex; elim_exists h_ex, x, h_x; clear h_t h_ex
  elim_f_neg (empty_set_is_empty (x, t))


theorem dom_nemp : ∀ P, (BinRel P) → ((is_nempty P) ↔ (is_nempty (dom P))) := by
  intros P h_P
  intro_iff
  · intro h_Pemp
    elim_exists h_Pemp, t, h_t; clear h_Pemp;
    have h := h_P t h_t; elim_exists h, a, h_a; clear h; elim_exists h_a, b, h_b; rewrite [h_b] at h_t
    intro_exists a; apply bin_rel_elem_dom P a b <;> assumption
  · intro h_dPemp
    elim_exists h_dPemp, t, h_t; clear h_dPemp;
    _apply_l (dom_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y;
    intro_exists (t, y); assumption


theorem rng_nemp : ∀ P, (BinRel P) → ((is_nempty P) ↔ (is_nempty (rng P))) := by
  intros P h_P
  intro_iff
  · intro h_Pemp
    elim_exists h_Pemp, t, h_t; clear h_Pemp;
    have h := h_P t h_t; elim_exists h, a, h_a; clear h; elim_exists h_a, b, h_b; rewrite [h_b] at h_t
    intro_exists b; apply bin_rel_elem_rng P a b <;> assumption
  · intro h_dPemp
    elim_exists h_dPemp, t, h_t; clear h_dPemp;
    _apply_l (rng_prop _ _), h_t, h_ex; elim_exists h_ex, x, h_x;
    intro_exists (x, t); assumption



theorem dom_subs : ∀ P Q, (P ⊆ Q) → (dom P) ⊆ (dom Q) := by
  intros P Q h_PQ
  intros t h_t
  _apply_l (dom_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_t h_ex
  apply_r (dom_prop _ _); intro_exists y; apply h_PQ; assumption


theorem rng_subs : ∀ P Q, (P ⊆ Q) → (rng P) ⊆ (rng Q) := by
  intros P Q h_PQ
  intros t h_t
  _apply_l (rng_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_t h_ex
  apply_r (rng_prop _ _); intro_exists y; apply h_PQ; assumption



theorem dom_union2 : ∀ P Q, (BinRel P) → (BinRel Q) → dom (P ∪ Q) = (dom P) ∪ (dom Q) := by
  intros P Q h_Pr h_Qr
  apply_l (subs_subs_then_eq _ _); intro_and
  · intro t h_t
    _apply_l (dom_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_t h_ex
    apply_r (union2_prop _ _ _)
    _apply_l (union2_prop _ _ _), h_y, h_ory; elim_or h_ory, h_P, h_Q
    · left
      apply bin_rel_elem_dom P t y <;> assumption
    · right
      apply bin_rel_elem_dom Q t y  <;> assumption
  · intro t h_t
    _apply_l (union2_prop _ _ _), h_t, h_inPQ; clear h_t
    apply_r (dom_prop _ _); elim_or h_inPQ, h_inP, h_inQ
    · _apply_l (dom_prop _ _), h_inP, h_ex; elim_exists h_ex, y, h_y; clear h_ex
      intro_exists y; apply left_union2_subs; assumption
    · _apply_l (dom_prop _ _), h_inQ, h_ex; elim_exists h_ex, y, h_y; clear h_ex
      intro_exists y; apply right_union2_subs; assumption


theorem rng_union2 : ∀ P Q, (BinRel P) → (BinRel Q) → rng (P ∪ Q) = (rng P) ∪ (rng Q) := by
  intros P Q h_Pr h_Qr
  apply_l (subs_subs_then_eq _ _); intro_and
  · intro t h_t
    _apply_l (rng_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_t h_ex
    apply_r (union2_prop _ _ _)
    _apply_l (union2_prop _ _ _), h_y, h_ory; elim_or h_ory, h_P, h_Q
    · left
      apply bin_rel_elem_rng P y t <;> assumption
    · right
      apply bin_rel_elem_rng Q y t  <;> assumption
  · intro t h_t
    _apply_l (union2_prop _ _ _), h_t, h_inPQ; clear h_t
    apply_r (rng_prop _ _); elim_or h_inPQ, h_inP, h_inQ
    · _apply_l (rng_prop _ _), h_inP, h_ex; elim_exists h_ex, y, h_y; clear h_ex
      intro_exists y; apply left_union2_subs; assumption
    · _apply_l (rng_prop _ _), h_inQ, h_ex; elim_exists h_ex, y, h_y; clear h_ex
      intro_exists y; apply right_union2_subs; assumption


theorem dom_inter2 :  ∀ P Q, dom (P ∩ Q) ⊆ ((dom P) ∩ (dom Q))  := by
  intros P Q
  apply subs_l_subs_r_subs_inter2 <;> apply dom_subs
  · apply inter2_subs_left
  · apply inter2_subs_right


theorem rng_inter2 : ∀ P Q, rng (P ∩ Q) ⊆ ((rng P) ∩ (rng Q)) := by
  intros P Q
  apply subs_l_subs_r_subs_inter2 <;> apply rng_subs
  · apply inter2_subs_left
  · apply inter2_subs_right


theorem dom_diff : ∀ P Q, ((dom P) \ (dom Q)) ⊆ (dom (P \ Q)) := by
  intro P Q
  intro t h_t
  _apply_l (difference_prop _ _ _), h_t, h_and; elim_and h_and, h_inP, h_notinQ; clear h_t h_and;
  _apply_l (dom_prop _ _), h_inP, h_ex; elim_exists h_ex, y, h_y; clear h_ex
  apply_r (dom_prop _ _)
  intro_exists y;
  apply_r (difference_prop _ _ _); intro_and; try assumption
  intro_neg h_inQ
  elim_neg h_notinQ
  apply_r (dom_prop _ _)
  intro_exists y; assumption


theorem rng_diff : ∀ P Q, ((rng P) \ (rng Q)) ⊆ (rng (P \ Q)) := by
  intro P Q
  intro t h_t
  _apply_l (difference_prop _ _ _), h_t, h_and; elim_and h_and, h_inP, h_notinQ; clear h_t h_and;
  _apply_l (rng_prop _ _), h_inP, h_ex; elim_exists h_ex, x, h_x; clear h_ex
  apply_r (rng_prop _ _)
  intro_exists x;
  apply_r (difference_prop _ _ _); intro_and; try assumption
  intro_neg h_inQ
  elim_neg h_notinQ
  apply_r (rng_prop _ _)
  intro_exists x; assumption


theorem dom_sym_diff : ∀ P Q, (BinRel P) → (BinRel Q) → (dom P) △ (dom Q) ⊆ (dom (P △ Q)) := by
  intro P Q h_P h_Q
  have h := dom_union2 (P \ Q) (Q \ P) (bin_rel_diff P Q h_P) (bin_rel_diff Q P h_Q)
  have h₁ : P △ Q = (P \ Q) ∪ (Q \ P) := by rfl
  rewrite [h₁, h]
  apply l_subs_r_subs_uinion2_subs
  · apply subset_trans _ (dom (P \ Q)) _
    · apply dom_diff
    · apply left_union2_subs
  · apply subset_trans _ (dom (Q \ P)) _
    · apply dom_diff
    · apply right_union2_subs

theorem rng_sym_diff : ∀ P Q, (BinRel P) → BinRel Q → (rng P) △ (rng Q) ⊆ (rng (P △ Q)) := by
  intros P Q h_P h_Q
  have h := rng_union2 (P \ Q) (Q \ P) (bin_rel_diff P Q h_P) (bin_rel_diff Q P h_Q)
  have h₁ : P △ Q = (P \ Q) ∪ (Q \ P) := by rfl
  rewrite [h₁, h]
  apply l_subs_r_subs_uinion2_subs
  · apply subset_trans _ (rng (P \ Q)) _
    · apply rng_diff
    · apply left_union2_subs
  · apply subset_trans _ (rng (Q \ P)) _
    · apply rng_diff
    · apply right_union2_subs


theorem dom_disj_union2 : ∀ A B, dom (A ⊔ B) = A ∪ B := by
  intro A B
  apply set_extensionality_ax; intro t
  intro_iff
  · intro h_t
    _apply_l (dom_prop _ _), h_t, h_ex; clear h_t; elim_exists h_ex, y, h_y; clear h_ex;
    have h := bin_rel_btw_dij_union2 A B
    specialize_in_ h, (t, y), h_y
    _apply_l (cart_prod_pr_prop _ _ _ _), h, h_and; elim_and_ h_and
  · intro h_t
    _apply_l (union2_prop _ _ _), h_t, h_or; elim_or h_or, h_A, h_B
    · apply_r (dom_prop _ _); intro_exists ∅;
      apply disj_union2_left_in; assumption
    · apply_r (dom_prop _ _); intro_exists {∅};
      apply disj_union2_right_in; assumption


theorem rng_disj_union2 : ∀ A B, rng (A ⊔ B) ⊆ {∅, {∅}} := by
  intro A B
  intro t h_t
  _apply_l (rng_prop _ _), h_t, h_ex; clear h_t; elim_exists h_ex, y, h_y; clear h_ex;
  have h := bin_rel_btw_dij_union2 A B
  specialize_in_ h, (y, t), h_y
  _apply_l (cart_prod_pr_prop _ _ _ _), h, h_and; elim_and_ h_and



theorem dom_cart : ∀ A B, (is_nempty B) → dom (A × B) = A := by
  intros A B h_B
  apply set_extensionality_ax; intro t
  intro_iff
  · intro h_t
    _apply_l (dom_prop _ _), h_t, h_ex; clear h_t; elim_exists h_ex, y, h_y; clear h_ex;
     _apply_l (cart_prod_pr_prop _ _ _ _), h_y, h_and; elim_and_ h_and
  · intro h_t
    apply_r (dom_prop _ _)
    elim_exists h_B, y, h_y
    intro_exists y; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption


theorem rng_cart : ∀ A B, (is_nempty A) → rng (A × B) = B := by
  intros A B h_A
  apply set_extensionality_ax; intro t
  intro_iff
  · intro h_t
    _apply_l (rng_prop _ _), h_t, h_ex; clear h_t; elim_exists h_ex, y, h_y; clear h_ex;
     _apply_l (cart_prod_pr_prop _ _ _ _), h_y, h_and; elim_and_ h_and
  · intro h_t
    apply_r (rng_prop _ _)
    elim_exists h_A, x, h_x
    intro_exists x; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption


theorem dom_compl_cl : ∀ R A B, (is_nempty B) → (R BinRelBtw A AND B) → A \ (dom R) ⊆ (dom (compl R A B)) := by
  intros R A B h_B h_R
  intro t h_t
  _apply_l (difference_prop _ _ _), h_t, h_and; clear h_t; elim_and h_and, h_t, h_nR; clear h_and
  have h : R ∪ (compl R A B) = A × B := by
      apply union2_to_universum_cl
      assumption
  have h₁ : dom (R ∪ (compl R A B)) = dom (A × B) := by
    rw [h]
  have h₂ := bin_rel_btw_is_bin_rel R A B h_R
  have h₃ := bin_rel_compl R A B
  have h₄ := dom_union2 R (compl R A B) h₂ h₃
  rewrite [h₄] at h₁
  clear h₂ h₃ h₄
  rewrite [dom_cart A B h_B] at h₁
  rewrite [← h₁] at h_t
  _apply_l (union2_prop _ _ _), h_t, h_or; elim_or h_or, h_inR, h_incompl
  · elim_f_neg h_nR
  · assumption


theorem rng_compl_cl : ∀ R A B, (is_nempty A) → (R BinRelBtw A AND B)
→ B \ (rng R) ⊆ (rng (compl R A B)) := by
  intros R A B h_A h_R
  intro t h_t
  _apply_l (difference_prop _ _ _), h_t, h_and; clear h_t; elim_and h_and, h_t, h_nR; clear h_and
  have h : R ∪ (compl R A B) = A × B := by
      apply union2_to_universum_cl
      assumption
  have h₁ : rng (R ∪ (compl R A B)) = rng (A × B) := by
    rw [h]
  have h₂ := bin_rel_btw_is_bin_rel R A B h_R
  have h₃ := bin_rel_compl R A B
  have h₄ := rng_union2 R (compl R A B) h₂ h₃
  rewrite [h₄] at h₁
  clear h₂ h₃ h₄
  rewrite [rng_cart A B h_A] at h₁
  rewrite [← h₁] at h_t
  _apply_l (union2_prop _ _ _), h_t, h_or; elim_or h_or, h_inR, h_incompl
  · elim_f_neg h_nR
  · assumption



-- id Binary Relation
noncomputable def id_ A := {t ∈ (A × A) | ∃ x, t = (x, x)}

theorem id_bin_rel : ∀ A, BinRel (id_ A) := by
  intro A
  intro_in_ t, h_t
  have h := spec_then_P _ _ t h_t
  elim_exists h, a, h_a
  intro_exists a; intro_exists a; assumption


theorem id_bin_rel_on : ∀ A, (id_ A) BinRelOn A := by
  intro A
  apply spec_subs


theorem id_prop : ∀ A, ∀ t, (t ∈ id_ A) ↔ ∃ x ∈ A, t = (x, x) := by
  intro A t
  intro_iff
  · intro h_t
    have h := spec_then_P _ _ t h_t
    elim_exists h, x, h_x; clear h
    intro_exists_in x;
    rewrite [h_x] at h_t
    let P t := ∃ x, t = (x, x)
    have h₁ := spec_subs (A × A) P (x, x)
    specialize_in h₁, h_t
    _apply_l (cart_prod_pr_prop _ _ _ _), h₁, h_and; elim_and h_and, h_A, h_Ain
    · assumption
    · assumption
  · intro h_t
    elim_exists_in h_t, x, h_xin, h_x
    apply elem_P_then_spec
    · rewrite [h_x]
      apply_r (cart_prod_pr_prop _ _ _ _) <;> intro_and <;> assumption
    · intro_exists x
      assumption



theorem id_pr_prop : ∀ A, ∀ x, (x . (id_ A) . x) ↔ x ∈ A := by
  intros A x
  have h := id_prop A (x, x)
  intro_iff
  · intro h_xx
    _apply_l h, h_xx, h_ex
    elim_exists_in h_ex, u, h_uin, h_u; clear h_ex
    _apply_r (ord_pr_prop _ _ _ _), h_u, h_and_xequ; elim_and h_and_xequ, h_exu, h_xu; clear h_u h_and_xequ;
    rewrite [h_xu]; assumption
  · intro h_xx
    apply_r h
    intro_exists_in x
    · assumption
    · rfl

theorem in_id : ∀ A, ∀ x ∈ A, (x . (id_ A) . x) := by
  intros A x h_xA
  apply_r (id_pr_prop _ _ ); assumption

theorem id_in_l : ∀ A, ∀ x y, (x . (id_ A) . y) → (x ∈ A) := by
  intros A x y h_xy
  have h := id_prop A (x, y)
  _apply_l h, h_xy, h_ex; elim_exists_in h_ex, t, h_tin, h_t; clear h h_ex
  _apply_r (ord_pr_prop _ _ _ _), h_t, h_eq; elim_and h_eq, h_xt, h_yt
  rewrite [h_xt]; assumption

theorem id_in_r : ∀ A, ∀ x y, (x . (id_ A) . y) → (y ∈ A) := by
  intros A x y h_xy
  have h := id_prop A (x, y)
  _apply_l h, h_xy, h_ex; elim_exists_in h_ex, t, h_tin, h_t; clear h h_ex
  _apply_r (ord_pr_prop _ _ _ _), h_t, h_eq; elim_and h_eq, h_xt, h_yt
  rewrite [h_yt]; assumption


theorem id_then_eq : ∀ A, ∀ x y, (x . (id_ A) . y) → x = y := by
  intro A x y h_xy
  have h := id_prop A (x, y)
  _apply_l h, h_xy, h_ex; elim_exists_in h_ex, t, h_tin, h_t; clear h h_ex
  _apply_r (ord_pr_prop _ _ _ _), h_t, h_eq; elim_and h_eq, h_xt, h_yt
  rw [h_xt, h_yt]
