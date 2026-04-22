import Props2Theories.A_Logic.C_Equality.Task
import Props2Theories.B_Set.A_Constructions.Task
import Props2Theories.B_Set.B_Set_Algebra.SetSynt

noncomputable def ord_pr_set (a b : Set) := {{a}, {a, b}}
notation (priority := high) "(" a₁ ", " a₂ ")" => ord_pr_set a₁ a₂

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

theorem eq_pi_eq_pr : ∀ A B, ∀ pr₁ pr₂ ∈ A × B, (π₁ pr₁ = π₁ pr₂) → (π₂ pr₁ = π₂ pr₂) → pr₁ = pr₂ := by
  intros A B
  intro_in_ pr₁, h_pr₁
  intro_in_ pr₂, h_pr₂
  intro hpi₁ h_pi₂
  have h₁ := cart_pr_pi12 A B pr₁ h_pr₁
  have h₂ := cart_pr_pi12 A B pr₂ h_pr₂
  rewrite [h₁, h₂]
  apply_l (ord_pr_prop _ _ _ _)
  intro_and <;> assumption

theorem cart_prod_mon : ∀ A B C D, A ⊆ C → B ⊆ D → (A × B) ⊆ C × D := sorry
