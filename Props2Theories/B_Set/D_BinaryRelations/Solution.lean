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


theorem dom_pred_f : ∀ x y z, (y = dom x) → (z = dom x) → (y = z) := by
  intros x y z h_yx h_zx
  rw [h_yx, h_zx]


theorem rng_pred_f : ∀ x y z, (y = rng x) → (z = rng x) → (y = z) := by
  intros x y z h_yx h_zx
  rw [h_yx, h_zx]

theorem dom_union : ∀ S, (∀ R ∈ S, (BinRel R)) → (dom (⋃ S) = ⋃ (ReplImg{d | ∃ R ∈ S, d = dom R} of (dom_pred_f))) := by
  intros S h_S
  let P x y := y = dom x
  apply set_extensionality_ax; intro t;
  intro_iff
  · intro h_t
    apply_r (union_set_is_union _ _)
    _apply_l (dom_prop _ _), h_t, h_inun; elim_exists h_inun, y, h_y; clear h_inun h_t
    _apply_l (union_set_is_union _ _), h_y, h_ty; elim_exists_in h_ty, R, h_Rin, h_R; clear h_ty h_y
    intro_exists_in (dom R)
    · apply_r (repl_set_is_repl P S (dom_pred_f) _)
      intro_exists_in R
      · assumption
      · rfl
    · apply bin_rel_elem_dom R t y
      · apply h_S; assumption
      · assumption
  · intro h_t
    apply_r (dom_prop _ _)
    _apply_l (union_set_is_union _ _), h_t, h_indom; elim_exists h_indom, d, h_d; clear h_indom h_t;
    elim_and h_d, h_inrepl, h_in_d
    _apply_l (repl_set_is_repl P S (dom_pred_f) d), h_inrepl, h_ex; clear h_inrepl h_d;
    elim_exists_in h_ex, R, h_Rin, h_R; clear h_ex;
    rewrite [h_R] at h_in_d
    _apply_l (dom_prop _ _), h_in_d, h_ex_y; elim_exists h_ex_y, y, h_y; clear h_R h_in_d h_ex_y
    intro_exists y; apply_r (union_set_is_union _ _)
    intro_exists_in R <;> assumption




theorem rng_union : ∀ S, (∀ R ∈ S, (BinRel R)) → (rng (⋃ S)) = ⋃ (ReplImg{d | ∃ R ∈ S, d = rng R} of (rng_pred_f)) := by
  intros S h_S
  let P x y := y = rng x
  apply set_extensionality_ax; intro t;
  intro_iff
  · intro h_t
    apply_r (union_set_is_union _ _)
    _apply_l (rng_prop _ _), h_t, h_inun; elim_exists h_inun, y, h_y; clear h_inun h_t
    _apply_l (union_set_is_union _ _), h_y, h_ty; elim_exists_in h_ty, R, h_Rin, h_R; clear h_ty h_y
    intro_exists_in (rng R)
    · apply_r (repl_set_is_repl P S (rng_pred_f) _)
      intro_exists_in R
      · assumption
      · rfl
    · apply bin_rel_elem_rng R y t
      · apply h_S; assumption
      · assumption
  · intro h_t
    apply_r (rng_prop _ _)
    _apply_l (union_set_is_union _ _), h_t, h_indom; elim_exists h_indom, d, h_d; clear h_indom h_t;
    elim_and h_d, h_inrepl, h_in_d
    _apply_l (repl_set_is_repl P S (rng_pred_f) d), h_inrepl, h_ex; clear h_inrepl h_d;
    elim_exists_in h_ex, R, h_Rin, h_R; clear h_ex;
    rewrite [h_R] at h_in_d
    _apply_l (rng_prop _ _), h_in_d, h_ex_y; elim_exists h_ex_y, y, h_y; clear h_R h_in_d h_ex_y
    intro_exists y; apply_r (union_set_is_union _ _)
    intro_exists_in R <;> assumption


