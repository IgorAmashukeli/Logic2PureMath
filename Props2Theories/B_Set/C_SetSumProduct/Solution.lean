import Props2Theories.A_Logic.C_Equality.Task
import Props2Theories.A_Logic.B_Quants.Task
import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.SetSynt

noncomputable def ord_pr_set (a b : Set) := {{a}, {a, b}}
notation (priority := high) "(" a ", " b ")" => ord_pr_set a b


theorem ord_pr_prop : ∀ a b c d, a = c ∧ b = d ↔ (a, b) = (c, d) := by
  intros a b c d
  intro_iff
  · intro h_abcd
    elim_and h_abcd, h_ac, h_bd
    rw [h_ac, h_bd]
  · intro h_abcd
    have h : {a} ∈ (a, b) := by apply left_un_pr
    conv at h =>
      rhs; rw [h_abcd]
    _apply_l (unord_pr_set_is_unord_pr {c} {c, d} {a}), h, h_eq
    have h_ac : a = c := by
        elim_or h_eq, h_eq_ac, h_eq_acd
        · apply_r_ sing_equal a c
        · apply equal_symm; apply_l (singleton_a_elem_is_a a c)
          rewrite [h_eq_acd]; apply left_un_pr
    clear h h_eq
    intro_and <;> try assumption
    rewrite [h_ac] at h_abcd
    have h : {c, b} ∈ (c, b) := by apply right_un_pr
    rewrite [h_abcd] at h
    _apply_l (unord_pr_set_is_unord_pr {c} {c, d} {c, b}), h, h_eq
    elim_or h_eq, h_eq_cbc, h_eqcbcd
    · have h_bc : b = c := by
        apply_l (singleton_a_elem_is_a c b); rewrite [←h_eq_cbc]
        apply right_un_pr
      rewrite [h_bc] at h_abcd h ⊢
      have h_cd : {c, d} ∈ (c , d) := by apply right_un_pr
      rewrite [← h_abcd] at h_cd
      _apply_l (unord_pr_set_is_unord_pr {c} {c} {c, d}), h_cd, h_eq
      elim_or h_eq, h_ced, h_ced <;> apply equal_symm <;>
      apply_l (singleton_a_elem_is_a c d) <;>  rewrite [← h_ced] <;>
      apply right_un_pr
    · have h : d ∈ {c, b} := by
        rewrite [h_eqcbcd]; apply right_un_pr
      _apply_l (unord_pr_set_is_unord_pr c b d), h, h_eq
      elim_or h_eq, h_dc, h_db
      · have g : b ∈ {c, d} := by
          rewrite [← h_eqcbcd]; apply right_un_pr
        _apply_l (unord_pr_set_is_unord_pr c d b), g, g_eq
        elim_or g_eq, g_bc, g_bd <;> try assumption
        rw [h_dc, g_bc]
      · apply equal_symm
        assumption


theorem int_ord_pr : ∀ a b, ⋂ (a, b) = {a} := by
  intros a b
  have h₁ : {a} ∈ (a, b) := by apply left_un_pr
  have h : ∃ t, t ∈ (a, b) := by intro_exists {a}; apply h₁
  have g := intersection_non_empty (a, b) h
  apply set_extensionality_ax; intro x
  intro_iff
  · intro h_xab
    _apply_l (g x), h_xab, h_yab
    specialize_in_ h_yab, {a}, h₁
    assumption
  · intro h_xa
    _apply_l (singleton_a_elem_is_a a x), h_xa, h_xeqa
    rewrite [h_xeqa]
    specialize g a
    apply_r g
    intro_in_ y, h_y
    _apply_l (unord_pr_set_is_unord_pr {a} {a, b} y), h_y, h_yor
    elim_or h_yor, h_ya, h_ya <;> rewrite [h_ya] <;> apply left_un_pr


theorem union_pair_is_all_coords : ∀ a b, ⋃ (a, b) = {a, b} := by
  intros a b
  apply set_extensionality_ax; intro x
  intro_iff
  · intro h_xab
    _apply_l (union_set_is_union _ _), h_xab, h
    apply_r (unord_pr_set_is_unord_pr a b x)
    elim_exists_in h, t, h_tin, h_t; clear h
    _apply_l (unord_pr_set_is_unord_pr _ _ _), h_tin, h_teq
    elim_or h_teq, h_teqa, h_teqa <;> rewrite [h_teqa] at h_t
    · left; apply_l_ (singleton_a_elem_is_a a x)
    · apply_l_ (unord_pr_set_is_unord_pr a b x)
  · intro h_xab
    _apply_l (unord_pr_set_is_unord_pr a b x), h_xab, h_xa_or_b
    apply_r (union_set_is_union _ _)
    intro_exists_in {a, b}
    · apply right_un_pr
    · apply_r_ (unord_pr_set_is_unord_pr a b x)


theorem coordinates_snd_corr_lemma : ∀ a b, {y ∈ ⋃ (a, b) | ∃ x, (a, b) = (x, y)} = {b} := by
  intros a b
  rewrite [union_pair_is_all_coords]
  apply set_extensionality_ax; intro x
  intro_iff
  · intro h_x
    _apply_l (spec_is_spec _ _ x), h_x, h
    elim_and h, h_in, h_eq
    elim_exists h_eq, s, h_s
    _apply_r (ord_pr_prop _ _ _ _), h_s, h_eqs
    elim_and h_eqs, h_eqas, h_eqbx
    rewrite [h_eqbx]
    apply x_in_singl_x
  · intro h_xb
    _apply_l (singleton_a_elem_is_a _ _), h_xb, h_xeqb
    rewrite [h_xeqb]
    apply elem_P_then_spec
    · apply right_un_pr
    · intro_exists a; rfl


noncomputable def fst_coor (pr : Set) : Set := ⋃ (⋂ pr)
noncomputable def snd_coor (pr : Set) : Set := ⋃ {y ∈ ⋃ pr | ∃ x, pr = (x, y)}
notation:max "π₁ " pr:1024 => fst_coor pr
notation:max "π₂ " pr:1024 => snd_coor pr


theorem pi1_left : ∀ a b, π₁ (a, b) = a := by
  intros a b
  have h : ⋃ (⋂ (a, b)) = a := by
    rewrite [int_ord_pr]
    apply union_singleton
  assumption


theorem pi2_right : ∀ a b, π₂ (a, b) = b := by
  intros a b
  have h :  ⋃ {y ∈ ⋃ (a, b) | ∃ x, (a, b) = (x, y)} = b := by
    rewrite [coordinates_snd_corr_lemma]
    apply union_singleton
  assumption


theorem ord_pr_in_boolbool : ∀ A B, ∀ a ∈ A, ∀ b ∈ B, (a, b) ∈ 𝒫 (𝒫 (A ∪ B)) := by
  intros A B
  intro_in_ a, h_a
  intro_in_ b, h_b
  apply_r (boolean_set_is_boolean _ _)
  apply unordered_pair_subs <;> apply_r (boolean_set_is_boolean _ _)
  · apply (subset_trans _ A _) <;> try apply left_union2_subs
    apply singl_subs; assumption
  · intro_in_ x, h_x
    apply_r (union2_prop _ _ _)
    _apply_l (unord_pr_set_is_unord_pr _ _ _), h_x, h
    elim_or h, h_xeq, h_xeq <;> rewrite [h_xeq]
    · left_
    · right_


