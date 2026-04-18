import Props2Theories.Logic.Props.Task
import Props2Theories.TacticNames

-- Equality Properties
theorem equal_refl (T : Type) : (∀ x : T, x = x) := sorry
theorem equal_symm (T : Type) : (∀ (x y : T), x = y → y = x) := sorry
theorem equal_commut (T : Type) : (∀ x : T, ∀ y : T, x = y ↔ y = x) := sorry
theorem equal_trans (T : Type) : (∀ (x y z : T), x = y → y = z → x = z) := sorry
theorem eq_subst (T : Type) (P : T → Prop) : (∀ (a b : T), a = b → P a → P b) := sorry
theorem eq_substr (T : Type) (P : T → Prop) : (∀ (a b : T), a = b → P b → P a) := sorry


-- Congr and Extensionality
theorem eq_congr_func_arg (T : Type) (S : Type) (f : T → S) : (∀ (x y : T), x = y → f x = f y) := sorry
theorem eq_congr_pred_arg (T : Type) (P : T → Prop) : (∀ (x y : T), x = y → (P x ↔ P y)) := sorry
theorem iff_is_eq_cl (P Q : Prop) (h : P ↔ Q) : P = Q := sorry
theorem fun_ext_eq_cl (T S: Type ) (P Q : T → S) (h : ∀ x, P x = Q x) : P = Q := sorry
theorem pred_ext_eq_cl (T : Type) (P Q : T → Prop) (h : ∀ x, P x ↔ Q x) : P = Q := sorry
theorem iff_congr_pred_arg_cl (P : Prop → Prop) : (∀ (x y : Prop), (x ↔ y) → (P x ↔ P y)) := sorry
theorem iff_congr_pred_pred_arg_cl (T : Type) (P Q : T → Prop) (h : ∀ x, P x ↔ Q x) (F : (T → Prop) → Prop) : F P <-> F Q := sorry
theorem iff_subst_pred_arg_cl (P : Prop → Prop) : (∀ (x y : Prop), (x ↔ y) → (P x → P y)) := sorry
theorem eq_congr_func_symb (T : Type) (S : Type) (f g : T → S) (h : f = g) : (∀ x : T, f x = g x) := sorry
theorem eq_congr_pred_symb (T : Type) (P Q : T → Prop) (h : P = Q) : (∀ x : T, P x ↔ Q x) := sorry
theorem eq_congr_func_arg_symb (T : Type) (S : Type) (f₁ f₂ : T → S) : ∀ (a₁ a₂ : T), (f₁ = f₂) → (a₁ = a₂) → (f₁ a₁ = f₂ a₂) := sorry
theorem eq_congr_pred_arg_symb (T : Type) (P₁ P₂ : T → Prop) : ∀ (a₁ a₂ : T), (P₁ = P₂) → (a₁ = a₂) → (P₁ a₁ ↔ P₂ a₂) := sorry
theorem mult_pred_iff_is_eq_cl (T : Type) (P Q : T → T → Prop) (h : ∀ x y, P x y ↔ Q x y) : P = Q := sorry
theorem mult_func_symb_iff_is_eq_cl (T T₁ T₂ : Type) (P Q : T → T₁ → T₂) (h : ∀ x y, P x y = Q x y) : P = Q := sorry

-- Prop is Bool in Classical Logic
theorem stated_equiv_true_cl (p : Prop) : p ↔ (p = True) := sorry
theorem prop_or_neg_true_cl (p : Prop) : p = True ∨ (¬p) = True := sorry
theorem stated_neg_equiv_false_cl (p : Prop) : ¬p ↔ (p = False) := sorry
theorem stated_equiv_not_false_cl (p : Prop) : p ↔ ((¬p) = False) := sorry
theorem prop_is_bool_cl (p : Prop) : p = True ∨ p = False := sorry


-- Some quantifier properties of being equal to constant
theorem exists_eq_C_PC_then_P (T : Type) (P : T → Prop) (C : T) : (∃ x, x = C) → (P C) → (∃ x, P x) := sorry
theorem forall_eq_C_PC_then_P (T : Type) (P : T → Prop) (C : T) : (∀ x, x = C) → (P C) → (∀ x, P x) := sorry

-- Partition in to equality and non-equality
theorem uni_eq_partition_cl (T : Type) (P : T → T → Prop) :
 (∀ x : T, ∀ y : T, P x y) ↔ ((∀ x : T, P x x) ∧ ∀ x : T, ∀ y : T, (x ≠ y → P x y)) := sorry
theorem exi_eq_partition_cl (T : Type) (P : T → T → Prop) :
 (∃ x : T, ∃ y : T, P x y) ↔ ((∃ x : T, P x x) ∨ ∃ x : T, ∃ y : T, (x ≠ y ∧ P x y)) := sorry


-- Exists And Unique Quantifier Properties
theorem exists_unique_then_exists (T : Type) (P : T → Prop) (h : ∃! x, P x) : (∃ x, P x)  := sorry
theorem exists_unique_then_unique (T : Type) (P : T → Prop)  (h : ∃! x, P x) (a : T) (b : T) (h₁ : P a) (h₂ : P b) : a = b := sorry
theorem exists_unique_congr (T : Type) (P Q : T → Prop) : (∀ x, (P x ↔ Q x)) → ((∃! x, P x) ↔ (∃! x, Q x)) := sorry
theorem exists_unique_eqv (T : Type) (P : T → Prop) :
   (∃! x, P x) ↔ (∃ x, P x) ∧ (∀ x y, (P x → P y → x = y)) := sorry
theorem uniq_then_exi_uni (T : Type) (P : T → Prop) (h : ∀ x y : T, x = y) (hex : ∃ x, P x) : ∀ x, P x := sorry
theorem exuniq_then_exi_uni (T : Type) (P : T → Prop) (h : ∃! _ : T, True) (hex : ∃ x, P x) : ∀ x, P x := sorry
