import Props2Theories.Logic.Props.Task
import Props2Theories.TacticNames

-- Equality Properties
theorem equal_refl (T : Type) : (∀ x : T, x = x) := by
    intro x
    rfl

theorem equal_symm (T : Type) : (∀ (x y : T), x = y → y = x) := by
    intros x y h_xy
    rw [← h_xy]

theorem equal_commut (T : Type) : (∀ x : T, ∀ y : T, x = y ↔ y = x) := by
    intros x y
    intro_iff <;> apply equal_symm

theorem equal_trans (T : Type) : (∀ (x y z : T), x = y → y = z → x = z) := by
    intros x y z h_xy h_yz
    rewrite [h_xy]
    assumption


theorem eq_subst (T : Type) (P : T → Prop) : (∀ (a b : T), a = b → P a → P b) := by
    intros a b heq pa
    rewrite [← heq]
    assumption

theorem eq_substr (T : Type) (P : T → Prop) : (∀ (a b : T), a = b → P b → P a) := by
    intros a b heq pb
    rewrite [heq]
    assumption


-- Congr and Extensionality
theorem eq_congr_func_arg (T : Type) (S : Type) (f : T → S) : (∀ (x y : T), x = y → f x = f y) := by
    intros x y heq
    rw [heq]

theorem eq_congr_pred_arg (T : Type) (P : T → Prop) : (∀ (x y : T), x = y → (P x ↔ P y)) := by
    intros x y heq
    intro_iff
    ·     exact (eq_subst T P x y heq)
    ·     exact (eq_substr T P x y heq)

theorem iff_is_eq_cl (P Q : Prop) (h : P ↔ Q) : P = Q := by
    propext_cl_

theorem fun_ext_eq_cl (T S: Type ) (P Q : T → S) (h : ∀ x, P x = Q x) : P = Q := by
    funext_cl_

theorem pred_ext_eq_cl (T : Type) (P Q : T → Prop) (h : ∀ x, P x ↔ Q x) : P = Q := by
    _funext_cl_
    intro x
    _propext_cl_
    apply h

theorem iff_congr_pred_arg_cl (P : Prop → Prop) : (∀ (x y : Prop), (x ↔ y) → (P x ↔ P y)) := by
    intros x y h_xy
    apply eq_congr_pred_arg
    propext_cl_

theorem iff_congr_pred_pred_arg_cl (T : Type) (P Q : T → Prop) (h : ∀ x, P x ↔ Q x) (F : (T → Prop) → Prop) : F P <-> F Q := by
    have h_new := pred_ext_eq_cl T P Q h
    rewrite [h_new]
    apply trivial_equivalence

theorem iff_subst_pred_arg_cl (P : Prop → Prop) : (∀ (x y : Prop), (x ↔ y) → (P x → P y)) := by
    intros x y h_xy
    _propext_cl h_xy, heq
    rewrite [heq]
    apply axiomatic_rule

theorem eq_congr_func_symb (T : Type) (S : Type) (f g : T → S) (h : f = g) : (∀ x : T, f x = g x) := by
    intro x
    rw [h]

theorem eq_congr_pred_symb (T : Type) (P Q : T → Prop) (h : P = Q) : (∀ x : T, P x ↔ Q x) := by
    intro x
    rewrite [h]
    apply trivial_equivalence

theorem eq_congr_func_arg_symb (T : Type) (S : Type) (f₁ f₂ : T → S) : ∀ (a₁ a₂ : T), (f₁ = f₂) → (a₁ = a₂) → (f₁ a₁ = f₂ a₂) := by
    intro x y h_f h_xy
    rw [h_f, h_xy]

theorem eq_congr_pred_arg_symb (T : Type) (P₁ P₂ : T → Prop) : ∀ (a₁ a₂ : T), (P₁ = P₂) → (a₁ = a₂) → (P₁ a₁ ↔ P₂ a₂) := by
    intro x y h_p h_xy
    rewrite [h_p, h_xy]
    apply trivial_equivalence

theorem mult_pred_iff_is_eq_cl (T : Type) (P Q : T → T → Prop) (h : ∀ x y, P x y ↔ Q x y) : P = Q := by
    _funext_cl_
    intro x
    apply pred_ext_eq_cl T (P x) (Q x)
    apply h

theorem mult_func_symb_iff_is_eq_cl (T T₁ T₂ : Type) (P Q : T → T₁ → T₂) (h : ∀ x y, P x y = Q x y) : P = Q := by
    _funext_cl_
    intro x
    _funext_cl_
    apply h

-- Prop is Bool in Classical Logic
theorem stated_equiv_true_cl (p : Prop) : p ↔ (p = True) := by
    intro_iff
    · intro h_p
      _propext_cl_
      intro_iff
      · intro h_p₂
        intro_true
      · intro h_t
        assumption
    · intro h_pet
      rw [h_pet]
      intro_true

theorem prop_or_neg_true_cl (p : Prop) : p = True ∨ (¬p) = True := by
    have h := tnd_cl p
    elim_or h, h_p, h_np
    · left
      apply_l_ (stated_equiv_true_cl _)
    · right
      apply_l_ (stated_equiv_true_cl _)

theorem stated_neg_equiv_false_cl (p : Prop) : ¬p ↔ (p = False) := by
    intro_iff
    · intro h_np
      _propext_cl_
      intro_iff
      · intro h_p
        elim_neg_ h_np
      · intro h_f
        elim_false_
    · intro h_pef
      rewrite [h_pef]
      intro_neg h_f
      elim_false_

theorem stated_equiv_not_false_cl (p : Prop) : p ↔ ((¬p) = False) := by
    have h := stated_neg_equiv_false_cl (¬p)
    have h₂ := double_negation_cl p
    apply (iff_transitivity _ (¬¬p) _) <;> assumption