noncomputable def cart_prod (A : Set) (B : Set) : Set := {z ∈ 𝒫 (𝒫 (A ∪ B)) | ∃ x ∈ A, ∃ y ∈ B, z = (x, y)}
notation:max A:1024 " × " B:1024 => cart_prod A B


theorem cart_prod_prop : ∀ A B pr, pr ∈ (A × B) ↔ (∃ x ∈ A, ∃ y ∈ B, pr = (x, y)) := by
  intros A B pr
  intro_iff
  · apply spec_then_P
  · intro h
    apply (elem_P_then_spec) <;> try assumption
    elim_exists_in h, x, h_xin, h_xpr
    elim_exists_in h_xpr, y, h_yin, h_ypr
    rewrite [h_ypr]
    apply ord_pr_in_boolbool <;> assumption


theorem cart_prod_pr_prop : ∀ A B a b, (a, b) ∈ (A × B) ↔ (a ∈ A ∧ b ∈ B) := by
  intros A B a b
  intro_iff
  · intro h
    have h_ab := (spec_then_P _ _ _) h
    elim_exists_in h_ab, x, h_xin, h_xpr
    elim_exists_in h_xpr, y, h_yin, h_ypr
    _apply_r (ord_pr_prop _ _ _ _), h_ypr, h_axby; elim_and h_axby, h_ax, h_by
    rewrite [h_ax, h_by]
    intro_and <;> assumption
  · intro h
    elim_and h, h_a, h_b
    apply_r (cart_prod_prop _ _ _)
    intro_exists_in a; try assumption
    intro_exists_in b; try assumption
    rfl


theorem cart_pi1_in : ∀ A B pr, pr ∈ A × B → π₁ pr ∈ A := by
  intros A B pr h_pr
  _apply_l (cart_prod_prop _ _ _), h_pr, h
  elim_exists_in h, x, h_xin, h_xpr
  elim_exists_in h_xpr, y, h_yin, h_ypr
  rewrite [h_ypr, pi1_left]
  assumption


theorem cart_pi2_in : ∀ A B pr, pr ∈ A × B → π₂ pr ∈ B := by
  intros A B pr h_pr
  _apply_l (cart_prod_prop _ _ _), h_pr, h
  elim_exists_in h, x, h_xin, h_xpr
  elim_exists_in h_xpr, y, h_yin, h_ypr
  rewrite [h_ypr, pi2_right]
  assumption


theorem cart_pr_pi12 : ∀ A B pr, pr ∈ A × B → pr = (π₁ pr, π₂ pr) := by
  intros A B pr h_pr_AB
  _apply_l (cart_prod_prop _ _ _), h_pr_AB, h
  elim_exists_in h, x, h_xin, h_xpr
  elim_exists_in h_xpr, y, h_yin, h_ypr
  rw [h_ypr, pi1_left, pi2_right]


theorem cart_eq_pi_eq_pr : ∀ A B, ∀ pr₁ pr₂ ∈ A × B, (π₁ pr₁ = π₁ pr₂) → (π₂ pr₁ = π₂ pr₂) → pr₁ = pr₂ := by
  intros A B
  intro_in_ pr₁, h_pr₁
  intro_in_ pr₂, h_pr₂
  intro hpi₁ h_pi₂
  have h₁ := cart_pr_pi12 A B pr₁ h_pr₁
  have h₂ := cart_pr_pi12 A B pr₂ h_pr₂
  rewrite [h₁, h₂]
  apply_l (ord_pr_prop _ _ _ _)
  intro_and <;> assumption


theorem cart_prop_pr_el (P : Set → Prop) : ∀ A B, (∀ x ∈ A, ∀ y ∈ B, P (x, y)) → ∀ t ∈ (A × B), P t := by
  intros A B h_AB
  intro_in_ t, h_t
  _apply_l (cart_prod_prop _ _ _), h_t, h_ex
  elim_exists_in h_ex, N, h_Nin, h_N; clear h_ex
  elim_exists_in h_N, M, h_Min, h_M; clear h_N
  rewrite [h_M] at h_t ⊢
  apply h_AB <;> assumption


theorem cart_prop_el_pr (P : Set → Prop) : ∀ A B, (∀ t ∈ (A × B), P t) → ((∀ x ∈ A, ∀ y ∈ B, P (x, y))) := by
  intros A B h_AB
  intro_in_ x, h_x
  intro_in_ y, h_y
  apply h_AB
  apply_r (cart_prod_pr_prop _ _ _ _)
  intro_and <;> assumption


theorem cart_empty_l : ∀ A, (∅ × A) = ∅ := by
  intro A
  apply subset_empty_is_empty
  apply cart_prop_pr_el
  intro_in_ x, h_x; intro_in_ y, h_y;
  (have h:= empty_set_is_empty x); elim_f_neg h


theorem cart_empty_r : ∀ A, (A × ∅) = ∅ := by
  intro A
  apply subset_empty_is_empty
  apply cart_prop_pr_el
  intro_in_ x, h_x; intro_in_ y, h_y;
  (have h:= empty_set_is_empty y); elim_f_neg h


theorem lr_nempty_cart : ∀ A B, (is_nempty A) → (is_nempty B) → (is_nempty (A × B)) := by
  intro A B h_A h_B
  elim_exists h_A, x, h_x; elim_exists h_B, y, h_y
  intro_exists (x, y)
  apply_r (cart_prod_pr_prop _ _ _ _) <;> intro_and <;> assumption


theorem cart_nemp_eq : ∀ A B C D : Set, (is_nempty A) → (is_nempty B) →
(((A × B) = (C × D)) ↔ ((A = C) ∧ (B = D))) := by
  intros A B C D h_A h_B
  have h_ABnemp := lr_nempty_cart A B h_A h_B
  intro_iff
  · intro h_ABCD
    have h_CDnemp : is_nempty (C × D) := by rewrite [← h_ABCD]; assumption
    elim_exists h_CDnemp, v, h_v
    _apply_l (cart_prod_prop _ _ _), h_v, h_vin; clear h_CDnemp
    elim_exists_in h_vin, u, h_uin, h_u; clear h_vin
    elim_exists_in h_u, r, h_rin, h_r; clear h_u
    elim_exists h_A, x, h_x
    elim_exists h_B, y, h_y
    intro_and
    · apply (set_extensionality_ax); intro t; intro_iff
      · intro h_t
        have h : t ∈ A ∧ y ∈ B := by intro_and <;> assumption
        _apply_r (cart_prod_pr_prop A B t y), h, h_ty
        rewrite [h_ABCD] at h_ty
        _apply_l (cart_prod_pr_prop _ _ _ _), h_ty, h_tyCD
        elim_and_ h_tyCD
      · intro h_t
        have h : (t, r) ∈ (C × D) := by apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
        rewrite [← h_ABCD] at h
        _apply_l (cart_prod_pr_prop _ _ _ _), h, h_tAB
        elim_and_ h_tAB
    · apply (set_extensionality_ax); intro t; intro_iff
      · intro h_t
        have h : (x, t) ∈ A × B := by apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
        rewrite [h_ABCD] at h
        _apply_l (cart_prod_pr_prop _ _ _ _), h, h_tCD
        elim_and_ h_tCD
      · intro h_t
        have h : (u, t) ∈ C × D := by apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
        rewrite [← h_ABCD] at h
        _apply_l (cart_prod_pr_prop _ _ _ _), h, h_tAB
        elim_and_ h_tAB
  · intro h_AC_BD; elim_and h_AC_BD, h_AC, h_BD; rw [h_AC, h_BD]