theorem dom_inter : ∀ S, (∀ R ∈ S, (BinRel R)) → (dom (⋂ S)) ⊆ ⋂ (ReplImg{d | ∃ R ∈ S, d = dom R} of (dom_pred_f)) := by
  intros S h_S
  let T := ReplImg{d | ∃ R ∈ S, d = dom R} of (dom_pred_f)
  let P x y := y = dom x
  intro t
  intro h_t
  apply_r (interset_is_interset _ _); intro_and
  · have h : t ∈ dom (⋃ S) := dom_subs (⋂ S) (⋃ S) (interset_sub_union S) t h_t
    have h₂ := dom_union S h_S
    rw [h₂] at h
    assumption
  · intro K h_K
    _apply_l (repl_set_is_repl P S (dom_pred_f) K), h_K, h_ex; elim_exists_in h_ex, R, h_Rin, h_R; clear h_K h_ex
    _apply_l (dom_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_t h_ex;
    have h_yin := interset_all_in S (t, y) h_y; specialize_in_ h_yin, R, h_Rin; clear h_y;
    rw [h_R]
    apply bin_rel_elem_dom R t y
    · apply h_S; assumption
    · assumption


theorem rng_inter : ∀ S, (∀ R ∈ S, (BinRel R)) → (rng (⋂ S)) ⊆ ⋂ (ReplImg{d | ∃ R ∈ S, d = rng R} of (rng_pred_f)) := by
  intros S h_S
  let T := ReplImg{d | ∃ R ∈ S, d = rng R} of (rng_pred_f)
  let P x y := y = rng x
  intro t
  intro h_t
  apply_r (interset_is_interset _ _); intro_and
  · have h : t ∈ rng (⋃ S) := rng_subs (⋂ S) (⋃ S) (interset_sub_union S) t h_t
    have h₂ := rng_union S h_S
    rw [h₂] at h
    assumption
  · intro K h_K
    _apply_l (repl_set_is_repl P S (rng_pred_f) K), h_K, h_ex; elim_exists_in h_ex, R, h_Rin, h_R; clear h_K h_ex
    _apply_l (rng_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_t h_ex;
    have h_yin := interset_all_in S (y, t) h_y; specialize_in_ h_yin, R, h_Rin; clear h_y;
    rw [h_R]
    apply bin_rel_elem_rng R y t
    · apply h_S; assumption
    · assumption


theorem dom_inter_exi : ∀ S, (∃ R ∈ S, (BinRel R)) → (dom (⋂ S)) ⊆ ⋂ (ReplImg{d | ∃ R ∈ S, d = dom R} of (dom_pred_f)) := by
  intros S h_S
  let T := ReplImg{d | ∃ R ∈ S, d = dom R} of (dom_pred_f)
  let P x y := y = dom x
  intro t
  intro h_t
  elim_exists_in h_S, R, h_Rin, h_R; clear h_S
  have h_nemp : is_nempty S := by
    intro_exists R; assumption
  apply all_in_exi_interset
  · intro_exists (dom R)
    · apply_r (repl_set_is_repl P S (dom_pred_f) (dom R))
      intro_exists_in R
      · assumption
      · rfl
  · intros d h_d
    _apply_l (repl_set_is_repl P S (dom_pred_f) d), h_d, h_ex; elim_exists_in h_ex, Q, h_Qin, h_Q; clear h_ex;
    rw [h_Q]
    _apply_l (dom_prop _ _), h_t, h_ex_in_S; elim_exists h_ex_in_S, y, h_y
    have h₁ := intersection_non_empty S h_nemp (t, y)
    _apply_l h₁, h_y, h_for;
    specialize_in_ h_for, Q, h_Qin
    apply_r (dom_prop _ _)
    intro_exists y; assumption



theorem rng_inter_exi : ∀ S, (∃ R ∈ S, (BinRel R)) → (rng (⋂ S)) ⊆ ⋂ (ReplImg{d | ∃ R ∈ S, d = rng R} of (rng_pred_f)) := by
  intros S h_S
  let T := ReplImg{d | ∃ R ∈ S, d = rng R} of (rng_pred_f)
  let P x y := y = rng x
  intro t
  intro h_t
  elim_exists_in h_S, R, h_Rin, h_R; clear h_S
  have h_nemp : is_nempty S := by
    intro_exists R; assumption
  apply all_in_exi_interset
  · intro_exists (rng R)
    · apply_r (repl_set_is_repl P S (rng_pred_f) (rng R))
      intro_exists_in R
      · assumption
      · rfl
  · intros d h_d
    _apply_l (repl_set_is_repl P S (rng_pred_f) d), h_d, h_ex; elim_exists_in h_ex, Q, h_Qin, h_Q; clear h_ex;
    rw [h_Q]
    _apply_l (rng_prop _ _), h_t, h_ex_in_S; elim_exists h_ex_in_S, y, h_y
    have h₁ := intersection_non_empty S h_nemp (y, t)
    _apply_l h₁, h_y, h_for;
    specialize_in_ h_for, Q, h_Qin
    apply_r (rng_prop _ _)
    intro_exists y; assumption



noncomputable def l_restriction R S := R ∩ (S × (rng R))
notation:max R:1024 " ⨡L " S:1024 => l_restriction R S

noncomputable def r_restriction R S := R ∩ ((dom R) × S)
notation:max R:1024 " ⨡R " S:1024 => r_restriction R S

noncomputable def restriction R S:= R ∩ (S × S)
notation:max R:1024 " ⨡ " S:1024 => restriction R S


theorem l_rest_pr_prop : ∀ R S, (BinRel R) → ∀ x y, ((x . (R ⨡L S) . y) ↔ (x ∈ S ∧ (x . R . y))) := by
  intros R S h_R x y
  intro_iff
  · intro h_xy
    _apply_l (inter2_prop _ _ (x, y)), h_xy, h_and; elim_and h_and, h_xyR, h_xySR; clear h_and
    _apply_l (cart_prod_pr_prop _ _ _ _), h_xySR, h_and; elim_and h_and, h_S, h_R_0; clear h_and
    intro_and
    · assumption
    · assumption
  · intro h_and; elim_and h_and, h_xS, h_R_0; clear h_and;
    apply_r (inter2_prop _ _ _); intro_and
    · assumption
    · apply_r (cart_prod_pr_prop _ _ _ _)
      intro_and
      · assumption
      · apply bin_rel_elem_rng R x y <;> assumption





theorem r_rest_pr_prop : ∀ R S, (BinRel R) → ∀ x y, (x . (R ⨡R S) . y) ↔ (y ∈ S ∧ (x . R . y)) := by
  intros R S h_R x y
  intro_iff
  · intro h_xy
    _apply_l (inter2_prop _ _ (x, y)), h_xy, h_and; elim_and h_and, h_xyR, h_xySR; clear h_and
    _apply_l (cart_prod_pr_prop _ _ _ _), h_xySR, h_and; elim_and h_and, h_S, h_R_0; clear h_and
    intro_and
    · assumption
    · assumption
  · intro h_and; elim_and h_and, h_xS, h_R_0; clear h_and;
    apply_r (inter2_prop _ _ _); intro_and
    · assumption
    · apply_r (cart_prod_pr_prop _ _ _ _)
      intro_and
      · apply bin_rel_elem_dom R x y <;> assumption
      · assumption


theorem rest_pr_prop : ∀ R S, (BinRel R) → ∀ x y, (x . (R ⨡ S) . y) ↔ (x ∈ S ∧ y ∈ S ∧ (x . R . y)) := by
  intros R S h_R x y
  intro_iff
  · intro h_xy
    _apply_l (inter2_prop _ _ (x, y)), h_xy, h_and; elim_and h_and, h_xyR, h_xySR; clear h_and h_xy
    _apply_l (cart_prod_pr_prop _ _ _ _), h_xySR, h_and; elim_and h_and, h_S, h_R_0; clear h_and h_xySR
    intro_and <;> try intro_and
    all_goals assumption
  · intro h_xy; elim_and h_xy, h_xs, h_and; elim_and h_and, h_ys, h_xy;
    apply_r (inter2_prop _ _ _); intro_and
    · assumption
    · apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption



theorem l_rest_bin_rel : ∀ R S, (BinRel R) → BinRel (R ⨡L S) := by
  intros R S h_R
  apply bin_rel_inter2
  assumption

theorem r_rest_bin_rel : ∀ R S, (BinRel R) → BinRel (R ⨡R S) := by
  intros R S h_R
  apply bin_rel_inter2
  assumption

theorem rest_bin_rel : ∀ R S, (BinRel R) → BinRel (R ⨡ S) := by
  intros R S h_R
  apply bin_rel_inter2
  assumption


theorem l_rest_bin_rel_btw : ∀ R A B S, (S ⊆ A) → (R BinRelBtw A AND B) → ((R ⨡L S) BinRelBtw S AND B) := by
  intros R A B S h_SA h_RAB
  have h₁ : (S × (rng R)) BinRelBtw S AND B := by
    intro t
    apply cart_prop_pr_el
    intros x h_x y h_y
    apply_r (cart_prod_pr_prop _ _ _ _)
    intro_and
    · assumption
    · _apply_l (rng_prop _ _), h_y, h_ex; elim_exists h_ex, s, h_s; clear h_ex;
      specialize_in_ h_RAB, (s, y), h_s
      _apply_l (cart_prod_pr_prop _ _ _ _), h_RAB, h_SAB; elim_and h_SAB, h_sA, h_yB;
      assumption
  have h := bin_rel_btw_inter2 R (S × (rng R)) A B S B h_RAB (h₁)
  rewrite [inter2_idemp] at h
  have h₂ := subs_is_eq_inter2 S A
  _apply_l h₂, h_SA,h_eq
  rewrite [inter2_comm] at h_eq
  rewrite [h_eq] at h
  assumption



theorem r_rest_bin_rel_btw : ∀ R A B S, (S ⊆ B) → (R BinRelBtw A AND B) → ((R ⨡R S) BinRelBtw A AND S) := by
  intros R A B S h_SB h_RAB
  have h₁ : ((dom R) × S) BinRelBtw A AND S := by
    intro t
    apply cart_prop_pr_el
    intros x h_x y h_y
    apply_r (cart_prod_pr_prop _ _ _ _)
    intro_and
    · _apply_l (dom_prop _ _), h_x, h_ex; elim_exists h_ex, s, h_s; clear h_ex;
      specialize_in_ h_RAB, (x, s), h_s
      _apply_l (cart_prod_pr_prop _ _ _ _), h_RAB, h_SAB; elim_and h_SAB, h_sA, h_yB;
      assumption
    · assumption
  have h := bin_rel_btw_inter2 R ((dom R) × S) A B A S h_RAB (h₁)
  rewrite [inter2_idemp] at h
  have h₂ := subs_is_eq_inter2 S B
  _apply_l h₂, h_SB ,h_eq
  rewrite [inter2_comm] at h_eq
  rewrite [h_eq] at h
  assumption


theorem rest_bin_rel_btw : ∀ R A S, (S ⊆ A) → (R BinRelOn A) → ((R ⨡ S) BinRelOn S) := by
  intros R A S h_SA h_RA
  have h := bin_rel_btw_inter2 R (S × S) A A S S h_RA (bin_rel_btw_cart S S)
  have h₁ := subs_is_eq_inter2 S A
  _apply_l h₁, h_SA ,h_eq
  rewrite [inter2_comm] at h_eq
  rewrite [h_eq] at h
  assumption



theorem l_res_subs_main : ∀ R S, (R ⨡L S) ⊆ R := by
  intro R S
  apply inter2_subs_left

theorem r_res_subs_main : ∀ R S, (R ⨡R S) ⊆ R := by
  intro R S
  apply inter2_subs_left

theorem res_subs_main : ∀ R S, (R ⨡ S) ⊆ R := by
  intro R S
  apply inter2_subs_left


theorem l_res_emp_l : ∀ S, ∅ ⨡L S = ∅ := by
  intro S
  rw [l_restriction, inter2_comm, inter2_empty]

theorem r_res_emp_l : ∀ S, ∅ ⨡R S = ∅ := by
  intro S
  rw [r_restriction, inter2_comm, inter2_empty]

theorem res_emp_l : ∀ S, ∅ ⨡ S = ∅ := by
  intro S
  rw [restriction, inter2_comm, inter2_empty]


theorem l_res_emp_r : ∀ R, R ⨡L ∅ = ∅ := by
  intro R
  rw [l_restriction, cart_empty_l, inter2_empty]


theorem r_res_emp_r : ∀ R, R ⨡R ∅ = ∅ := by
  intro R
  rw [r_restriction, cart_empty_r, inter2_empty]


theorem res_emp_r : ∀ R, R ⨡ ∅ = ∅ := by
  intro R
  rw [restriction, cart_empty_l, inter2_empty]

theorem l_res_nemp : ∀ R S, (BinRel R) → (S ⊆ (dom R)) → (((is_nempty R) ∧ (is_nempty S)) ↔ (is_nempty (R ⨡L S))) := by
  intros R S h_dR h_RS
  intro_iff
  · intro h_R_S; elim_and h_R_S, h_R, h_S; clear h_R_S
    elim_exists h_S, x, h_x; specialize_in_ h_RS, x, h_x
    _apply_l (dom_prop _ _), h_RS, h_ex; elim_exists h_ex, y, h_y; clear h_ex;
    intro_exists (x, y)
    apply_r (l_rest_pr_prop _ _ _ _ _)
    intro_and
    all_goals assumption
  · intro h_R_S; elim_exists h_R_S, t, h_t; clear h_R_S
    have h := l_rest_bin_rel R S h_dR
    revert h_dR; revert h_RS; revert h_t;
    apply bin_rel_pr_el
    · assumption
    · intro x y h_xy h_SdR h_bR
      _apply_l (l_rest_pr_prop R S h_bR x y), h_xy, h_and; elim_and h_and, h_S, h_xyR; clear h_xy h_and
      intro_and
      · intro_exists (x, y); assumption
      · intro_exists x; assumption

theorem r_res_nemp : ∀ R S, (BinRel R) → (S ⊆ (rng R)) → (((is_nempty R) ∧ (is_nempty S)) ↔ (is_nempty (R ⨡R S))) := by
  intros R S h_dR h_RS
  intro_iff
  · intro h_R_S; elim_and h_R_S, h_R, h_S; clear h_R_S
    elim_exists h_S, x, h_x; specialize_in_ h_RS, x, h_x
    _apply_l (rng_prop _ _), h_RS, h_ex; elim_exists h_ex, y, h_y; clear h_ex;
    intro_exists (y, x)
    apply_r (r_rest_pr_prop _ _ _ _ _)
    intro_and
    all_goals assumption
  · intro h_R_S; elim_exists h_R_S, t, h_t; clear h_R_S
    have h := r_rest_bin_rel R S h_dR
    revert h_dR; revert h_RS; revert h_t;
    apply bin_rel_pr_el
    · assumption
    · intro x y h_xy h_SdR h_bR
      _apply_l (r_rest_pr_prop R S h_bR x y), h_xy, h_and; elim_and h_and, h_S, h_xyR; clear h_xy h_and
      intro_and
      · intro_exists (x, y); assumption
      · intro_exists y; assumption



theorem res_as_L_and_R : ∀ R S, (BinRel R) → (R ⨡ S) = (R ⨡L S) ∩ (R ⨡R S) := by
  intro R S h_R
  apply bin_rel_pr_eq
  · apply rest_bin_rel; assumption
  · apply bin_rel_inter2; apply l_rest_bin_rel; assumption
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (rest_pr_prop _ _ h_R _ _), h_xy, h_and;
    elim_and h_and, h_xS, h_and₀; elim_and h_and₀, h_yS, h_xyR
    clear h_xy h_and h_and₀
    apply_r (inter2_prop _ _ _); intro_and
    · apply_r (l_rest_pr_prop _ _ _ _ _); intro_and; all_goals assumption
    · apply_r (r_rest_pr_prop _ _ _ _ _); intro_and; all_goals assumption
  · _apply_l (inter2_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyLS, h_xyRS; clear h_xy h_and
    _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xyLS, h_and; elim_and h_and, h_xS, h_xyR; clear h_and
    _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xyRS, h_and; elim_and h_and, h_yS, h_xyR₀; clear h_and
    apply_r (rest_pr_prop _ _ h_R _ _); intro_and <;> try intro_and
    all_goals assumption





theorem l_res_subs_l : ∀ P Q S, (P ⊆ Q) → (P ⨡L S) ⊆ (Q ⨡L S) := by
  intros P Q S h_PQ
  calc
  _ ⊆ (P ∩ (S × (rng Q))) := by
    apply mon_inter2_r;
    apply cart_prod_mon_r
    apply rng_subs
    assumption
  _ ⊆ _ := by
    apply mon_inter2_l
    assumption


theorem r_res_subs_l : ∀ P Q S, (P ⊆ Q) → (P ⨡R S) ⊆ (Q ⨡R S) := by
  intros P Q S h_PQ
  calc
  _ ⊆ (P ∩ ((dom Q) × S)) := by
    apply mon_inter2_r;
    apply cart_prod_mon_l
    apply dom_subs
    assumption
  _ ⊆ _ := by
    apply mon_inter2_l
    assumption

theorem res_subs_l : ∀ P Q S, (P ⊆ Q) → (P ⨡ S) ⊆ (Q ⨡ S) := by
  intros P Q S h_PQ
  apply mon_inter2_l
  assumption

theorem l_res_subs_r : ∀ P S T, (S ⊆ T) → (P ⨡L S) ⊆ (P ⨡L T) := by
  intros P S T h_ST
  apply mon_inter2_r
  apply cart_prod_mon_l
  assumption

theorem r_res_subs_r : ∀ P S T, (S ⊆ T) → (P ⨡R S) ⊆ (P ⨡R T) := by
  intros P S T h_ST
  apply mon_inter2_r
  apply cart_prod_mon_r
  assumption

theorem res_subs_r : ∀ P S T, (S ⊆ T) → (P ⨡ S) ⊆ (P ⨡ T) := by
  intros P S T h_ST
  apply mon_inter2_r
  calc
  _ ⊆ S × T := by
    apply cart_prod_mon_r
    assumption
  _ ⊆ _ := by
    apply cart_prod_mon_l
    assumption


theorem l_res_union2_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P ∪ Q) ⨡L S = (P ⨡L S) ∪ (Q ⨡L S) := by
  intros P Q S h_P h_Q
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply bin_rel_pr_el; apply l_rest_bin_rel; apply bin_rel_union2 <;> assumption
    intros x y h_xy
    _apply_l (inter2_prop _ _ _), h_xy, h_and; clear h_xy;
    elim_and h_and, h_xyPQ, h_xy_cart;
    _apply_l (cart_prod_pr_prop _ _ _ _), h_xy_cart, h_andS;
    elim_and h_andS, h_S, h_PQ; clear h_andS h_and h_xy_cart
    _apply_l (union2_prop _ _ _), h_xyPQ, h_or;
    apply_r (union2_prop _ _ _)
    elim_or h_or, h_Pxy, h_Qxy
    · left
      apply_r (inter2_prop _ _ _); intro_and
      · assumption
      · apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · assumption
        · apply_r (rng_prop _ _)
          intro_exists x; assumption
    · right
      apply_r (inter2_prop _ _ _); intro_and
      · assumption
      · apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · assumption
        · apply_r (rng_prop _ _)
          intro_exists x; assumption
  · intro h_t
    _apply_l (union2_prop _ _ _), h_t, h_r; elim_or h_r, h_PS, h_QS; clear h_t
    · _apply_l (inter2_prop _ _ _), h_PS, h_and; elim_and h_and, h_inP, h_cart; clear h_and h_PS
      revert h_cart; revert h_inP; apply bin_rel_pr_el; assumption
      intro x y h_xy h_xySP
      apply_r (inter2_prop _ _ _); intro_and
      · apply left_union2_subs; assumption
      · _apply_l (cart_prod_pr_prop _ _ _ _), h_xySP, h_andSP; elim_and h_andSP, h_S, h_rnP; clear h_andSP
        apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · assumption
        · rewrite [rng_union2]; apply left_union2_subs; all_goals assumption
    · _apply_l (inter2_prop _ _ _), h_QS, h_and; elim_and h_and, h_inQ, h_cart; clear h_and h_QS
      revert h_cart; revert h_inQ; apply bin_rel_pr_el; assumption
      intro x y h_xy h_xySQ
      apply_r (inter2_prop _ _ _); intro_and
      · apply right_union2_subs; assumption
      · _apply_l (cart_prod_pr_prop _ _ _ _), h_xySQ, h_andSQ; elim_and h_andSQ, h_S, h_rnQ; clear h_andSQ
        apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · assumption
        · rewrite [rng_union2]; apply right_union2_subs; all_goals assumption




theorem r_res_union2_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P ∪ Q) ⨡R S = (P ⨡R S) ∪ (Q ⨡R S) := by
  intros P Q S h_P h_Q
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply bin_rel_pr_el; apply r_rest_bin_rel; apply bin_rel_union2 <;> assumption
    intros x y h_xy
    _apply_l (inter2_prop _ _ _), h_xy, h_and; clear h_xy;
    elim_and h_and, h_xyPQ, h_xy_cart;
    _apply_l (cart_prod_pr_prop _ _ _ _), h_xy_cart, h_andS;
    elim_and h_andS, h_S, h_PQ; clear h_andS h_and h_xy_cart
    _apply_l (union2_prop _ _ _), h_xyPQ, h_or;
    apply_r (union2_prop _ _ _)
    elim_or h_or, h_Pxy, h_Qxy
    · left
      apply_r (inter2_prop _ _ _); intro_and
      · assumption
      · apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · apply_r (dom_prop _ _)
          intro_exists y; assumption
        · assumption
    · right
      apply_r (inter2_prop _ _ _); intro_and
      · assumption
      · apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · apply_r (dom_prop _ _)
          intro_exists y; assumption
        · assumption
  · intro h_t
    _apply_l (union2_prop _ _ _), h_t, h_r; elim_or h_r, h_PS, h_QS; clear h_t
    · _apply_l (inter2_prop _ _ _), h_PS, h_and; elim_and h_and, h_inP, h_cart; clear h_and h_PS
      revert h_cart; revert h_inP; apply bin_rel_pr_el; assumption
      intro x y h_xy h_xySP
      apply_r (inter2_prop _ _ _); intro_and
      · apply left_union2_subs; assumption
      · _apply_l (cart_prod_pr_prop _ _ _ _), h_xySP, h_andSP; elim_and h_andSP, h_S, h_rnP; clear h_andSP
        apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · rewrite [dom_union2]; apply left_union2_subs; all_goals assumption
        · assumption
    · _apply_l (inter2_prop _ _ _), h_QS, h_and; elim_and h_and, h_inQ, h_cart; clear h_and h_QS
      revert h_cart; revert h_inQ; apply bin_rel_pr_el; assumption
      intro x y h_xy h_xySQ
      apply_r (inter2_prop _ _ _); intro_and
      · apply right_union2_subs; assumption
      · _apply_l (cart_prod_pr_prop _ _ _ _), h_xySQ, h_andSQ; elim_and h_andSQ, h_S, h_rnQ; clear h_andSQ
        apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · rewrite [dom_union2]; apply right_union2_subs; all_goals assumption
        · assumption




theorem res_union2_l : ∀ P Q S, (P ∪ Q) ⨡ S = (P ⨡ S) ∪ (Q ⨡ S) := by
  intros P Q S
  rewrite [restriction, restriction, restriction]
  conv =>
    lhs; rewrite [inter2_comm]; rewrite [inter_union_distrib]
  conv =>
    lhs; lhs; rw [inter2_comm]
  conv =>
    lhs; rhs; rw [inter2_comm]


theorem l_res_union2_r : ∀ R S T, R ⨡L (S ∪ T) = ((R ⨡L S) ∪ (R ⨡L T)) := by
  intros R S T
  rewrite [l_restriction, l_restriction, l_restriction]
  rewrite [cart_union2_distrib_r]
  rw [inter_union_distrib]


theorem r_res_union2_r : ∀ R S T, R ⨡R (S ∪ T) = (R ⨡R S) ∪ (R ⨡R T):= by
  intros R S T
  rewrite [r_restriction, r_restriction, r_restriction]
  rewrite [cart_union2_distrib_l]
  rw [inter_union_distrib]

theorem res_union2_r : ∀ R S T, (BinRel R) → R ⨡ (S ∪ T) = (R ⨡ S) ∪ (R ⨡ T) ∪ ((R ⨡L S) ⨡R T) ∪ ((R ⨡L T) ⨡R S) := by
  intros R S T h_R
  apply bin_rel_pr_eq
  · apply rest_bin_rel; assumption
  · apply bin_rel_union2
    · apply rest_bin_rel; assumption
    · apply bin_rel_union2
      · apply rest_bin_rel; assumption
      · apply bin_rel_union2
        · apply r_rest_bin_rel; apply l_rest_bin_rel; assumption
        · apply r_rest_bin_rel; apply l_rest_bin_rel; assumption
  intros x y
  intro_iff
  · intro h_xy
    _apply_l (rest_pr_prop R (S ∪ T) h_R x y), h_xy, h_and; elim_and h_and, h_ST, h_yST; elim_and h_yST, h_inST, h_xyR; clear h_and h_yST
    _apply_l (union2_prop _ _ _), h_ST, h_orx; clear h_ST; _apply_l (union2_prop _ _ _), h_inST, h_ory; clear h_inST;
    apply_r (union2_prop _ _ _)
    elim_or h_orx, h_xS, h_xT <;> elim_or h_ory, h_yS, h_yT
    · left
      apply_r (rest_pr_prop _ _ _ _ _); intro_and <;> try intro_and
      all_goals assumption
    all_goals right; all_goals apply_r (union2_prop _ _ _)
    · right; apply_r (union2_prop _ _ _); left; apply_r (r_rest_pr_prop _ _ _ _ _)
      <;> try intro_and; all_goals try apply_r (l_rest_pr_prop _ _ _ _ _); all_goals try intro_and
      all_goals try apply l_rest_bin_rel
      all_goals assumption
    · right;  apply_r (union2_prop _ _ _); right; apply_r (r_rest_pr_prop _ _ _ _ _)
      <;> try intro_and; all_goals try apply_r (l_rest_pr_prop _ _ _ _ _); all_goals try intro_and
      all_goals try apply l_rest_bin_rel
      all_goals assumption
    · left; apply_r (rest_pr_prop _ _ _ _ _); intro_and <;> try intro_and
      all_goals assumption
  · intro h_xy
    _apply_l (union2_prop _ _ _), h_xy, h_or; elim_or h_or, h_RS, h_un;
    · apply res_subs_r R S (S ∪ T); apply left_union2_subs
      assumption
    · _apply_l (union2_prop _ _ _), h_un, h_or; clear h_un
      elim_or h_or, h_RT, h_un
      · apply res_subs_r R T (S ∪ T); apply right_union2_subs
        assumption
      · _apply_l (union2_prop _ _ _), h_un, h_or; clear h_un
        elim_or h_or, h_ST, h_TS
        · have h_bin : BinRel (R ⨡L S) := by
            apply l_rest_bin_rel
            assumption
          _apply_l (r_rest_pr_prop _ _ h_bin _ _), h_ST, h_T_RS; elim_and h_T_RS, h_T, h_RS
          _apply_l (l_rest_pr_prop _ _ h_R _ _), h_RS, h_and; elim_and h_and, h_xS, h_xyR
          apply_r (rest_pr_prop _ _ h_R _ _); intro_and <;> try intro_and
          · apply left_union2_subs; assumption
          · apply right_union2_subs; assumption
          · assumption
        · have h_bin : BinRel (R ⨡L T) := by
            apply l_rest_bin_rel
            assumption
          _apply_l (r_rest_pr_prop _ _ h_bin _ _), h_TS, h_S_RT; elim_and h_S_RT, h_S, h_RT
          _apply_l (l_rest_pr_prop _ _ h_R _ _), h_RT, h_and; elim_and h_and, h_xT, h_xyR
          apply_r (rest_pr_prop _ _ h_R _ _); intro_and <;> try intro_and
          · apply right_union2_subs; assumption
          · apply left_union2_subs; assumption
          · assumption



theorem l_res_inter2_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P ∩ Q) ⨡L S = (P ⨡L S) ∩ (Q ⨡L S) := by
  intros P Q S h_P h_Q
  have h : BinRel (P ∩ Q) := by
    apply bin_rel_inter2; assumption
  apply bin_rel_pr_eq
  · apply l_rest_bin_rel; exact h
  · apply bin_rel_inter2; apply l_rest_bin_rel; assumption
  · intros x y
    intro_iff
    · intro h_xy
      apply_r (inter2_prop _ _ _); intro_and
      · apply l_res_subs_l (P ∩ Q) P S (inter2_subs_left P Q); assumption
      · apply l_res_subs_l (P ∩ Q) Q S (inter2_subs_right P Q); assumption
    · intro h_xy
      _apply_l (inter2_prop _ _ _), h_xy, h_and; elim_and h_and, h_PS, h_QS; clear h_xy h_and
      _apply_l (l_rest_pr_prop _ _ h_P _ _), h_PS, h_and; elim_and h_and, h_inS, h_inP; clear h_PS h_and;
      _apply_l (l_rest_pr_prop _ _ h_Q _ _), h_QS, h_and; elim_and h_and, h_inS₂, h_inQ; clear h_QS h_and;
      apply_r (l_rest_pr_prop _ _ h _ _); intro_and; assumption
      apply_r (inter2_prop _ _ _); intro_and <;> assumption


