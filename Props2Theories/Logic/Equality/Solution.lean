import Props2Theories.Logic.Props.Task
import Props2Theories.TacticNames

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

-- (≠) is default Lean symbol too
example (T : Type) : (∀ (x y : T), ¬ (x = y) ↔ x ≠ y) := by
    intros x y
    apply trivial_equivalence