theorem cart_prod_mon_l : ∀ A B C, A ⊆ C → (A × B) ⊆ C × B := by
  intros A B C h_AC
  apply cart_prop_pr_el
  intro_in_ x, h_x
  intro_in_ y, h_y
  apply_r (cart_prod_pr_prop _ _ _ _)
  intro_and <;> try apply h_AC
  all_goals assumption


theorem cart_prod_mon_r : ∀ A B C, (B ⊆ C) → (A × B) ⊆ (A × C) := by
  intros A B C h_BC
  apply cart_prop_pr_el
  intro_in_ x, h_x
  intro_in_ y, h_y
  apply_r (cart_prod_pr_prop _ _ _ _)
  intro_and <;> try apply h_BC
  all_goals assumption


theorem cart_prod_inter_subs : ∀ A B C D, (A × B) ∩ (C × D) ⊆ (A ∩ C) × (B ∩ D) := by
  intros A B C D
  intro_in_ t, h_t
  _apply_l (inter2_prop _ _ _), h_t, h_int; elim_and h_int, h_intab, h_intcd; clear h_t h_int
  revert h_intcd h_intab
  apply cart_prop_pr_el
  intro_in_ x, h_x
  intro_in_ y, h_y
  intro h_xy_cd
  _apply_l (cart_prod_pr_prop _ _ _ _), h_xy_cd, h_CD; elim_and h_CD, h_C, h_D; clear h_CD h_xy_cd
  apply_r (cart_prod_pr_prop _ _ _ _);
  intro_and <;> apply_r (inter2_prop _ _ _) <;> intro_and <;> assumption


theorem cart_inter2_distrib : ∀ A B C D, (A × B) ∩ (C × D) = (A ∩ C) × (B ∩ D) := by
  intros A B C D
  apply_l (subs_subs_then_eq _ _); intro_and; try apply cart_prod_inter_subs
  apply cart_prop_pr_el
  intro_in_ x, h_x; intro_in_ y, h_y
  _apply_l (inter2_prop _ _ _), h_x, h_xin; elim_and h_xin, h_xa, h_xc; clear h_x h_xin
  _apply_l (inter2_prop _ _ _), h_y, h_yin; elim_and h_yin, h_yb, h_yc; clear h_y h_yin
  apply_r (inter2_prop _ _ _); intro_and
  <;> apply_r (cart_prod_pr_prop _ _ _ _)
  <;> intro_and <;> assumption


theorem cart_union2_distrib_l : ∀ A B C, (A × (B ∪ C)) = (A × B) ∪ (A × C) := by
  intros A B C
  apply_l (subs_subs_then_eq _ _); intro_and;
  · apply cart_prop_pr_el
    intro_in_ x, h_x; intro_in_ y, h_y;
    _apply_l (union2_prop _ _ _), h_y, h_yin; apply_r (union2_prop _ _ _)
    elim_or h_yin, h_yB, h_yC
    · left; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    · right; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
  · intro_in_ t, h_t
    _apply_l (union2_prop _ _ _), h_t, h
    elim_or h, h_Ain, h_Ain
    <;> revert h_Ain
    <;> apply cart_prop_pr_el
    <;> intro_in_ x, h_x <;> intro_in_ y, h_y
    <;> apply_r (cart_prod_pr_prop _ _ _ _)
    <;> intro_and
    <;> try assumption
    all_goals apply_r (union2_prop _ _ _)
    left_; right_


theorem cart_union2_distrib_r : ∀ A B C, ((A ∪ B) × C) = (A × C) ∪ (B × C) := by
  intros A B C
  apply_l (subs_subs_then_eq _ _); intro_and;
  · apply cart_prop_pr_el
    intro_in_ x, h_x; intro_in_ y, h_y;
    _apply_l (union2_prop _ _ _), h_x, h_xin; apply_r (union2_prop _ _ _)
    elim_or h_xin, h_xB, h_xC
    · left; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    · right; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
  · intro_in_ t, h_t
    _apply_l (union2_prop _ _ _), h_t, h
    elim_or h, h_Ain, h_Ain
    <;> revert h_Ain
    <;> apply cart_prop_pr_el
    <;> intro_in_ x, h_x <;> intro_in_ y, h_y
    <;> apply_r (cart_prod_pr_prop _ _ _ _)
    <;> intro_and
    <;> try assumption
    all_goals apply_r (union2_prop _ _ _)
    left_; right_


theorem cart_diff_distrib_l :  ∀ A B C, (A × (B \ C)) = (A × B) \ (A × C) := by
  intros A B C
  apply_l (subs_subs_then_eq _ _); intro_and;
  · apply cart_prop_pr_el
    intro_in_ x, h_x; intro_in_ y, h_y;
    _apply_l (difference_prop _ _ _), h_y, h_yin; apply_r (difference_prop _ _ _)
    elim_and h_yin, h_yinB, h_yinC
    intro_and
    · apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    · intro_neg h_inAC;
      _apply_l (cart_prod_pr_prop _ _ _ _), h_inAC, h_inA_inC
      elim_and h_inA_inC, h_inA, h_inC
      elim_neg_ h_yinC
  · intro_in_ t, h_t
    _apply_l (difference_prop _ _ _), h_t, h
    elim_and h, h_inAB, h_ninAC
    revert h_ninAC
    revert h_inAB
    apply cart_prop_pr_el
    <;> intro_in_ x, h_x <;> intro_in_ y, h_y <;> intro h_nxy
    <;> apply_r (cart_prod_pr_prop _ _ _ _) <;> intro_and
    <;> try assumption
    apply_r (difference_prop _ _ _); intro_and <;> try assumption
    intro_neg h_inC; elim_neg h_nxy;
    apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption


theorem cart_comp_cl : ∀ U V A B, (A ⊆ U) → (B ⊆ V) → ((U × V) \ (A × B)) = ((U \ A) × (V \ B)) ∪ ((U \ A) × B) ∪ (A × (V \ B)) := by
  intro U V A B h_AU h_BV
  apply (set_extensionality_ax _ _); intro t;
  intro_iff
  · intro h_t
    _apply_l (difference_prop _ _ _), h_t, h_int; elim_and h_int, h_inUV, h_ninAB; clear h_t h_int
    revert h_ninAB
    revert h_inUV
    apply cart_prop_pr_el
    intro_in_ x, h_x; intro_in_ y, h_y
    intro h_ninAB
    have h := union2_to_universum_cl U A h_AU; rewrite [← h] at h_x
    have g := union2_to_universum_cl V B h_BV; rewrite [← g] at h_y
    _apply_l (union2_prop _ _ _), h_x, h_xA_UA; _apply_l (union2_prop _ _ _), h_y, h_yb_VB
    apply_r (union2_prop _ _ _)
    elim_or h_xA_UA, h_xA, h_xUA <;> elim_or h_yb_VB, h_yB, h_yVB
    · elim_false; elim_neg h_ninAB; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    · right; apply_r (union2_prop _ _ _); right; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    · right; apply_r (union2_prop _ _ _); left; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
    · left; apply_r (cart_prod_pr_prop _ _ _ _); intro_and <;> assumption
  · intro h_t
    _apply_l (union2_prop _ _ _), h_t, h_int; clear h_t
    elim_or h_int, h_inUAVB, h_other
    · revert h_inUAVB
      apply cart_prop_pr_el
      intro_in_ x, h_x; intro_in_ y, h_y
      apply_r (difference_prop _ _ _); intro_and
      · apply_r (cart_prod_pr_prop _ _ _ _); intro_and
        · apply (difference_subs_left U A); assumption
        · apply (difference_subs_left V B); assumption
      · intro_neg h_inAB
        _apply_l (cart_prod_pr_prop _ _ _ _), h_inAB, h_in; elim_and h_in, h_inA, h_inB; clear h_in
        elim_f_neg spec_then_P _ _ x h_x
    · _apply_l (union2_prop _ _ _), h_other, h_int; clear h_other
      elim_or h_int, h_inUAB, h_inAVB
      · revert h_inUAB
        apply cart_prop_pr_el
        intro_in_ x, h_x; intro_in_ y, h_y
        apply_r (difference_prop _ _ _); intro_and
        · apply_r (cart_prod_pr_prop _ _ _ _); intro_and
          · apply (difference_subs_left U A); assumption
          · apply h_BV; assumption
        · intro_neg h_inAB
          _apply_l (cart_prod_pr_prop _ _ _ _), h_inAB, h_in; elim_and h_in, h_inA, h_inB; clear h_in
          elim_f_neg spec_then_P _ _ x h_x
      · revert h_inAVB
        apply cart_prop_pr_el
        intro_in_ x, h_x; intro_in_ y, h_y
        apply_r (difference_prop _ _ _); intro_and
        · apply_r (cart_prod_pr_prop _ _ _ _); intro_and
          · apply h_AU; assumption
          · apply (difference_subs_left V B); assumption
        · intro_neg h_inAB
          _apply_l (cart_prod_pr_prop _ _ _ _), h_inAB, h_in; elim_and h_in, h_inA, h_inB; clear h_in
          elim_f_neg spec_then_P _ _ y h_y


noncomputable def disj_union2 (A B : Set) := (A × {∅}) ∪ (B × {{∅}})
notation:max A:1024 " ⊔ " B:1024 => disj_union2 A B


theorem disj_union2_prop : ∀ A B pr, (pr ∈ A ⊔ B) ↔ (∃ x ∈ A, pr = (x, ∅)) ∨ (∃ x ∈ B, pr = (x, {∅})) := by
  intros A B pr
  calc
  _ ↔ (pr ∈ (A × {∅})) ∨ (pr ∈ B × {{∅}}) := by apply union2_prop
  _ ↔ (∃ x ∈ A, ∃ y ∈ {∅}, pr = (x, y)) ∨ _ := by apply disj_congr_r; apply cart_prod_prop
  _ ↔ _ ∨ (∃ x ∈ B, ∃ y ∈ {{∅}}, pr = (x, y)) := by apply disj_congr_l; apply cart_prod_prop
  _ ↔ (∃ x ∈ A, ∃ y, y = ∅ ∧ pr = (x, y)) ∨ _ := by
      apply disj_congr_r; apply exi_congr; intro t;
      apply conj_congr_l; apply exi_congr; intro v;
      apply conj_congr_r; apply singleton_a_elem_is_a
  _ ↔ _ ∨ (∃ x ∈ B, ∃ y, y = {∅} ∧ pr = (x, y)) := by
      apply disj_congr_l; apply exi_congr; intro t;
      apply conj_congr_l; apply exi_congr; intro v;
      apply conj_congr_r; apply singleton_a_elem_is_a
  _ ↔ (∃ x ∈ A, pr = (x, ∅)) ∨ (∃ x ∈ B, ∃ y, y = {∅} ∧ pr = (x, y)) := by
      apply disj_congr_r; apply exi_congr; intro t;
      apply conj_congr_l
      intro_iff
      · intro h_t; elim_exists h_t, Y, h_Y; elim_and h_Y, h_Yemp, h_pr
        rewrite [← h_Yemp]; assumption
      · intro h_t; intro_exists_in ∅; rfl; assumption
  _ ↔ _ := by
      apply disj_congr_l; apply exi_congr; intro t;
      apply conj_congr_l
      intro_iff
      · intro h_t; elim_exists h_t, Y, h_Y; elim_and h_Y, h_Yemp, h_pr
        rewrite [← h_Yemp]; assumption
      · intro h_t; intro_exists_in {∅}; rfl; assumption


theorem disj_union2_pr_prop : ∀ A B x y,
(x, y) ∈ (A ⊔ B) ↔ (x ∈ A ∧ y = ∅) ∨ (x ∈ B ∧ y = {∅}) := by
  intros A B x y
  calc
  _ ↔ (∃ t ∈ A, (x, y) = (t, ∅)) ∨ (∃ t ∈ B, (x, y) = (t, {∅})) := by apply disj_union2_prop
  _ ↔ (x ∈ A ∧ y = ∅) ∨ _:= by
    apply disj_congr_r
    intro_iff
    · intro h_t
      elim_exists_in h_t, u, h_uin, h_u; _apply_r (ord_pr_prop _ _ _ _), h_u, h_xu_yemp;
      elim_and h_xu_yemp, h_xu, h_yemp
      rewrite [h_xu]; intro_and <;> assumption
    · intro h_t; elim_and h_t, h_xA, h_yemp
      intro_exists_in x; assumption; apply_l (ord_pr_prop _ _ _ _);
      intro_and; rfl; assumption
  _ ↔ _ := by
    apply disj_congr_l
    intro_iff
    · intro h_t
      elim_exists_in h_t, u, h_uin, h_u; _apply_r (ord_pr_prop _ _ _ _), h_u, h_xu_yemp;
      elim_and h_xu_yemp, h_xu, h_yemp
      rewrite [h_xu]; intro_and <;> assumption
    · intro h_t; elim_and h_t, h_xB, h_yemp
      intro_exists_in x; assumption; apply_l (ord_pr_prop _ _ _ _);
      intro_and; rfl; assumption


