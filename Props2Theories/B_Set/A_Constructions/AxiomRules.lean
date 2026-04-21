import Props2Theories.TacticNames
import Props2Theories.Axioms

#check Set
#check (x y : Set) → (x ∈ y)
-- ∈ is the same as belongs
#check (belongs)
-- (x ∉ y) is the same as ¬(x ∈ y)
#check (x y : Set) → (x ∉ y)


-- Bounded Quantifier Rules

-- Optional number of tactics:
-- because bounded quantifiers are defined in previous terms, you could do this without
-- new tactics, but I will add this for convinience


example (A t: Set) (g : t ∈ A) (P : Set → Prop) (h : ∀ x ∈ A, P x) : P t := by
  specialize_in h, t
  apply h
  assumption

example (A  t: Set) (g : t ∈ A) (P : Set → Prop) (h : ∀ x ∈ A, P x) : P t := by
  specialize_in_ h, t, g
  assumption

example (A : Set) (P : Set → Prop) (h : ∀ x ∈ A, P x) : ∀ x ∈ A, P x := by
  intro_in x
  intro hx
  apply h
  assumption

example (A : Set) (P : Set → Prop) (h : ∀ x ∈ A, P x) : ∀ x ∈ A, P x := by
  intro_in_ x, hx
  apply h
  assumption

example (A : Set) (P : Set → Prop) (h : ∀ x ∈ A, P x) : ∀ x ∈ A, P x := by
  intros x hx
  apply h
  assumption

example (A t : Set) (P : Set → Prop) (h : t ∈ A) (h₂ : P t) : ∃ x ∈ A, P x := by
  intro_exists_in t <;> assumption

example (A t : Set) (P : Set → Prop) (h : t ∈ A) (h₂ : P t) : ∃ x ∈ A, P x := by
  intro_exists_in_ t, h, h₂

example (A t : Set) (P : Set → Prop) (h : t ∈ A) (h₂ : P t) : ∃ x ∈ A, P x := by
  _intro_exists_in t, h, h₂, h_new
  assumption

example (A : Set) (P : Set → Prop) (Q : Prop) (h : ∃ x ∈ A, P x) (hq : ∀ x ∈ A, (P x → Q)) : Q := by
  elim_exists_in h, a, hx, hpr
  specialize_in_ hq, a, hx
  exact (hq hpr)

example (A : Set) (P : Set → Prop) (Q : Prop) (h : ∃ x ∈ A, P x) (hq : ∀ x ∈ A, (P x → Q)) : Q := by
  elim_exists_in_ h, hq

example (A : Set) (P : Set → Prop) (Q : Prop) (h : ∃ x ∈ A, P x) (hq : ∀ x ∈ A, (P x → Q)) : Q := by
  _elim_exists_in h, Q, h_new
  apply h_new
  assumption

example (A  w: Set) (P : Set → Prop) (h₁ : w ∈ A) (h : P w) (g : ∀ y ∈ A, P y → w = y) : ∃! x ∈ A, P x := by
  intro_exists_unique_in w
  intro_and <;> try intro_and <;> try assumption
  assumption

example (A  w: Set) (P : Set → Prop) (h₁ : w ∈ A) (h : P w) (g : ∀ y ∈ A, P y → w = y) : ∃! x ∈ A, P x := by
  intro_exists_unique_in_ w, h₁, h, g

example (A  w: Set) (P : Set → Prop) (h₁ : w ∈ A) (h : P w) (g : ∀ y ∈ A, P y → w = y) : ∃! x ∈ A, P x := by
  _intro_exists_unique_in w, h₁, h, g, h_new
  assumption

example (A : Set) (P : Set → Prop) (Q : Prop) (h : ∃! x ∈ A, P x) (hq : ∀ x ∈ A, (P x → Q)) : Q := by
  elim_exists_unique_in h, a, hina, hpr, hun
  specialize_in_ hq, a, hina
  apply hq
  assumption

example (A : Set) (P : Set → Prop) (Q : Prop) (h : ∃! x ∈ A, P x) (hq : ∀ x ∈ A, (P x → Q)) : Q := by
  elim_exists_unique_in_ h, hq


example (A : Set) (P : Set → Prop) (Q : Prop) (h : ∃! x ∈ A, P x) (hq : ∀ x ∈ A, (P x → Q)) : Q := by
  _elim_exists_unique_in h, Q, h_new
  apply h_new
  assumption


-- iota operator of definite description and its properties
#print iota_op
#print iota_pr
#print iota_e

-- ZF axioms
#print regularity_ax
#print set_extensionality_ax
#print emp_st_ax
#print boolean_ax
#print union_ax
#print replacement_ax
#print infinity_ax

-- ZFC Choice axiom
#print choice_ax

-- TG Tarski axiom
#print tarski_ax