theorem prop_is_bool_cl (p : Prop) : p = True ∨ p = False := by
    have h := tnd_cl p
    elim_or h, h_p, h_np
    · left
      apply_l_ (stated_equiv_true_cl _)
    · right
      apply_l_ (stated_neg_equiv_false_cl _)

-- Some quantifier properties of being equal to constant
theorem exists_eq_C_PC_then_P (T : Type) (P : T → Prop) (C : T) : (∃ x, x = C) → (P C) → (∃ x, P x) := by
    intros h_exi h_pc
    elim_exists h_exi, x, h_x
    intro_exists x
    rewrite [h_x]
    assumption

theorem forall_eq_C_PC_then_P (T : Type) (P : T → Prop) (C : T) : (∀ x, x = C) → (P C) → (∀ x, P x) := by
    intro h_for h_pc
    intro x
    specialize h_for x
    rewrite [h_for]
    assumption

-- Partition in to equality and non-equality
theorem uni_eq_partition_cl (T : Type) (P : T → T → Prop) :
 (∀ x : T, ∀ y : T, P x y) ↔ ((∀ x : T, P x x) ∧ ∀ x : T, ∀ y : T, (x ≠ y → P x y)) := by
    intro_iff
    · intro h_fpxy
      intro_and
      · intro x
        apply h_fpxy
      · intros x y h_nxy
        apply h_fpxy
    · intro h_apxy
      elim_and h_apxy, h_pxx, h_n_pxy
      intros x y
      elim_or (tnd_cl (x = y)), h_xey, h_xny
      · rewrite [← h_xey]
        apply h_pxx
      · apply h_n_pxy
        assumption

theorem exi_eq_partition_cl (T : Type) (P : T → T → Prop) :
 (∃ x : T, ∃ y : T, P x y) ↔ ((∃ x : T, P x x) ∨ ∃ x : T, ∃ y : T, (x ≠ y ∧ P x y)) := by
    intro_iff
    · intro h_exi_pxy
      elim_exists h_exi_pxy, s, h_y_psy
      elim_exists h_y_psy, t, h_pst
      elim_or (tnd_cl (s = t)), h_set, h_snt
      · left
        intro_exists s
        conv =>
            rhs
            rewrite [h_set]
        assumption
      · right
        intro_exists s
        intro_exists t
        intro_and <;> assumption
    · intro h_ex_or
      elim_or h_ex_or, h_ex_x, h_ex_xny
      · elim_exists h_ex_x, x, h_x
        intro_exists x
        intro_exists_ x, h_x
      · elim_exists h_ex_xny, x, h_x_xny
        elim_exists h_x_xny, y, h_xy
        elim_and h_xy, h_nxy, h_pxy
        intro_exists x
        intro_exists_ y, h_pxy


-- Exists And Unique Quantifier Properties
theorem exists_unique_then_exists (T : Type) (P : T → Prop) (h : ∃! x, P x) : (∃ x, P x)  := by
    elim_exists_unique h, x, h_px, h_fpxy
    intro_exists_ x, h_px

theorem exists_unique_then_unique (T : Type) (P : T → Prop)  (h : ∃! x, P x) (a : T) (b : T) (h₁ : P a) (h₂ : P b) : a = b := by
    elim_exists_unique h, x, h_px, h_fpxy
    have h_a := h_fpxy a h₁
    have h_b := h_fpxy b h₂
    rw [← h_a, h_b]

theorem exists_unique_congr (T : Type) (P Q : T → Prop) : (∀ x, (P x ↔ Q x)) → ((∃! x, P x) ↔ (∃! x, Q x)) := by
    intro h_pq
    intro_iff
    · intro h_exun
      elim_exists_unique h_exun, x, h_px, h_fpxy
      intro_exists_unique x
      intro_and
      · apply_l_ (h_pq x)
      · intro y h_Qy
        specialize h_fpxy y
        apply h_fpxy
        apply_r_ (h_pq y)
    · intro h_exun
      elim_exists_unique h_exun, x, h_px, h_fpxy
      intro_exists_unique x
      intro_and
      · apply_r_ (h_pq x)
      · intro y h_Py
        apply h_fpxy
        apply_l_ (h_pq y)

theorem exists_unique_eqv (T : Type) (P : T → Prop) :
   (∃! x, P x) ↔ (∃ x, P x) ∧ (∀ x y, (P x → P y → x = y)) := by
   intro_iff
   · intro h_exun
     intro_and
     · apply exists_unique_then_exists
       assumption
     · intros x y h_px h_py
       apply (exists_unique_then_unique _ P) <;> assumption
   · intro h_ex_un
     elim_and h_ex_un, h_ex, h_un
     elim_exists h_ex, x, h_p
     intro_exists_unique x
     intro_and
     · assumption
     · intro y hPy
       apply h_un <;> assumption

theorem uniq_then_exi_uni (T : Type) (P : T → Prop) (h : ∀ x y : T, x = y) (hex : ∃ x, P x) : ∀ x, P x := by
    intro x
    elim_exists hex, u, pu
    specialize (h x u)
    rewrite [h]
    assumption

theorem exuniq_then_exi_uni (T : Type) (P : T → Prop) (h : ∃! _ : T, True) (hex : ∃ x, P x) : ∀ x, P x := by
    intro x
    elim_exists hex, u, pu
    elim_exists_unique h, s, ps, h_eq
    apply uniq_then_exi_uni
    intros a y
    have h₁ := h_eq a
    have h₂ := h_eq y
    apply (equal_trans T _ s _)
    apply equal_symm
    apply h₁
    intro_true
    apply h₂
    intro_true
    assumption