theorem disj_union2_pi1_in : ∀ A B pr, pr ∈ A ⊔ B → π₁ pr ∈ A ∪ B := by
  intros A B pr h_prAB
  _apply_l (disj_union2_prop A B pr), h_prAB, h_orexi
  elim_or h_orexi, h_exi, h_exi
  · elim_exists_in h_exi, t, h_tin, h_t
    rewrite [h_t, pi1_left]
    apply left_union2_subs; assumption
  · elim_exists_in h_exi, t, h_tin, h_t
    rewrite [h_t, pi1_left]
    apply right_union2_subs; assumption


theorem disj_union2_pi2_in : ∀ A B pr, pr ∈ A ⊔ B → π₂ pr ∈ {∅, {∅}} := by
  intros A B pr h_prAB
  _apply_l (disj_union2_prop A B pr), h_prAB, h_orexi
  elim_or h_orexi, h_exi, h_exi
  · elim_exists_in h_exi, t, h_tin, h_t
    rewrite [h_t, pi2_right]
    apply left_un_pr
  · elim_exists_in h_exi, t, h_tin, h_t
    rewrite [h_t, pi2_right]
    apply right_un_pr


theorem disj_union2_pr_pi12 : ∀ A B pr, pr ∈ A ⊔ B → pr = (π₁ pr, π₂ pr) := by
  intros A B pr h_prAB
  _apply_l (union2_prop _ _ _), h_prAB, h_or
  elim_or h_or, h_in, h_in
  · apply cart_pr_pi12 A {∅}; assumption
  · apply cart_pr_pi12 B {{∅}}; assumption


theorem disj_union2_eq_pi_eq_pr : ∀ A B, ∀ pr₁ pr₂ ∈ A ⊔ B, (π₁ pr₁ = π₁ pr₂) → (π₂ pr₁ = π₂ pr₂) → pr₁ = pr₂ := by
  intros A B
  intro_in_ pr₁, h_pr₁
  intro_in_ pr₂, h_pr₂
  _apply_l (union2_prop _ _ _), h_pr₁, h_or₁
  _apply_l (union2_prop _ _ _), h_pr₂, h_or₂
  elim_or h_or₁, h_in₁, h_in₁ <;> elim_or h_or₂, h_in₂, h_in₂
  · apply cart_eq_pi_eq_pr A {∅} <;> assumption
  · intro h_pi₁ h_pi₂;
    have h₁ := (cart_pi2_in _ _ pr₁) h_in₁
    have h₂ := (cart_pi2_in _ _ pr₂) h_in₂
    _apply_l (singleton_a_elem_is_a _ _), h₁, h_eq₁
    _apply_l (singleton_a_elem_is_a _ _), h₂, h_eq₂
    rewrite [h_eq₁, h_eq₂, equal_commut] at h_pi₂
    elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg
    conv =>
      rhs
      rewrite [← h_pi₂]
    apply x_in_singl_x
  · intro h_pi₁ h_pi₂;
    have h₁ := (cart_pi2_in _ _ pr₁) h_in₁
    have h₂ := (cart_pi2_in _ _ pr₂) h_in₂
    _apply_l (singleton_a_elem_is_a _ _), h₁, h_eq₁
    _apply_l (singleton_a_elem_is_a _ _), h₂, h_eq₂
    rewrite [h_eq₁, h_eq₂, equal_commut] at h_pi₂
    elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg
    conv =>
      rhs
      rewrite [h_pi₂]
    apply x_in_singl_x
  · apply cart_eq_pi_eq_pr B {{∅}} <;> assumption


theorem disj_union2_in_left :  ∀ A x, (x ∈ A) → (x, ∅) ∈ (A × {∅}) := by
  intros A x h_x
  apply_r (cart_prod_pr_prop _ _ _ _); intro_and
  assumption; apply x_in_singl_x


theorem disj_union2_in_right :  ∀ B x, (x ∈ B) → (x, {∅}) ∈ (B × {{∅}}) := by
  intros B x h_x
  apply_r (cart_prod_pr_prop _ _ _ _); intro_and
  assumption; apply x_in_singl_x


theorem disj_union2_left_in : ∀ A B x, (x ∈ A) → ((x, ∅) ∈ (A ⊔ B)) := by
  intros A B x h_xA
  have h := disj_union2_pr_prop A B x ∅
  apply_r h
  left; intro_and; assumption; rfl


theorem disj_union2_right_in : ∀ A B x, (x ∈ B) → ((x, {∅}) ∈ (A ⊔ B)) := by
  intros A B x h_xB
  have h := disj_union2_pr_prop A B x {∅}
  apply_r h
  right; intro_and; assumption; rfl


theorem disj_union2_pr_emp_in_l : ∀ A B x, (x, ∅) ∈ (A ⊔ B) → x ∈ A := by
  intros A B x h_x
  _apply_l (disj_union2_pr_prop _ _ _ _), h_x, h
  elim_or h, h_Aemp, h_Bsemp
  · elim_and_ h_Aemp
  · elim_and h_Bsemp, h_B, h_semp
    elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg;
      conv =>
        rhs
        rw [h_semp]
    apply x_in_singl_x


theorem disj_union2_pr_semp_in_r : ∀ A B x, (x, {∅}) ∈ (A ⊔ B) → x ∈ B := by
  intros A B x h_x
  _apply_l (disj_union2_pr_prop _ _ _ _), h_x, h
  elim_or h, h_Asemp, h_Bsemp
  · elim_and h_Asemp, h_A, h_semp
    elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg;
      conv =>
        rhs
        rw [← h_semp]
    apply x_in_singl_x
  · elim_and_ h_Bsemp


theorem disj_union2_prop_pr_el (P : Set → Prop) : ∀ A B, (∀ x ∈ A, P (x, ∅)) → (∀ y ∈ B, P (y, {∅})) → ∀ t ∈ (A ⊔ B), P t := by
  intros A B h_A h_B
  intro_in_ t, h_t
  _apply_l (disj_union2_prop A B t), h_t, h_ex
  elim_or h_ex, h_ex, h_ex <;> elim_exists_in h_ex, u, h_uin, h_u <;> clear h_ex
  · rewrite [h_u]
    apply h_A; assumption
  · rewrite [h_u]
    apply h_B; assumption


theorem disj_union2_prop_el_pr (P : Set → Prop) : ∀ A B, (∀ t ∈ (A ⊔ B), P t) → ((∀ x ∈ A, P (x, ∅)) ∧ ∀ y ∈ B, P (y, {∅})) := by
  intros A B h_AB
  intro_and
  · intro_in_ x, h_x
    apply h_AB
    apply disj_union2_left_in; assumption
  · intro_in_ x, h_x
    apply h_AB;
    apply disj_union2_right_in; assumption


noncomputable def disjoint_union2_left (X: Set) := {y ∈ X | (π₂ y) = ∅}
noncomputable def disjoint_union2_right (X : Set) := {y ∈ X | (π₂ y) = {∅}}
notation:max "DU2LP " dsjun:1024 => disjoint_union2_left dsjun
notation:max "DU2RP " dsjun:1024 => disjoint_union2_right dsjun


