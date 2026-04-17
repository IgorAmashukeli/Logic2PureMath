import Props2Theories.TacticNames

-- 1) Universal Quantifier Rules

example (T : Type) (P : T → Prop) (h : ∀ x, P x) (a : T) : P a := by
  apply h

example (T : Type) (P : T → Prop) (h : ∀ x, P x) (a : T) : P a := by
  specialize (h a)
  assumption

example (T : Type) (P : T → Prop) (h : ∀ x, P x) (a : T) : P a := by
  have ha := h a
  assumption

example (T : Type) (P : T → Prop) (h : ∀ x, P x) (a : T) : P a := by
  exact (h a)

example (T : Type) (P : T → Prop) (h : ∀ x, P x) : ∀ x, P x := by
  intro x
  apply h

example (T : Type) (P : T → Prop) (h : ∀ x, P x) : ∀ x, P x := by
  have h₂ : ∀ x, P x := by (exact h)
  assumption

example (T : Type) (P : T → T → Prop) (h : ∀ x y, P x y) : ∀ x y, P x y := by
  intros x y
  apply h

-- 2) Existential Quantifier Rules

example (T : Type) (P : T → Prop) (a : T) (h : P a) : ∃ x, P x := by
  intro_exists a
  assumption

example (T : Type) (P : T → Prop) (a : T) (h : P a) : ∃ x, P x := by
  intro_exists_ a , h

example (T : Type) (P : T → Prop) (a : T) (h : P a) : ∃ x, P x := by
  _intro_exists a, h, h_ex
  exact h_ex

example (T : Type) (P : T → Prop) (Q : Prop) (h : ∃ x, P x) (hq : ∀ x, (P x → Q)) : Q := by
  elim_exists h, a, ha
  specialize (hq a)
  apply hq
  assumption


example (T : Type) (P : T → Prop) (Q : Prop) (h : ∃ x, P x) (hq : ∀ x, (P x → Q)) : Q := by
  elim_exists_ h, hq


example (T : Type) (P : T → Prop) (Q : Prop) (h : ∃ x, P x) (hq : ∀ x, (P x → Q)) : Q := by
  _elim_exists h, Q, hfoll
  apply hfoll
  assumption


example (T : Type) (P : T → Prop) (Q : Prop) (h : ∃ x, P x) (hq : ∀ x, (P x → Q)) : Q := by
  _elim_exists_app h, Q, hq, hfoll
  assumption