theorem r_res_inter2_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P ∩ Q) ⨡R S = (P ⨡R S) ∩ (Q ⨡R S) := by
  intros P Q S h_P h_Q
  have h : BinRel (P ∩ Q) := by
    apply bin_rel_inter2; assumption
  apply bin_rel_pr_eq
  · apply r_rest_bin_rel; exact h
  · apply bin_rel_inter2; apply r_rest_bin_rel; assumption
  · intros x y
    intro_iff
    · intro h_xy
      apply_r (inter2_prop _ _ _); intro_and
      · apply r_res_subs_l (P ∩ Q) P S (inter2_subs_left P Q); assumption
      · apply r_res_subs_l (P ∩ Q) Q S (inter2_subs_right P Q); assumption
    · intro h_xy
      _apply_l (inter2_prop _ _ _), h_xy, h_and; elim_and h_and, h_PS, h_QS; clear h_xy h_and
      _apply_l (r_rest_pr_prop _ _ h_P _ _), h_PS, h_and; elim_and h_and, h_inS, h_inP; clear h_PS h_and;
      _apply_l (r_rest_pr_prop _ _ h_Q _ _), h_QS, h_and; elim_and h_and, h_inS₂, h_inQ; clear h_QS h_and;
      apply_r (r_rest_pr_prop _ _ h _ _); intro_and; assumption
      apply_r (inter2_prop _ _ _); intro_and <;> assumption