theorem dul_subs : ∀ X, (DU2LP X) ⊆ X := by
  intro X
  apply spec_subs


theorem dur_subs : ∀ X, (DU2RP X) ⊆ X := by
  intro X
  apply spec_subs


theorem dulr_inter2 : ∀ X, (DU2LP X) ∩ (DU2RP X) = ∅ := by
  intro X
  apply subset_empty_is_empty
  intro_in_ t, h_t
  _apply_l (inter2_prop _ _ _), h_t, h_and; elim_and h_and, h_dlx, h_drx; clear h_t h_and
  have h₁ := (spec_then_P _ _ t) h_dlx
  have h₂ := (spec_then_P _ _ t) h_drx
  rewrite [h₂] at h₁
  elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg;
  conv =>
    rhs
    rewrite [← h₁];
  apply x_in_singl_x


theorem dul_disj_union2 : ∀ A B, (DU2LP (A ⊔ B)) = (A × {∅}) := by
  intros A B
  apply (set_extensionality_ax _ _); intro t;
  intro_iff
  · intro h_t
    have h := (spec_subs _ _) t h_t
    revert h_t
    revert h
    apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      intro h_xemp
      apply disj_union2_in_left; assumption
    · intro_in_ y, h_y
      intro h_yemp
      have h_yempin := (spec_then_P _ _ (y, {∅})) h_yemp
      rw [pi2_right] at h_yempin
      elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg;
      conv =>
        rhs
        rewrite [← h_yempin]
      apply x_in_singl_x
  · apply cart_prop_pr_el
    intro_in_ x, h_x <;> intro_in_ y, h_y
    apply elem_P_then_spec
    · apply_r (disj_union2_pr_prop _ _ _ _)
      left; intro_and; try assumption;
      apply_l (singleton_a_elem_is_a _ _); assumption
    · rewrite [pi2_right]
      apply_l (singleton_a_elem_is_a _ _); assumption


theorem dur_disj_union2 : ∀ A B, (DU2RP (A ⊔ B)) = (B × {{∅}}) := by
  intros A B
  apply (set_extensionality_ax _ _); intro t;
  intro_iff
  · intro h_t
    have h := (spec_subs _ _) t h_t
    revert h_t
    revert h
    apply disj_union2_prop_pr_el
    · intro_in_ y, h_y
      intro h_ysemp
      have h_ysempin := (spec_then_P _ _ (y, ∅)) h_ysemp
      rw [pi2_right] at h_ysempin
      elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg;
      conv =>
        rhs
        rewrite [h_ysempin]
      apply x_in_singl_x
    · intro_in_ x, h_x
      intro h_xsemp
      apply disj_union2_in_right; assumption
  · apply cart_prop_pr_el
    intro_in_ x, h_x <;> intro_in_ y, h_y
    apply elem_P_then_spec
    · apply_r (disj_union2_pr_prop _ _ _ _)
      right; intro_and; try assumption
      apply_l (singleton_a_elem_is_a _ _); assumption
    · rewrite [pi2_right]
      apply_l (singleton_a_elem_is_a _ _); assumption


theorem disj_union2_in_dul : ∀ A B x, ((x, ∅) ∈ DU2LP (A ⊔ B)) → x ∈ A := by
  intros A B x h_x
  rw [dul_disj_union2] at h_x
  _apply_l (cart_prod_pr_prop _ _ _ _), h_x, h_inAemp
  elim_and_ h_inAemp


theorem disj_union2_in_dur : ∀ A B x, ((x, ∅) ∈ DU2RP (A ⊔ B)) → x ∈ B := by
  intros A B x h_x
  rw [dur_disj_union2] at h_x
  _apply_l (cart_prod_pr_prop _ _ _ _), h_x, h_inBemp
  elim_and_ h_inBemp


theorem dulr_union2 : ∀ A B, (DU2LP (A ⊔ B)) ∪ (DU2RP (A ⊔ B)) = (A ⊔ B) := by
  intros A B
  rewrite [dul_disj_union2, dur_disj_union2]
  rfl


theorem in_l_pred_f : ∀ x y z, π₁ x = y → π₁ x = z → (y = z) := by
  intros x y z h_xy h_xz
  rewrite [← h_xy]
  rw [h_xz]


noncomputable def disjoint_union2_left_set (X: Set) := (ReplImg{y | ∃ pr ∈ (DU2LP (X)), (π₁ pr) = y} of (in_l_pred_f))
noncomputable def disjoint_union2_right_set (X : Set) := (ReplImg{y | ∃ pr ∈ (DU2RP (X)), (π₁ pr) = y} of (in_l_pred_f))
notation:max "DU2L " dsjun:1024 => disjoint_union2_left_set dsjun
notation:max "DU2R " dsjun:1024 => disjoint_union2_right_set dsjun


theorem disj_union2_repl_img_l : ∀ A B, DU2L (A ⊔ B) = A := by
  intros A B
  apply (set_extensionality_ax); intro t; intro_iff
  · intro h_t
    _apply_l (repl_set_is_repl _ DU2LP (A ⊔ B) (in_l_pred_f) t), h_t, h_ex; clear h_t
    elim_exists_in h_ex, pr, h_prin, h_pr
    rewrite [dul_disj_union2] at h_prin
    revert h_pr; revert h_prin; apply cart_prop_pr_el
    intro_in_ x, h_x; intro_in_ y, h_y; intro h_eq
    rewrite [pi1_left] at h_eq; rewrite [← h_eq]; assumption
  · intro h_t
    apply_r (repl_set_is_repl _ DU2LP (A ⊔ B) (in_l_pred_f) t)
    intro_exists_in (t, ∅)
    · rw [dul_disj_union2]
      apply disj_union2_in_left; assumption
    · rw [pi1_left]


theorem disj_union2_repl_img_r : ∀ A B, DU2R (A ⊔ B) = B := by
  intros A B
  apply (set_extensionality_ax); intro t; intro_iff
  · intro h_t
    _apply_l (repl_set_is_repl _ DU2RP (A ⊔ B) (in_l_pred_f) t), h_t, h_ex; clear h_t
    elim_exists_in h_ex, pr, h_prin, h_pr
    rewrite [dur_disj_union2] at h_prin
    revert h_pr; revert h_prin; apply cart_prop_pr_el
    intro_in_ x, h_x; intro_in_ y, h_y; intro h_eq
    rewrite [pi1_left] at h_eq; rewrite [← h_eq]; assumption
  · intro h_t
    apply_r (repl_set_is_repl _ DU2RP (A ⊔ B) (in_l_pred_f) t)
    intro_exists_in (t, {∅})
    · rw [dur_disj_union2]
      apply disj_union2_in_right; assumption
    · rw [pi1_left]


