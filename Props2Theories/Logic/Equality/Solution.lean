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