theorem res_inter2_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P ∩ Q) ⨡ S = (P ⨡ S) ∩ (Q ⨡ S) := by
  intros P Q S h_P h_Q
  rewrite [restriction, restriction, restriction]
  conv =>
    rhs; rewrite [inter2_assoc]
  conv =>
    rhs; rhs; rhs; rewrite [inter2_comm]
  conv =>
    rhs; rhs; rewrite [← inter2_assoc]
  conv =>
    rhs; rhs; lhs; rewrite [inter2_idemp]
  conv =>
    rhs; rhs; rewrite [inter2_comm]
  conv =>
    rhs; rw [← inter2_assoc]


theorem l_res_inter2_r : ∀ R S T, (BinRel R) → (R ⨡L (S ∩ T)) = (R ⨡L S) ∩ (R ⨡L T) := by
  intros R S T h_R
  apply bin_rel_pr_eq
  · apply l_rest_bin_rel; assumption
  · apply bin_rel_inter2; apply l_rest_bin_rel; assumption
  · intros x y
    intro_iff
    · intro h_xy
      _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_xyST, h_xyR; clear h_xy h_and
      _apply_l (inter2_prop _ _ _), h_xyST, h_and; elim_and h_and, h_xS, h_xT; clear h_xyST h_and
      apply_r (inter2_prop _ _ _); intro_and
      · apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
      · apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
    · intro h_xy
      _apply_l (inter2_prop _ _ _), h_xy, h_and; elim_and h_and, h_RS, h_RT; clear h_xy h_and
      _apply_l (l_rest_pr_prop _ _ h_R _ _), h_RS, h_and; elim_and h_and, h_xS, h_xyR; clear h_RS h_and
      _apply_l (l_rest_pr_prop _ _ h_R _ _), h_RT, h_and; elim_and h_and, h_xT, h_xyR₀; clear h_RT h_and
      apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and
      · apply_r (inter2_prop _ _ _); intro_and <;> assumption
      · assumption



theorem r_res_inter2_r : ∀ R S T, (BinRel R) → (R ⨡R (S ∩ T)) = (R ⨡R S) ∩ (R ⨡R T) := by
  intros R S T h_R
  apply bin_rel_pr_eq
  · apply r_rest_bin_rel; assumption
  · apply bin_rel_inter2; apply r_rest_bin_rel; assumption
  · intros x y
    intro_iff
    · intro h_xy
      _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_xyST, h_xyR; clear h_xy h_and
      _apply_l (inter2_prop _ _ _), h_xyST, h_and; elim_and h_and, h_xS, h_xT; clear h_xyST h_and
      apply_r (inter2_prop _ _ _); intro_and
      · apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
      · apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
    · intro h_xy
      _apply_l (inter2_prop _ _ _), h_xy, h_and; elim_and h_and, h_RS, h_RT; clear h_xy h_and
      _apply_l (r_rest_pr_prop _ _ h_R _ _), h_RS, h_and; elim_and h_and, h_xS, h_xyR; clear h_RS h_and
      _apply_l (r_rest_pr_prop _ _ h_R _ _), h_RT, h_and; elim_and h_and, h_xT, h_xyR₀; clear h_RT h_and
      apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and
      · apply_r (inter2_prop _ _ _); intro_and <;> assumption
      · assumption