theorem disj_union2_emp_l : ∀ A, A ⊔ ∅ = A × {∅} := by
  intros A
  calc
  _ = (A × {∅}) ∪ ∅ × {{∅}} := by rfl
  _ = (A × {∅}) ∪ ∅ := by rw [cart_empty_l]
  _ = _ := by apply union2_empty


theorem disj_union2_emp_r : ∀ A, ∅ ⊔ A = A × {{∅}} := by
  intros A
  calc
  _ = (∅ × {∅}) ∪ A × {{∅}} := by rfl
  _ = ∅ ∪ (A × {{∅}}) := by rw [cart_empty_l]
  _ = (A × {{∅}}) ∪ ∅ := by apply union2_comm
  _ = _ := by apply union2_empty


theorem disj_union2_emp_lr : ∅ ⊔ ∅ = ∅ := by
  rw [disj_union2_emp_l]
  apply cart_empty_l


theorem disj_union2_nemp_l : ∀ A B, (is_nempty A) → (is_nempty (A ⊔ B)) := by
  intros A B h_A
  elim_exists h_A, C, h_C
  intro_exists (C, ∅)
  apply disj_union2_left_in; assumption


theorem disj_union2_nemp_r : ∀ A B, (is_nempty B) → (is_nempty (A ⊔ B)) := by
  intros A B h_A
  elim_exists h_A, C, h_C
  intro_exists (C, {∅})
  apply disj_union2_right_in; assumption


theorem disj_union2_nidemp_emp_semp : ∀ A, A ⊔ A = (A × ({∅, {∅}})) := by
  intro A
  calc
  _ = (A × {∅}) ∪ (A × {{∅}}) := by rfl
  _ = A × ({∅} ∪ {{∅}}) := by (apply_r equal_commut _ _ _); apply cart_union2_distrib_l
  _ = _ := by
      have h : {∅} ∪ {{∅}} = {∅, {∅}} := by
        apply set_extensionality_ax; intro t; intro_iff
        · intro h_t
          apply_r (unord_pr_set_is_unord_pr _ _ _)
          _apply_l (union2_prop _ _ _), h_t, h_in
          elim_or h_in, h_in, h_in
          · left; apply_l (singleton_a_elem_is_a ∅ t); assumption
          · right; apply_l (singleton_a_elem_is_a {∅} t); assumption
        · intro h_t
          apply_r (union2_prop _ _ _)
          _apply_l (unord_pr_set_is_unord_pr _ _ _), h_t, h_eq
          elim_or h_eq, h_eq, h_eq
          · left; apply_r (singleton_a_elem_is_a _ _); assumption
          · right; apply_r (singleton_a_elem_is_a _ _); assumption
      rw [h]


theorem disj_union2_eq : ∀ A B C D, (((A ⊔ B) = (C ⊔ D)) ↔ (A = C) ∧ (B = D)) := by
  intros A B C D
  intro_iff
  · intro h
    intro_and
    · have h₁ : DU2LP (A ⊔ B) = DU2LP (A ⊔ B) := by rfl
      conv at h₁ =>
        rhs
        rewrite [h]
      rewrite [dul_disj_union2, dul_disj_union2] at h₁
      apply set_extensionality_ax; intro t;
      intro_iff
      · intro h_t
        have h₂ : (t, ∅) ∈ A × {∅} := by apply_r (cart_prod_pr_prop _ _ _ _); intro_and; assumption; apply x_in_singl_x
        rewrite [h₁] at h₂
        _apply_l (cart_prod_pr_prop _ _ _ _), h₂, h_C
        elim_and_ h_C
      · intro h_t
        have h₂ : (t, ∅) ∈ C × {∅} := by apply_r (cart_prod_pr_prop _ _ _ _); intro_and; assumption; apply x_in_singl_x
        rewrite [← h₁] at h₂
        _apply_l (cart_prod_pr_prop _ _ _ _), h₂, h_A
        elim_and_ h_A
    · have h₁ : DU2RP (A ⊔ B) = DU2RP (A ⊔ B) := by rfl
      conv at h₁ =>
        rhs
        rewrite [h]
      rewrite [dur_disj_union2, dur_disj_union2] at h₁
      apply set_extensionality_ax; intro t;
      intro_iff
      · intro h_t
        have h₂ : (t, {∅}) ∈ B × {{∅}} := by apply_r (cart_prod_pr_prop _ _ _ _); intro_and; assumption; apply x_in_singl_x
        rewrite [h₁] at h₂
        _apply_l (cart_prod_pr_prop _ _ _ _), h₂, h_D
        elim_and_ h_D
      · intro h_t
        have h₂ : (t, {∅}) ∈ D × {{∅}} := by apply_r (cart_prod_pr_prop _ _ _ _); intro_and; assumption; apply x_in_singl_x
        rewrite [← h₁] at h₂
        _apply_l (cart_prod_pr_prop _ _ _ _), h₂, h_C
        elim_and_ h_C
  · intro h; elim_and h, h_AC, h_BD
    rw [h_AC, h_BD]


theorem disj_union2_mon_l : ∀ A B C, (A ⊆ C) → (A ⊔ B) ⊆ (C ⊔ B) := by
  intros A B C h_AC
  apply disj_union2_prop_pr_el
  · intro_in_ x, h_x
    apply disj_union2_left_in; apply h_AC; assumption
  · intro_in_ y, h_y
    apply disj_union2_right_in; assumption


theorem disj_union2_mon_r : ∀ A B C, (B ⊆ C) → (A ⊔ B) ⊆ (A ⊔ C) := by
  intros A B C h_BC
  apply disj_union2_prop_pr_el
  · intro_in_ x, h_x
    apply disj_union2_left_in; assumption
  · intro_in_ y, h_y
    apply disj_union2_right_in; apply h_BC; assumption


theorem disj_union2_subs_then : ∀ A B C D, (A ⊔ B) ⊆ (C ⊔ D) → (A ⊆ C ∧ B ⊆ D) := by
  intros A B C D h_ABCD
  intro_and
  · intro_in_ t, h_t
    have h := (disj_union2_left_in A B t) h_t
    specialize_in_ h_ABCD, (t, ∅), h
    apply disj_union2_pr_emp_in_l C D; assumption
  · intro_in_ t, h_t
    have h := (disj_union2_right_in A B t) h_t
    specialize_in_ h_ABCD, (t, {∅}), h
    apply disj_union2_pr_semp_in_r C D; assumption


theorem subs_is_disj_union2_of : ∀ S A B, (S ⊆ (A ⊔ B)) → (S = ({x ∈ A | (x, ∅) ∈ S}) ⊔ ({x ∈ B | (x, {∅}) ∈ S})) := by
  intros S A B h_S
  apply set_extensionality_ax; intro t; intro_iff
  · intro h_t
    have h := h_S
    specialize_in_ h_S, t, h_t; revert h_t; revert h_S
    apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      intro h_xemp
      apply disj_union2_left_in
      apply elem_P_then_spec <;> assumption
    · intro_in_ y, h_y
      intro h_ysemp
      apply disj_union2_right_in
      apply elem_P_then_spec <;> assumption
  · apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      have h := spec_then_P _ _ x h_x; assumption
    · intro_in_ y, h_y
      have h := spec_then_P _ _ y h_y; assumption


theorem subs_disj_union2_ex : ∀ S A B, (S ⊆ (A ⊔ B)) → ∃ C D, C ⊆ A ∧ D ⊆ B ∧ S = C ⊔ D := by
  intros S A B h_S
  intro_exists {x ∈ A | (x, ∅) ∈ S}
  intro_exists {x ∈ B | (x, {∅}) ∈ S}
  (intro_and <;> try intro_and); all_goals try apply spec_subs
  apply subs_is_disj_union2_of; assumption


theorem subs_disj_union2_ex_un : ∀ S A B, (S ⊆ (A ⊔ B)) → ∃! C D, S = C ⊔ D := by
  intros S A B h_S
  elim_exists (subs_disj_union2_ex S A B h_S), C, h_ex; elim_exists h_ex, D, h;
  elim_and h, h_A, h_B_eq; elim_and h_B_eq, h_B, h_eq; clear h_ex h h_B_eq
  intro_exists_unique C; intro_and
  · intro_exists_unique D; intro_and
    · assumption
    · intro M h_M
      rewrite [h_eq] at h_M
      _apply_l (disj_union2_eq _ _ _ _), h_M, h_DM; elim_and_ h_DM
  · intro N h_unD
    elim_exists_unique h_unD, K, h_K, h_unK
    rewrite [h_eq] at h_K
    _apply_l (disj_union2_eq _ _ _ _), h_K, h_CN; elim_and_ h_CN


theorem disj_union2_union2_distrib : ∀ A B C D, (A ⊔ B) ∪ (C ⊔ D) = ((A ∪ C) ⊔ (B ∪ D)) := by
  intros A B C D
  apply set_extensionality_ax; intro t
  intro_iff
  · intro h_t
    _apply_l (union2_prop _ _ _), h_t, h; clear h_t; elim_or h, h_AB, h_CD
    · revert h_AB; apply disj_union2_prop_pr_el
      · intro_in_ x, h_x
        apply disj_union2_left_in
        apply left_union2_subs; assumption
      · intro_in_ y, h_y
        apply disj_union2_right_in
        apply left_union2_subs; assumption
    · revert h_CD; apply disj_union2_prop_pr_el
      · intro_in_ x, h_x
        apply disj_union2_left_in
        apply right_union2_subs; assumption
      · intro_in_ y, h_y
        apply disj_union2_right_in
        apply right_union2_subs; assumption
  · apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      _apply_l (union2_prop _ _ _), h_x, h; clear h_x; elim_or h, h_A, h_C
      · apply_r (union2_prop _ _ _); left; apply disj_union2_left_in; assumption
      · apply_r (union2_prop _ _ _); right; apply disj_union2_left_in; assumption
    · intro_in_ y, h_y
      _apply_l (union2_prop _ _ _), h_y, h; clear h_y; elim_or h, h_A, h_C
      · apply_r (union2_prop _ _ _); left; apply disj_union2_right_in; assumption
      · apply_r (union2_prop _ _ _); right; apply disj_union2_right_in; assumption


theorem disj_union2_inter2_distrib : ∀ A B C D, (A ⊔ B) ∩ (C ⊔ D) = ((A ∩ C) ⊔ (B ∩ D)) := by
  intros A B C D
  apply set_extensionality_ax; intro t
  intro_iff
  · intro h_t
    _apply_l (inter2_prop _ _ _), h_t, h; clear h_t; elim_and h, h_AB, h_CD; clear h
    revert h_AB; revert h_CD; apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      intro h_inAB
      _apply_l (disj_union2_pr_prop _ _ _ _), h_inAB, h_inAB_emp;
      elim_or h_inAB_emp, h, h <;> elim_and h, h_in, h_eq <;> clear h
      · apply disj_union2_left_in; apply_r (inter2_prop _ _ _); intro_and <;> assumption
      · elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg;
        conv =>
          rhs
          rewrite [h_eq]
        apply x_in_singl_x
    · intro_in_ y, h_y
      intro h_inAB
      _apply_l (disj_union2_pr_prop _ _ _ _), h_inAB, h_inAB_emp;
      elim_or h_inAB_emp, h, h <;> elim_and h, h_in, h_eq <;> clear h
      · elim_false; have h_neg := empty_set_is_empty ∅; elim_neg h_neg;
        conv =>
          rhs
          rewrite [← h_eq]
        apply x_in_singl_x
      · apply disj_union2_right_in; apply_r (inter2_prop _ _ _); intro_and <;> assumption
  · apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      _apply_l (inter2_prop _ _ _), h_x, h_xAC; elim_and h_xAC, h_xA, h_xC; clear h_x h_xAC
      apply_r (inter2_prop _ _ _); intro_and
      · apply disj_union2_left_in; assumption
      · apply disj_union2_left_in; assumption
    · intro_in_ y, h_y
      _apply_l (inter2_prop _ _ _), h_y, h_yBD; elim_and h_yBD, h_yB, h_yD; clear h_y h_yBD
      apply_r (inter2_prop _ _ _); intro_and
      · apply disj_union2_right_in; assumption
      · apply disj_union2_right_in; assumption


theorem disj_union2_diff_distrib : ∀ A B C D, (A ⊔ B) \ (C ⊔ D) = ((A \ C) ⊔ (B \ D)) := by
  intros A B C D
  apply set_extensionality_ax; intro t
  intro_iff
  · intro h_t
    _apply_l (difference_prop _ _ _), h_t, h; clear h_t; elim_and h, h_AB, h_nCD; clear h;
    revert h_nCD
    revert h_AB
    apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      intro h_inCD
      apply_r (disj_union2_pr_prop _ _ _ _)
      left; intro_and;
      · apply elem_P_then_spec; try assumption
        intro_neg h_C
        elim_neg h_inCD
        apply disj_union2_left_in; assumption
      · rfl
    · intro_in_ y, h_y
      intro h_ninCD
      apply_r (disj_union2_pr_prop _ _ _ _)
      right; intro_and;
      · apply elem_P_then_spec; try assumption
        intro_neg h_D
        elim_neg h_ninCD
        apply disj_union2_right_in; assumption
      · rfl
  · apply disj_union2_prop_pr_el
    · intro_in_ x, h_x
      _apply_l (difference_prop _ _ _), h_x, h; clear h_x; elim_and h, h_A, h_nC; clear h
      apply_r (difference_prop _ _ _); intro_and
      · apply disj_union2_left_in; assumption
      · intro_neg h_inCD
        elim_neg h_nC
        apply disj_union2_pr_emp_in_l C D x; assumption
    · intro_in_ y, h_y
      _apply_l (difference_prop _ _ _), h_y, h; clear h_y; elim_and h, h_B, h_nD; clear h
      apply_r (difference_prop _ _ _); intro_and
      · apply disj_union2_right_in; assumption
      · intro_neg h_inCD
        elim_neg h_nD
        apply disj_union2_pr_semp_in_r C D y; assumption