theorem res_inter2_r : ∀ R S T, (BinRel R) → (R ⨡ (S ∩ T)) = (R ⨡ S) ∩ (R ⨡ T) := by
  intros R S T h_R
  apply bin_rel_pr_eq
  · apply rest_bin_rel; assumption
  · apply bin_rel_inter2; apply rest_bin_rel; assumption
  · intros x y
    intro_iff
    · intro h_xy
      _apply_l (rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_xyST, h_xyR; clear h_xy h_and
      _apply_l (inter2_prop _ _ _), h_xyST, h_and; elim_and h_and, h_xS, h_xT; clear h_xyST h_and
      elim_and h_xyR, h_yS, h_xy_R; clear h_xyR; _apply_l (inter2_prop _ _ _), h_yS, h_and;
      elim_and h_and, h_yS₀, h_yT; clear h_and
      apply_r (inter2_prop _ _ _); intro_and
      · apply_r (rest_pr_prop _ _ h_R _ _); (intro_and <;> try intro_and); all_goals assumption
      · apply_r (rest_pr_prop _ _ h_R _ _); (intro_and <;> try intro_and); all_goals assumption
    · intro h_xy
      _apply_l (inter2_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyRS, h_xyRT; clear h_xy h_and
      _apply_l (rest_pr_prop _ _ h_R _ _), h_xyRS, h_and; elim_and h_and, h_xS, h_and₀;
      elim_and h_and₀, h_yS, h_xyR; clear h_xyRS h_and h_and₀
      _apply_l (rest_pr_prop _ _ h_R _ _), h_xyRT, h_and; elim_and h_and, h_xT, h_and₀;
      elim_and h_and₀, h_yT, h_xyR₀; clear h_xyRT h_and h_and₀
      apply_r (rest_pr_prop _ _ h_R _ _); intro_and
      · apply_r (inter2_prop _ _ _); intro_and <;> assumption
      · intro_and
        · apply_r (inter2_prop _ _ _); intro_and <;> assumption
        · assumption





theorem l_res_double_res : ∀ P S T, (BinRel P) → (P ⨡L S) ⨡L T = P ⨡L (S ∩ T) := by
  intros P S T h_P
  have h : BinRel (P ⨡L S) := by
    apply l_rest_bin_rel; assumption
  apply bin_rel_pr_eq; apply l_rest_bin_rel; apply l_rest_bin_rel; assumption; apply l_rest_bin_rel; assumption
  intros x y; intro_iff
  · intro h_xy
    _apply_l (l_rest_pr_prop _ _ h _ _), h_xy, h_and; elim_and h_and, h_inT, h_inPS; clear h_and h_xy
    _apply_l (l_rest_pr_prop _ _ h_P _ _), h_inPS, h_and; elim_and h_and, h_inS, h_inxyP; clear h_inPS h_and
    apply_r (l_rest_pr_prop _ _ _ _ _); intro_and
    · apply_r (inter2_prop _ _ _); intro_and <;> assumption
    · assumption
    · assumption
  · intro h_xy
    _apply_l (l_rest_pr_prop _ _ h_P _ _), h_xy, h_and; elim_and h_and, h_ST, h_xyP; clear h_xy h_and
    _apply_l (inter2_prop _ _ _), h_ST, h_and; elim_and h_and, h_xS, h_xT; clear h_ST h_and
    apply_r (l_rest_pr_prop _ _ h _ _); intro_and
    · assumption
    · apply_r (l_rest_pr_prop _ _ h_P _ _); intro_and <;> assumption


theorem r_res_double_res : ∀ P S T, (BinRel P) → (P ⨡R S) ⨡R T = P ⨡R (S ∩ T) := by
  intros P S T h_P
  have h : BinRel (P ⨡R S) := by
    apply r_rest_bin_rel; assumption
  apply bin_rel_pr_eq; apply r_rest_bin_rel; apply r_rest_bin_rel; assumption; apply r_rest_bin_rel; assumption
  intros x y; intro_iff
  · intro h_xy
    _apply_l (r_rest_pr_prop _ _ h _ _), h_xy, h_and; elim_and h_and, h_inT, h_inPS; clear h_and h_xy
    _apply_l (r_rest_pr_prop _ _ h_P _ _), h_inPS, h_and; elim_and h_and, h_inS, h_inxyP; clear h_inPS h_and
    apply_r (r_rest_pr_prop _ _ _ _ _); intro_and
    · apply_r (inter2_prop _ _ _); intro_and <;> assumption
    · assumption
    · assumption
  · intro h_xy
    _apply_l (r_rest_pr_prop _ _ h_P _ _), h_xy, h_and; elim_and h_and, h_ST, h_xyP; clear h_xy h_and
    _apply_l (inter2_prop _ _ _), h_ST, h_and; elim_and h_and, h_xS, h_xT; clear h_ST h_and
    apply_r (r_rest_pr_prop _ _ h _ _); intro_and
    · assumption
    · apply_r (r_rest_pr_prop _ _ h_P _ _); intro_and <;> assumption



theorem res_double_res : ∀ P S T, (BinRel P) → (P ⨡ S) ⨡ T = P ⨡ (S ∩ T) := by
  intros P S T h_P
  apply bin_rel_pr_eq; apply rest_bin_rel; apply rest_bin_rel; assumption; apply rest_bin_rel; assumption
  have h : BinRel (P ⨡ S) := by
    apply rest_bin_rel; assumption
  intro x y; intro_iff
  · intro h_xy
    _apply_l (rest_pr_prop _ _ h _ _), h_xy, h_and; elim_and h_and, h_inT, h_inyT; elim_and h_inyT, h_yT, h_PS; clear h_inyT h_and
    _apply_l (rest_pr_prop _ _ h_P _ _), h_PS, h_xSyS; elim_and h_xSyS, h_xS, h_ySP; elim_and h_ySP, h_yS, h_xyP; clear h_ySP h_xSyS h_PS
    apply_r (inter2_prop _ _ _); intro_and
    · assumption
    · apply_r (cart_prod_pr_prop _ _ _ _)
      intro_and <;> apply_r (inter2_prop _ _ _) <;> intro_and <;> assumption
  · intro h_xy
    _apply_l (rest_pr_prop _ _ h_P _ _), h_xy, h_and; elim_and h_and, h_xST, h_yST; elim_and h_yST, h_ySY, h_xyP; clear h_yST h_and h_xy
    apply_r (rest_pr_prop _ _ h _ _); intro_and <;> try intro_and
    · apply inter2_subs_right S T x; assumption
    · apply inter2_subs_right S T y; assumption
    · apply_r (rest_pr_prop _ _ h_P _ _); intro_and <;> try intro_and
      · apply inter2_subs_left S T x; assumption
      · apply inter2_subs_left S T y; assumption
      · assumption

theorem l_res_double_comm : ∀ P S T, (BinRel P) → (P ⨡L S) ⨡L T = (P ⨡L T) ⨡L S := by
  intros P S T h_P
  rewrite [l_res_double_res P S T h_P, l_res_double_res P T S h_P]
  rw [inter2_comm]


theorem r_res_double_comm : ∀ P S T, (BinRel P) → (P ⨡R S) ⨡R T = (P ⨡R T) ⨡R S := by
  intros P S T h_P
  rewrite [r_res_double_res P S T h_P, r_res_double_res P T S h_P]
  rw [inter2_comm]

theorem res_double_comm : ∀ P S T, (BinRel P) → (P ⨡ S) ⨡ T = (P ⨡ T) ⨡ S := by
  intros P S T h_P
  rewrite [res_double_res P S T h_P, res_double_res P T S h_P]
  rw [inter2_comm]

theorem lr_is_inter : ∀ R S T, (BinRel R) → (R ⨡L S) ⨡R T = (R ⨡L S) ∩ (R ⨡R T) := by
  intros R S T h_R
  have h_S : BinRel (R ⨡L S) := by
    apply l_rest_bin_rel; assumption
  apply bin_rel_pr_eq
  · apply r_rest_bin_rel; apply h_S
  · apply bin_rel_inter2; assumption
  · intro x y; intro_iff <;> intro h_xy
    · _apply_l (r_rest_pr_prop _ _ h_S _ _), h_xy, h_and; elim_and h_and, h_yT, h_xyRS; clear h_and h_xy
      _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xyRS, h_and; elim_and h_and, h_xS, h_xyR; clear h_and h_xyRS
      apply_r (inter2_prop _ _ _); intro_and
      · apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
      · apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
    · _apply_l (inter2_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyS, h_xyT; clear h_xy h_and
      _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xyS, h_and; elim_and h_and, h_xS, h_xyR; clear h_xyS h_and
      _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xyT, h_and; elim_and h_and, h_yT, h_xyR₀; clear h_xyT h_and
      apply_r (r_rest_pr_prop _ _ h_S _ _); intro_and
      · assumption
      · apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption





theorem lr_res_comm : ∀ R S T, (BinRel R) → (R ⨡L S) ⨡R T = (R ⨡R T) ⨡L S := by
  intros R S T h_R
  have h_S : BinRel (R ⨡L S) := by
    apply l_rest_bin_rel; assumption
  have h_T : BinRel (R ⨡R T) := by
    apply r_rest_bin_rel; assumption
  apply bin_rel_pr_eq
  · apply r_rest_bin_rel; apply l_rest_bin_rel; assumption
  · apply l_rest_bin_rel; apply r_rest_bin_rel; assumption
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (r_rest_pr_prop _ _ h_S _ _), h_xy, h_and; elim_and h_and, h_yT, h_xyRS; clear h_and h_xy
    _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xyRS, h_and; elim_and h_and, h_xS, h_xyR; clear h_and h_xyRS
    apply_r (l_rest_pr_prop _ _ h_T _ _); intro_and
    · assumption
    · apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
  · _apply_l (l_rest_pr_prop _ _ h_T _ _), h_xy, h_and; elim_and h_and, h_yT, h_xyRS; clear h_and h_xy
    _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xyRS, h_and; elim_and h_and, h_xS, h_xyR; clear h_and h_xyRS
    apply_r (r_rest_pr_prop _ _ h_S _ _); intro_and
    · assumption
    · apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption




theorem l_res_differ_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P \ Q) ⨡L S = (P ⨡L S) \ (Q ⨡L S) := by
  intros P Q S h_P h_Q
  have h : BinRel (P \ Q) := by
    apply bin_rel_diff; assumption
  apply bin_rel_pr_eq;
  · apply l_rest_bin_rel; apply h
  · apply bin_rel_diff; apply l_rest_bin_rel; assumption
  intro x y; intro_iff
  · intro h_xy
    _apply_l (l_rest_pr_prop (P \ Q) S h _ _), h_xy, h_and; elim_and h_and, h_xS, h_xyPQ; clear h_xy h_and
    _apply_l (difference_prop _ _ _), h_xyPQ, h_and; elim_and h_and, h_xyP, h_xynQ; clear h_xyPQ h_and
    apply_r (difference_prop _ _ _); intro_and
    · apply_r (l_rest_pr_prop P S h_P _ _); intro_and <;> assumption
    · intro_neg h_xyQS
      _apply_l (l_rest_pr_prop _ _ h_Q _ _), h_xyQS, h_and; elim_and h_and, h_xS₀, h_xyQ
      elim_neg h_xynQ; assumption
  · intro h_xy
    _apply_l (difference_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyPS, h_xyQS; clear h_xy h_and
    _apply_l (l_rest_pr_prop _ _ h_P _ _), h_xyPS, h_and; elim_and h_and, h_xS, h_xyP; clear h_xyPS h_and
    apply_r (l_rest_pr_prop _ _ _ _ _); intro_and
    · assumption
    · apply_r (difference_prop _ _ _); intro_and
      · assumption
      · intro_neg h_xyQ
        elim_neg h_xyQS
        apply_r (l_rest_pr_prop _ _ _ _ _); intro_and
        all_goals assumption
    assumption


theorem r_res_differ_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P \ Q) ⨡R S = (P ⨡R S) \ (Q ⨡R S) := by
  intros P Q S h_P h_Q
  have h : BinRel (P \ Q) := by
    apply bin_rel_diff; assumption
  apply bin_rel_pr_eq;
  · apply r_rest_bin_rel; apply h
  · apply bin_rel_diff; apply r_rest_bin_rel; assumption
  intro x y; intro_iff
  · intro h_xy
    _apply_l (r_rest_pr_prop (P \ Q) S h _ _), h_xy, h_and; elim_and h_and, h_xS, h_xyPQ; clear h_xy h_and
    _apply_l (difference_prop _ _ _), h_xyPQ, h_and; elim_and h_and, h_xyP, h_xynQ; clear h_xyPQ h_and
    apply_r (difference_prop _ _ _); intro_and
    · apply_r (r_rest_pr_prop P S h_P _ _); intro_and <;> assumption
    · intro_neg h_xyQS
      _apply_l (r_rest_pr_prop _ _ h_Q _ _), h_xyQS, h_and; elim_and h_and, h_xS₀, h_xyQ
      elim_neg h_xynQ; assumption
  · intro h_xy
    _apply_l (difference_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyPS, h_xyQS; clear h_xy h_and
    _apply_l (r_rest_pr_prop _ _ h_P _ _), h_xyPS, h_and; elim_and h_and, h_xS, h_xyP; clear h_xyPS h_and
    apply_r (r_rest_pr_prop _ _ _ _ _); intro_and
    · assumption
    · apply_r (difference_prop _ _ _); intro_and
      · assumption
      · intro_neg h_xyQ
        elim_neg h_xyQS
        apply_r (r_rest_pr_prop _ _ _ _ _); intro_and
        all_goals assumption
    · assumption


theorem res_differ_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P \ Q) ⨡ S = (P ⨡ S) \ (Q ⨡ S) := by
  intros P Q S h_P h_Q
  have h : BinRel (P \ Q) := by
    apply bin_rel_diff; assumption
  apply bin_rel_pr_eq;
  · apply rest_bin_rel; apply h
  · apply bin_rel_diff; apply rest_bin_rel; assumption
  intro x y; intro_iff
  · intro h_xy
    _apply_l (rest_pr_prop (P \ Q) S h _ _), h_xy, h_and; elim_and h_and, h_xS, h_xyPQ₀; clear h_xy h_and;
    elim_and h_xyPQ₀, h_yS, h_xyPQ; clear h_xyPQ₀
    _apply_l (difference_prop _ _ _), h_xyPQ, h_and; elim_and h_and, h_xyP, h_xynQ; clear h_xyPQ h_and
    apply_r (difference_prop _ _ _); intro_and
    · apply_r (rest_pr_prop P S h_P _ _); intro_and <;> try intro_and;
      all_goals assumption
    · intro_neg h_xyQS
      _apply_l (rest_pr_prop _ _ h_Q _ _), h_xyQS, h_and; elim_and h_and, h_xS₀, h_xyQ
      elim_neg h_xynQ; elim_and_ h_xyQ
  · intro h_xy
    _apply_l (difference_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyPS, h_xyQS; clear h_xy h_and
    _apply_l (rest_pr_prop _ _ h_P _ _), h_xyPS, h_and; elim_and h_and, h_xS, h_xyP; clear h_xyPS h_and
    apply_r (rest_pr_prop _ _ _ _ _); intro_and
    · assumption
    · elim_and h_xyP, hyS, h_xyP₀; clear h_xyP
      intro_and
      · assumption
      · apply_r (difference_prop _ _ _)
        intro_and
        · assumption
        · intro_neg h_xyQ
          elim_neg h_xyQS
          apply_r (rest_pr_prop _ _ h_Q _ _); intro_and <;> try intro_and
          all_goals assumption
    · assumption


theorem l_res_differ_r : ∀ R S T, (BinRel R) → R ⨡L (S \ T) = (R ⨡L S) \ (R ⨡L T) := by
  intros R S T h_R
  apply bin_rel_pr_eq
  · apply l_rest_bin_rel; assumption
  · apply bin_rel_diff; apply l_rest_bin_rel; assumption
  intro x y
  intro_iff
  · intro h_xy
    _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_ST, h_xyR; clear h_xy h_and
    _apply_l (difference_prop _ _ _), h_ST, h_andS_nT; elim_and h_andS_nT, h_S, h_nT; clear h_andS_nT h_ST
    apply_r (difference_prop _ _ _); intro_and
    · apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
    · intro_neg h_xyRL
      _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xyRL, h_and; elim_and h_and, h_xT, h_xyR₀; clear h_xyRL h_and
      elim_neg h_nT; assumption
  · intro h_xy
    _apply_l (difference_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyRS, h_xy_nRT
    _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xyRS, h_and₀; elim_and h_and₀, h_xS, h_xyR₀; clear h_xyRS h_and₀
    apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and
    · apply_r (difference_prop _ _ _); intro_and
      · assumption
      · intro_neg h_xT
        elim_neg h_xy_nRT
        apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and
        · assumption
        · assumption
    · assumption



theorem r_res_differ_r : ∀ R S T, (BinRel R) → R ⨡R (S \ T) = (R ⨡R S) \ (R ⨡R T) := by
  intros R S T h_R
  apply bin_rel_pr_eq
  · apply r_rest_bin_rel; assumption
  · apply bin_rel_diff; apply r_rest_bin_rel; assumption
  intro x y
  intro_iff
  · intro h_xy
    _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_ST, h_xyR; clear h_xy h_and
    _apply_l (difference_prop _ _ _), h_ST, h_andS_nT; elim_and h_andS_nT, h_S, h_nT; clear h_andS_nT h_ST
    apply_r (difference_prop _ _ _); intro_and
    · apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and <;> assumption
    · intro_neg h_xyRL
      _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xyRL, h_and; elim_and h_and, h_xT, h_xyR₀; clear h_xyRL h_and
      elim_neg h_nT; assumption
  · intro h_xy
    _apply_l (difference_prop _ _ _), h_xy, h_and; elim_and h_and, h_xyRS, h_xy_nRT
    _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xyRS, h_and₀; elim_and h_and₀, h_xS, h_xyR₀; clear h_xyRS h_and₀
    apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and
    · apply_r (difference_prop _ _ _); intro_and
      · assumption
      · intro_neg h_xT
        elim_neg h_xy_nRT
        apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and
        · assumption
        · assumption
    · assumption

theorem res_differ_r : ∀ R S T, (BinRel R) → R ⨡ (S \ T) = ((R ⨡ S) \ (R ⨡L T)) \ (R ⨡R T) := by
  intros R S T h_R
  apply bin_rel_pr_eq
  · apply rest_bin_rel; assumption
  · apply bin_rel_diff; apply bin_rel_diff; apply rest_bin_rel; assumption
  intro x y
  intro_iff
  · intro h_xy
    _apply_l (rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_xST, h_ySTxyR;
    elim_and h_ySTxyR, h_yST, h_xyR; clear h_xy h_and h_ySTxyR
    _apply_l (difference_prop _ _ _), h_xST, h_and; elim_and h_and, h_xS, h_nxT; clear h_xST h_and
    _apply_l (difference_prop _ _ _), h_yST, h_and; elim_and h_and, h_yS, h_nyT; clear h_yST h_and
    apply_r (difference_prop _ _ _); intro_and <;> (try (apply_r (difference_prop _ _ _); intro_and))
    · apply_r (rest_pr_prop _ _ _ _ _); intro_and <;> try intro_and
      all_goals assumption
    · intro_neg h_inLT
      elim_neg h_nxT
      _apply_l (l_rest_pr_prop _ _ h_R _ _), h_inLT, h_and; elim_and_ h_and
    · intro_neg h_inRT
      elim_neg h_nyT
      _apply_l (r_rest_pr_prop _ _ h_R _ _), h_inRT, h_and; elim_and_ h_and
  · intro h_xy
    _apply_l (difference_prop _ _ _), h_xy, h_and; elim_and  h_and, h_xy_diff, h_nxy; clear h_xy h_and
    _apply_l (difference_prop _ _ _), h_xy_diff, h_and; elim_and h_and, h_xyRS, h_xy_nRT; clear h_xy_diff h_and
    _apply_l (rest_pr_prop _ _ h_R _ _), h_xyRS, h_and; elim_and h_and, h_xS, h_yS_xyR;
    elim_and h_yS_xyR, h_yS, h_xyR₀; clear h_yS_xyR h_and h_xyRS
    apply_r (rest_pr_prop _ _ _ _ _)
    intro_and <;> try intro_and
    all_goals (try assumption); all_goals (apply_r (difference_prop _ _ _); intro_and)
    all_goals (try assumption);
    · intro_neg h_xT
      elim_neg h_xy_nRT
      apply_r (l_rest_pr_prop _ _ _ _ _); intro_and
      all_goals assumption
    · intro_neg h_yT
      elim_neg h_nxy
      apply_r (r_rest_pr_prop _ _ _ _ _); intro_and
      all_goals assumption




theorem l_res_sym_differ_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P △ Q) ⨡L S = (P ⨡L S) △ (Q ⨡L S) := by
  intros P Q S h_P h_Q
  rewrite [symmetric_difference, symmetric_difference, l_res_union2_l, l_res_differ_l, l_res_differ_l]
  all_goals (try apply bin_rel_diff); all_goals (try assumption);
  rfl



theorem r_res_sym_differ_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P △ Q) ⨡R S = (P ⨡R S) △ (Q ⨡R S) := by
  intros P Q S h_P h_Q
  rewrite [symmetric_difference, symmetric_difference, r_res_union2_l, r_res_differ_l, r_res_differ_l]
  all_goals (try apply bin_rel_diff); all_goals (try assumption);
  rfl


theorem res_sym_differ_l : ∀ P Q S, (BinRel P) → (BinRel Q) → (P △ Q) ⨡ S = (P ⨡ S) △ (Q ⨡ S) := by
  intros P Q S h_P h_Q
  rewrite [symmetric_difference, symmetric_difference, res_union2_l, res_differ_l, res_differ_l]
  all_goals (try apply bin_rel_diff); all_goals (try assumption);
  rfl


theorem l_res_sym_differ_r : ∀ R S T, (BinRel R) → R ⨡L (S △ T) = (R ⨡L S) △ (R ⨡L T) := by
  intros R S T h_R
  rewrite [symmetric_difference, symmetric_difference, l_res_union2_r, l_res_differ_r, l_res_differ_r]
  all_goals (try apply bin_rel_diff); all_goals (try assumption);
  rfl



theorem r_res_sym_differ_r : ∀ R S T, (BinRel R) → R ⨡R (S △ T) = (R ⨡R S) △ (R ⨡R T) := by
  intros R S T h_R
  rewrite [symmetric_difference, symmetric_difference, r_res_union2_r, r_res_differ_r, r_res_differ_r]
  all_goals (try apply bin_rel_diff); all_goals (try assumption);
  rfl


theorem res_sym_differ_r : ∀ R S T, (BinRel R) → (R ⨡ (S △ T)) = ((R ⨡ S) △ (R ⨡L T) ⨡R S) △ ((R ⨡L S) ⨡R T) △ R ⨡ T:= by
  intro R S T h_R
  conv =>
    lhs
    rewrite [res_as_L_and_R R (S △ T) h_R]
    conv =>
      lhs
      rewrite [l_res_sym_differ_r R S T h_R]
    conv =>
      rhs
      rewrite [r_res_sym_differ_r R S T h_R]
  rewrite [inter_sym_diff_distrib]
  conv =>
    lhs; lhs; rewrite [inter2_comm]; rewrite [inter_sym_diff_distrib]
    conv =>
      lhs; rewrite [inter2_comm]; rewrite [← res_as_L_and_R R S h_R]
    conv =>
      rhs; rewrite [inter2_comm]; rewrite [← lr_is_inter R T S h_R]
  conv =>
    lhs; rhs; rewrite [inter2_comm]; rewrite [inter_sym_diff_distrib]
    conv =>
      rhs; rewrite [inter2_comm]; rewrite [← res_as_L_and_R R T h_R]
    conv =>
      lhs; rewrite [inter2_comm]; rewrite [← lr_is_inter R S T h_R]















theorem l_res_dom : ∀ R A, (BinRel R) → ((dom R) ⊆ A) → R ⨡L A = R:= by
  intros R A h_R h_dR_A
  apply bin_rel_pr_eq
  · apply l_rest_bin_rel; assumption
  · assumption
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_xA, h_xyR; clear h_xy h_and
    assumption
  · apply_r (l_rest_pr_prop _ _ h_R _ _); intro_and <;> try assumption
    apply h_dR_A;
    apply_r (dom_prop _ _); intro_exists y; assumption


theorem r_res_rng : ∀ R A, (BinRel R) → ((rng R) ⊆ A) → R ⨡R (A) = R := by
  intros R A h_R h_rR_A
  apply bin_rel_pr_eq
  · apply r_rest_bin_rel; assumption
  · assumption
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_yA, h_xyR; clear h_xy h_and
    assumption
  · apply_r (r_rest_pr_prop _ _ h_R _ _); intro_and <;> try assumption
    apply h_rR_A
    apply_r (rng_prop _ _); intro_exists x; assumption


theorem res_dom_rng : ∀ R A, (BinRel R) → ((dom R) ⊆ A) → ((rng R) ⊆ A) → R ⨡ A = R := by
  intros R A h_R h_dR_A h_rR_B
  apply bin_rel_pr_eq
  · apply rest_bin_rel; assumption
  · assumption
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (rest_pr_prop _ _ h_R _ _), h_xy, h_and;
    elim_and h_and, h_xA, h_and₀; elim_and h_and₀, h_yA, h_xyR; clear h_and h_and₀
    assumption
  · apply_r (rest_pr_prop _ _ h_R _ _); intro_and <;> try intro_and <;> try assumption
    · apply h_dR_A; apply_r (dom_prop _ _); intro_exists y; assumption
    · apply h_rR_B; apply_r (rng_prop _ _); intro_exists x; assumption




theorem dom_l_res_subs : ∀ R S, (BinRel R) → dom (R ⨡L S) ⊆ S := by
  intros R S h_R
  intros x h_x
  _apply_l (dom_prop _ _), h_x, h_ex; elim_exists h_ex, y, h_xy; clear h_x h_ex;
  _apply_l (l_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and_ h_and

theorem rng_r_res_subs : ∀ R S, (BinRel R) → rng (R ⨡R S) ⊆ S := by
  intros R S h_R
  intros y h_y
  _apply_l (rng_prop _ _), h_y, h_ex; elim_exists h_ex, x, h_xy; clear h_y h_ex;
  _apply_l (r_rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and_ h_and

theorem dom_res_subs : ∀ R S, (BinRel R) → dom (R ⨡ S) ⊆ S := by
  intros R S h_R
  intros x h_x
  _apply_l (dom_prop _ _), h_x, h_ex; elim_exists h_ex, y, h_xy; clear h_x h_ex;
  _apply_l (rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and_ h_and

theorem rng_res_subs : ∀ R S, (BinRel R) → rng (R ⨡ S) ⊆ S := by
  intros R S h_R
  intros y h_y
  _apply_l (rng_prop _ _), h_y, h_ex; elim_exists h_ex, x, h_xy; clear h_y h_ex;
  _apply_l (rest_pr_prop _ _ h_R _ _), h_xy, h_and; elim_and h_and, h_xS, h_yand; elim_and_ h_yand


theorem dom_l_res_eq : ∀ R S, (BinRel R) → (S ⊆ dom R) → dom (R ⨡L S) = S := by
  intros R S h_R h_SR
  apply_l (subs_subs_then_eq _ _); intro_and
  · apply dom_l_res_subs; assumption
  · intros x h_x
    specialize_in_ h_SR, x, h_x
    _apply_l (dom_prop _ _), h_SR, h_ex; elim_exists h_ex, y, h_y; clear h_SR h_ex;
    apply_r (dom_prop _ _); intro_exists y;
    apply_r (l_rest_pr_prop _ _ _ _ _); intro_and
    all_goals assumption

theorem dom_r_res_rq : ∀ R S, (BinRel R) → (S ⊆ rng R) → rng (R ⨡R S) = S := by
  intros R S h_R h_SR
  apply_l (subs_subs_then_eq _ _); intro_and
  · apply rng_r_res_subs; assumption
  · intros y h_y
    specialize_in_ h_SR, y, h_y
    _apply_l (rng_prop _ _), h_SR, h_ex; elim_exists h_ex, x, h_x; clear h_SR h_ex;
    apply_r (rng_prop _ _); intro_exists x;
    apply_r (r_rest_pr_prop _ _ _ _ _); intro_and
    all_goals assumption


theorem dom_res_eq : ∀ R S, (BinRel R) → ((S × S) ⊆ R) → dom (R ⨡ S) = S := by
  intros R S h_R h_SR
  apply_l (subs_subs_then_eq _ _); intro_and
  · apply dom_res_subs; assumption
  · intros x h_x
    have h : (x, x) ∈ S × S := by
      apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    specialize_in_ h_SR, (x, x), h
    apply_r (dom_prop _ _); intro_exists x;
    apply_r (rest_pr_prop _ _ _ _ _); intro_and <;> try intro_and
    all_goals assumption


theorem rng_res_eq : ∀ R S, (BinRel R) → ((S × S) ⊆ R) → rng (R ⨡ S) = S := by
  intros R S h_R h_SR
  apply_l (subs_subs_then_eq _ _); intro_and
  · apply rng_res_subs; assumption
  · intros y h_y
    have h : (y, y) ∈ S × S := by
      apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    specialize_in_ h_SR, (y, y), h
    apply_r (rng_prop _ _); intro_exists y;
    apply_r (rest_pr_prop _ _ _ _ _); intro_and <;> try intro_and
    all_goals assumption


-- id Binary Relation
noncomputable def id_ A := {t ∈ (A × A) | ∃ x, t = (x, x)}




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

theorem id_bin_rel : ∀ A, BinRel (id_ A) := by
  intro A
  intro_in_ t, h_t
  have h := spec_then_P _ _ t h_t
  elim_exists h, a, h_a
  intro_exists a; intro_exists a; assumption


theorem id_bin_rel_on : ∀ A, (id_ A) BinRelOn A := by
  intro A
  apply spec_subs


theorem id_emp : id_ ∅ = ∅ := by
  apply subset_empty_is_empty
  apply bin_rel_pr_el
  · apply id_bin_rel
  · intro x y h_xy
    have h := id_in_l ∅ x y h_xy
    elim_f_neg (empty_set_is_empty x)


theorem id_nemp : ∀ A, (is_nempty A) ↔ (is_nempty (id_ A)) := by
  intro A
  intro_iff
  · intro h
    elim_exists h, x, h_x
    intro_exists (x, x); apply in_id; assumption
  · intro h
    elim_exists h, t, h_t
    revert h_t; apply bin_rel_pr_el; apply id_bin_rel
    intro x y h_xy
    intro_exists x; apply (id_in_l A x y); assumption


theorem id_subs : ∀ A B, (A ⊆ B) ↔ (id_ A) ⊆ (id_ B) := by
  intros A B
  intro_iff
  · intro h_AB
    apply bin_rel_pr_el
    · apply id_bin_rel
    · intros x y h_xy
      rewrite [← id_then_eq A x y h_xy]
      apply_r (id_pr_prop _ _)
      apply h_AB
      apply (id_in_l A x y)
      assumption
  · intro h_idAB
    intros t h_t
    specialize_in_ h_idAB, (t, t), (in_id A t h_t)
    apply_l (id_pr_prop _ _)
    assumption



theorem id_eq_arg : ∀ A B, (A = B) ↔ (id_ A) = (id_ B) := by
  intros A B
  intro_iff
  · intro h_AB
    rw [h_AB]
  · intro h_idAB
    apply_l (subs_subs_then_eq _ _); intro_and
    · apply_r (id_subs _ _)
      rewrite [h_idAB]
      apply subset_refl
    · apply_r (id_subs _ _)
      rewrite [h_idAB]
      apply subset_refl


theorem id_union2 : ∀ A B, (id_ (A ∪ B)) = (id_ A) ∪ (id_ B) := by
  intros A B
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply bin_rel_pr_el; apply id_bin_rel
    intros x y h_xy
    have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rw [← h₃]
    apply_r (union2_prop _ _ _)
    _apply_l (union2_prop _ _ _), h₁, h_or; elim_or h_or, h_a, h_b
    · left; apply_r (id_pr_prop _ _); assumption
    · right; apply_r (id_pr_prop _ _); assumption
  · intro h_t
    _apply_l (union2_prop _ _ _), h_t, h_or; elim_or h_or, h_a, h_b
    · revert h_a; apply bin_rel_pr_el; apply id_bin_rel; intro x y h_xy;
      have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
      rw [← h₃]
      apply_r (id_pr_prop _ _)
      apply left_union2_subs; assumption
    · revert h_b; apply bin_rel_pr_el; apply id_bin_rel; intro x y h_xy;
      have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
      rw [← h₃]
      apply_r (id_pr_prop _ _)
      apply right_union2_subs; assumption


theorem id_inter2 : ∀ A B, (id_ (A ∩ B)) = (id_ A) ∩ (id_ B) := by
  intros A B
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply bin_rel_pr_el; apply id_bin_rel
    intros x y h_xy
    have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rw [← h₃]
    apply_r (inter2_prop _ _ _)
    _apply_l (inter2_prop _ _ _), h₁, h_and; elim_and h_and, h_a, h_b; clear h_and
    intro_and
    · apply_r (id_pr_prop _ _); assumption
    · apply_r (id_pr_prop _ _); assumption
  · intro h_t
    _apply_l (inter2_prop _ _ _), h_t, h_idAB; elim_and h_idAB, h_idA, h_idB; clear h_idAB h_t
    revert h_idB; revert h_idA;
    apply bin_rel_pr_el; apply id_bin_rel; intros x y h_xyA h_xyB
    have h₁ := id_in_l _ _ _ h_xyA; have h₂ := id_in_r _ _ _ h_xyA; have h₃ := id_then_eq _ _ _ h_xyA
    rewrite [← h₃]
    apply_r (id_pr_prop _ _)
    apply_r (inter2_prop _ _ _)
    have h₄ := id_in_l _ _ _ h_xyB
    intro_and <;> assumption


theorem id_differ : ∀ A B, (id_ (A \ B)) = (id_ A) \ (id_ B) := by
  intros A B
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply bin_rel_pr_el; apply id_bin_rel
    intros x y h_xy
    have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rewrite [← h₃]
    apply_r (difference_prop _ _ _); intro_and
    · apply_r (id_pr_prop _ _)
      apply difference_subs_left A B; assumption
    · intro_neg h_idB
      _apply_l (difference_prop _ _ _), h₁, h_AnB; elim_and h_AnB, h_A, h_nB;
      elim_neg h_nB; apply id_in_l B x x; assumption
  · intro h_t
    _apply_l (difference_prop _ _ _), h_t, h_and; elim_and h_and, h_A, h_nB; clear h_t h_and;
    revert h_nB; revert h_A
    apply bin_rel_pr_el; apply id_bin_rel
    intros x y h_xyA h_xynB
    have h₁ := id_in_l _ _ _ h_xyA; have h₂ := id_in_r _ _ _ h_xyA; have h₃ := id_then_eq _ _ _ h_xyA
    rw [← h₃]
    apply_r (id_pr_prop _ _)
    apply_r (difference_prop _ _ _); intro_and
    · assumption
    · intro_neg h_xB
      rewrite [← h₃] at h_xynB
      elim_neg h_xynB
      apply_r (id_pr_prop _ _)
      assumption


theorem id_sym_differ : ∀ A B, (id_ (A △ B)) = (id_ A) △ (id_ B) := by
  intros A B
  rewrite [sym_diff_eq, id_differ, id_union2, id_inter2]
  rw [← sym_diff_eq]


theorem id_compl : ∀ A U, id_ (U \ A) ⊆ compl (id_ A) U U := by
  intros A U
  rw [id_differ]
  intro t h_t
  _apply_l (difference_prop _ _ _), h_t, h_and; elim_and h_and, h_U, h_nA; clear h_t h_and
  revert h_nA; revert h_U;
  apply bin_rel_pr_el; apply id_bin_rel
  intro x y h_xyU h_xynA
  have h₁ := id_in_l _ _ _ h_xyU; have h₂ := id_in_r _ _ _ h_xyU; have h₃ := id_then_eq _ _ _ h_xyU
  rw [← h₃]
  apply_r (difference_prop _ _ _); intro_and
  · apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
  · intro_neg h_xxid
    elim_neg h_xynA
    rw [← h₃]; assumption


theorem id_pred_f : ∀ x y z, (y = id_ x) → (z = id_ x) → (y = z) := by
  intros x y z h_xy h_xz
  rw [h_xy, h_xz]


theorem id_union : ∀ S, id_ (⋃ S) = ⋃ (ReplImg{dd | ∃ A ∈ S, dd = id_ A} of (id_pred_f)) := by
  intros S
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply bin_rel_pr_el; apply id_bin_rel
    intros x y h_xy
    have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rewrite [← h₃]
    _apply_l (union_set_is_union _ _), h₂, h_ex; elim_exists_in h_ex, R, h_Rin, h_R; clear h₂ h_ex
    apply_r (union_set_is_union _ _)
    intro_exists_in (id_ R)
    · apply_r (repl_set_is_repl _ _ _ _)
      intro_exists_in R
      · assumption
      · rfl
    · apply_r (id_pr_prop _ _)
      rw [h₃]; assumption
  · intro h_t
    _apply_l (union_set_is_union _ _), h_t, h_ex; elim_exists_in h_ex, R, h_Rin, h_R; clear h_t h_ex
    _apply_l (repl_set_is_repl _ _ _ _), h_Rin, h_ex; elim_exists_in h_ex, A, h_Ain, h_A; clear h_ex h_Rin;
    rewrite [h_A] at h_R; clear h_A
    revert h_Ain h_R; apply bin_rel_pr_el; apply id_bin_rel
    intros x y h_xy h_A
    have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rewrite [← h₃]
    apply_r (id_pr_prop _ _)
    apply_r (union_set_is_union _ _)
    intro_exists_in A
    · assumption
    · assumption


theorem id_inter : ∀ S, id_ (⋂ S) = ⋂ (ReplImg{dd | ∃ R ∈ S, dd = id_ R} of (id_pred_f)) := by
  intros S
  let M := ReplImg{ dd | ∃ R ∈ S, dd = id_ R } of id_pred_f
  apply set_extensionality_ax; intro t;
  intro_iff
  · intro h_t
    have h := id_union S
    have h₁ := interset_sub_union S
    _apply_l (id_subs (⋂ S) (⋃ S)), h₁, h_subs; specialize_in_ h_subs, t, h_t
    rw [h] at h_subs
    apply_r (interset_is_interset _ _); intro_and
    · assumption
    · intro id_R h_idR
      clear h₁ h h_subs
      _apply_l (repl_set_is_repl _ _ _ _), h_idR, h_ex; elim_exists_in h_ex, T, h_Tin, h_T; clear h_idR h_ex
      rewrite [h_T]; clear h_T
      revert h_Tin h_t; apply bin_rel_pr_el; apply id_bin_rel
      intro x y h_xy h_TS
      have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
      rewrite [← h₃]
      apply_r (id_pr_prop _ _)
      have h₄ := interset_all_in S x h₁
      specialize_in_ h₄, T, h_TS
      assumption
  · intro h_t
    _apply_l (interset_is_interset _ _), h_t, h_forinunN; elim_and h_forinunN, h_inUn, h_for; clear h_forinunN h_t;
    _apply_l (union_set_is_union _ _), h_inUn, h_ex; elim_exists_in h_ex, idR, h_idRin, h_idR; clear h_inUn h_ex
    _apply_l (repl_set_is_repl _ _ _ _), h_idRin, h_ex; elim_exists_in h_ex, R, h_Rin, h_R; clear h_idRin h_ex
    rewrite [h_R] at h_idR; clear h_R
    revert h_for; revert h_Rin; revert h_idR; apply bin_rel_pr_el; apply id_bin_rel
    intros x y h_xy h_RS h_for
    have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rewrite [← h₃]
    apply_r (id_pr_prop _ _)
    apply_r (interset_is_interset _ _); intro_and
    · apply_r (union_set_is_union _ _)
      intro_exists_in R <;> assumption
    · intro_in_ R_0, h_R_0
      have h : (id_ R_0) ∈ M := by
        apply_r (repl_set_is_repl _ _ _ _)
        intro_exists_in R_0
        · assumption
        · rfl
      specialize_in_ h_for, id_ R_0, h
      apply id_in_l R_0 x y; assumption


theorem id_l_rest : ∀ A S, (S ⊆ A) → (id_ A) ⨡L S = (id_ S) := by
  intros A S h_SA
  have h : BinRel (id_ A) := by
    apply id_bin_rel
  apply bin_rel_pr_eq
  · apply l_rest_bin_rel; apply id_bin_rel
  · apply id_bin_rel
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (l_rest_pr_prop _ _ h _ _), h_xy, h_and; elim_and h_and, h_xS, h_xy_id; clear h_and
    have h₁ := id_in_l _ _ _ h_xy_id; have h₂ := id_in_r _ _ _ h_xy_id; have h₃ := id_then_eq _ _ _ h_xy_id
    rewrite [← h₃]
    apply_r (id_pr_prop _ _)
    assumption
  · have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rewrite [← h₃]
    apply_r (l_rest_pr_prop _ _ _ _ _); intro_and
    · assumption
    · apply_r (id_pr_prop _ _)
      apply h_SA
      assumption
    apply id_bin_rel



theorem id_r_rest : ∀ A S, (S ⊆ A) → (id_ A) ⨡R S = (id_ S) := by
  intros A S h_SA
  have h : BinRel (id_ A) := by
    apply id_bin_rel
  apply bin_rel_pr_eq
  · apply r_rest_bin_rel; apply id_bin_rel
  · apply id_bin_rel
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (r_rest_pr_prop _ _ h _ _), h_xy, h_and; elim_and h_and, h_xS, h_xy_id; clear h_and
    have h₁ := id_in_l _ _ _ h_xy_id; have h₂ := id_in_r _ _ _ h_xy_id; have h₃ := id_then_eq _ _ _ h_xy_id
    rewrite [h₃]
    apply_r (id_pr_prop _ _)
    assumption
  · have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rewrite [← h₃]
    apply_r (r_rest_pr_prop _ _ _ _ _); intro_and
    · assumption
    · apply_r (id_pr_prop _ _)
      apply h_SA
      assumption
    apply id_bin_rel

theorem id_rest : ∀ A S, (S ⊆ A) → (id_ A) ⨡ S = (id_ S) := by
  intros A S h_SA
  have h : BinRel (id_ A) := by
    apply id_bin_rel
  apply bin_rel_pr_eq
  · apply rest_bin_rel; apply id_bin_rel
  · apply id_bin_rel
  intro x y; intro_iff <;> intro h_xy
  · _apply_l (rest_pr_prop _ _ h _ _), h_xy, h_and; elim_and h_and, h_xS, h_xy_id; clear h_and
    elim_and h_xy_id, h_yS, h_xy_idA; clear h_xy_id
    have h₁ := id_in_l _ _ _ h_xy_idA; have h₂ := id_in_r _ _ _ h_xy_idA; have h₃ := id_then_eq _ _ _ h_xy_idA
    rewrite [h₃]
    apply_r (id_pr_prop _ _)
    assumption
  · have h₁ := id_in_l _ _ _ h_xy; have h₂ := id_in_r _ _ _ h_xy; have h₃ := id_then_eq _ _ _ h_xy
    rewrite [← h₃]
    apply_r (rest_pr_prop _ _ _ _ _); intro_and
    · assumption
    · intro_and
      · assumption
      · apply_r (id_pr_prop _ _)
        apply h_SA
        assumption
    apply id_bin_rel

theorem id_dom : ∀ A, dom (id_ A) = A := by
  intros A
  apply set_extensionality_ax; intro t; intro_iff <;> intro h_t
  · _apply_l (dom_prop _ _), h_t, h_ex; elim_exists h_ex, y, h_y; clear h_ex h_t
    have h₁ := id_in_l _ _ _ h_y; have h₂ := id_in_r _ _ _ h_y; have h₃ := id_then_eq _ _ _ h_y
    assumption
  · apply_r (dom_prop _ _)
    intro_exists t
    apply_r (id_pr_prop _ _)
    assumption



theorem id_rng : ∀ A, rng (id_ A) = A := by
  intros A
  apply set_extensionality_ax; intro t; intro_iff <;> intro h_t
  · _apply_l (rng_prop _ _), h_t, h_ex; elim_exists h_ex, x, h_x; clear h_ex h_t
    have h₁ := id_in_l _ _ _ h_x; have h₂ := id_in_r _ _ _ h_x; have h₃ := id_then_eq _ _ _ h_x
    assumption
  · apply_r (rng_prop _ _)
    intro_exists t; apply_r (id_pr_prop _ _); assumption



-- Reverse Binary Relation
noncomputable def inv (R : Set) : Set := {z ∈ (rng R) × (dom R) | ∃ x y, (z = (y, x) ∧ (x . R . y))}
notation:max R:1024 "⁻¹"  => inv R




theorem inv_prop :
∀ R, (BinRel R) → ∀ t, (t ∈ R⁻¹) ↔ (∃ x y, t = (y, x) ∧ (x . R . y)) := by
  intros R h_R t
  intro_iff
  · intro h_t
    have h := spec_then_P _ _ t h_t
    assumption
  · intro h_t
    apply elem_P_then_spec
    · elim_exists h_t, x, h_x; elim_exists h_x, y, h_y;
      clear h_t h_x; elim_and h_y, h_txy, h_xyR; clear h_y
      rewrite [h_txy]
      apply_r (cart_prod_pr_prop _ _ _ _); intro_and
      · apply bin_rel_elem_rng <;> assumption
      · apply bin_rel_elem_dom <;> assumption
    · assumption

theorem inv_pr_prop: ∀ R, (BinRel R) → ∀ x y, (x . R . y) ↔ (y . (R⁻¹) . x) := by
  intros R h_R
  intros x y
  intro_iff
  · intro h_xy
    apply_r (inv_prop R h_R (y, x))
    intro_exists x; intro_exists y; intro_and
    · rfl
    · assumption
  · intro h_yx
    _apply_l (inv_prop R h_R (y, x)), h_yx, h_ex;
    elim_exists h_ex, a, h_a; elim_exists h_a, b, h_b; elim_and h_b, h_yxba, h_abR; clear h_yx h_ex h_a h_b
    _apply_r (ord_pr_prop _ _ _ _), h_yxba, h_and; elim_and h_and, h_yb, h_xa; clear h_yxba h_and;
    rewrite [h_xa, h_yb]; assumption


theorem inv_bin_rel : ∀ R, (BinRel R) → (BinRel (R⁻¹)) := by
  intro R h_R
  intro t h_t
  _apply_l (inv_prop _ h_R _), h_t, h_ex;
  elim_exists h_ex, x, h_x; elim_exists h_x, y, h_y;
  intro_exists y; intro_exists x; elim_and_ h_y

theorem inv_in_rel_btw : ∀ R A B, (R BinRelBtw A AND B) → (R⁻¹ BinRelBtw B AND A) := by
  intro R A B h_RAB
  intro t h_t
  have h_R := bin_rel_btw_is_bin_rel R A B h_RAB
  _apply_l (inv_prop _ h_R _), h_t, h_ex;
  elim_exists h_ex, x, h_x; elim_exists h_x, y, h_y; elim_and h_y, h_tyx, h_xyR; clear h_t h_ex h_x h_y
  rw [h_tyx]
  specialize_in_ h_RAB, (x, y), h_xyR
  _apply_l (cart_prod_pr_prop _ _ _ _), h_RAB, h_and; elim_and h_and, h_A, h_B; clear h_and;
  apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption


theorem inv_emp : ∅⁻¹ = ∅ := by
  apply subset_empty_is_empty
  apply bin_rel_pr_el; apply inv_bin_rel; apply emp_bin_rel
  intro x y h_xy;
  _apply_r (inv_pr_prop _ (emp_bin_rel) _ _), h_xy, h_emp
  elim_f_neg (empty_set_is_empty (y, x))


theorem inv_nemp : ∀ R, (BinRel R) → ((is_nempty R) ↔ (is_nempty (R⁻¹))) := by
  intro R h_R
  intro_iff
  · intro h_r
    elim_exists h_r, t, h_t; clear h_r
    revert h_t; apply bin_rel_pr_el
    · assumption
    · intros x y h_xy
      intro_exists (y, x)
      apply_l (inv_pr_prop R h_R _ _)
      assumption
  · intro h_r
    elim_exists h_r, t, h_t; clear h_r;
    revert h_t; apply bin_rel_pr_el;
    · apply inv_bin_rel; assumption
    · intros y x h_yx
      intro_exists (x, y)
      apply_r (inv_pr_prop R h_R _ _)
      assumption


theorem inv_subs : ∀ P Q, (BinRel P) → (BinRel Q) → ((P ⊆ Q) ↔ (P⁻¹ ⊆ Q⁻¹)) := by
  intros P Q h_P h_Q
  intro_iff
  · intro h_PQ
    apply bin_rel_pr_el; apply inv_bin_rel; assumption
    intros y x h_yx
    apply_l (inv_pr_prop Q h_Q _ _)
    apply h_PQ
    apply_r (inv_pr_prop P h_P _ _)
    assumption
  · intro h_PQ
    apply bin_rel_pr_el; assumption
    intros x y h_xy
    apply_r (inv_pr_prop Q h_Q _ _)
    apply h_PQ
    apply_l (inv_pr_prop P h_P _ _)
    assumption


theorem inv_eq_args : ∀ P Q, (BinRel P) → (BinRel Q) → ((P = Q) ↔ (P⁻¹) = (Q⁻¹)) := by
  intros P Q h_P h_Q
  intro_iff
  · intro h_PQ
    rw [h_PQ]
  · intro h_PQ
    apply_l (subs_subs_then_eq _ _); intro_and
    · apply_r (inv_subs _ _ h_P h_Q)
      rewrite [h_PQ]; apply subset_refl
    · apply_r (inv_subs _ _ h_Q h_P)
      rewrite [h_PQ]; apply subset_refl

theorem inv_union2 : ∀ P Q, (BinRel P) → (BinRel Q) → ((P ∪ Q)⁻¹ = (P⁻¹) ∪ (Q⁻¹)) := by
  intro P Q h_P h_Q
  have h : BinRel (P ∪ Q) := by
    apply bin_rel_union2 <;> assumption
  apply set_extensionality_ax; intro t;
  intro_iff
  · apply bin_rel_pr_el; apply inv_bin_rel; apply h
    intro x y h_xy
    _apply_r (inv_pr_prop (P ∪ Q) h _ _), h_xy, h_yx; clear h_xy;
    apply_r (union2_prop _ _ _)
    _apply_l (union2_prop _ _ _), h_yx, h_yx_or; elim_or h_yx_or, h_yxP, h_yxQ;
    · left; apply_l (inv_pr_prop P h_P _ _); assumption
    · right; apply_l (inv_pr_prop Q h_Q _ _); assumption
  · intro h_t
