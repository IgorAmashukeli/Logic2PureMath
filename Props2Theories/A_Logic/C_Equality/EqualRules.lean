import Props2Theories.TacticNames
-- Equality Introduction

example (T : Type) (x : T) : x = x := by
  rfl

example (T : Type) (x : T) : x = x := by
  _rfl x, h
  assumption

-- Equality Elimination
example (T : Type) (P : T → Prop) (a b : T) (heq : a = b) (hpb : P b) : P a := by
  rewrite [heq]
  assumption

example (T : Type) (P : T → Prop) (a b : T) (heq : a = b) (hpa : P a) : P b := by
  rewrite [←heq]
  assumption

example (T : Type) (P : T → Prop) (a b : T) (heq : a = b) (hpa : P a) : P b := by
  rewrite [heq] at hpa
  assumption

example (T : Type) (P : T → Prop) (a b : T) (heq : a = b) (hpb : P b) : P a := by
  rewrite [←heq] at hpb
  assumption

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpa : P a) (hqa : Q a) : P b ∧ Q b := by
  rewrite [heq] at hqa
  rewrite [heq] at hpa
  intro_and_ hpa, hqa

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpa : P a) (hqa : Q a) : P b ∧ Q b := by
  rewrite [heq] at *
  intro_and_ hpa, hqa

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpb : P b) (hqb : Q b) : P a ∧ Q a := by
  rewrite [←heq] at *
  intro_and_ hpb, hqb

example  (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpb : P b) (hqb : Q b) : P a ∧ Q a := by
  rewrite [heq] at ⊢
  intro_and_ hpb, hqb

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpb : P b) (hqb : Q b) : P a ∧ Q a := by
  conv =>
    lhs
    rewrite [heq]
  conv =>
    rhs
    rewrite [heq]
  intro_and_ hpb, hqb

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpb : P b) (hqb : Q b) : P a ∧ Q a := by
  conv =>
    arg 1
    rewrite [heq]
  conv =>
    arg 2
    rewrite [heq]
  intro_and_ hpb, hqb

example (T : Type) (P Q : T → Prop) (a b c : T) (heq : a = b) (heq2 : c = a) (hpbc : P b ∧ Q c) : P a ∧ Q a := by
  rewrite [← heq, heq2] at hpbc
  assumption

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpa : P a) (hqa : Q a) : P b ∧ Q b := by
  conv at hpa =>
    arg 1
    rewrite [heq]
  conv at hqa =>
    arg 1
    rewrite [heq]
  intro_and_ hpa, hqa

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpqa : P a ∧ Q a) : P a ∧ Q b := by
  conv at hpqa =>
    arg 2
    rewrite [heq]
  assumption

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpqb : P b ∧ Q b) : P a ∧ Q b := by
  conv at hpqb =>
    lhs
    rewrite [← heq]
  assumption

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpb : P b) (hqb : Q b) : P a ∧ Q a := by
  rewrite [←heq] at hpb hqb
  intro_and_ hpb, hqb

example (T : Type) (P Q : T → Prop) (a b : T) (heq : a = b) (hpa : P a) (hqa : Q a) : P b ∧ Q b := by
  rewrite [heq] at hpa hqa
  intro_and_ hpa, hqa

example (T : Type) (a b : T) (heq : a = b) : a = b := by
  rewrite [heq]
  rfl

example (T : Type) (a b : T) (heq : a = b) : a = b := by
  rw [heq]

example (T : Type) (a b : T) (heq : a = b) : a = b := by
  rewrite [←heq]
  rfl

example (T : Type) (a b : T) (heq : a = b) : a = b := by
  rw [←heq]

example (P Q : Prop) (h : P ↔ Q) : P = Q := by
  propext_cl h

example (P Q : Prop) (h : P ↔ Q) : P = Q := by
  propext_cl_

example (P Q : Prop) (h : P ↔ Q) : P = Q := by
  _propext_cl h, h_new
  assumption

example (P Q : Prop) (h : P ↔ Q) : P = Q := by
  _propext_cl_
  assumption

example (T T₂: Type) (P Q : T → T₂) (h : ∀ x, (P x = Q x)) : P = Q := by
  funext_cl h

example (T T₂: Type) (P Q : T → T₂) (h : ∀ x, (P x = Q x)) : P = Q := by
  funext_cl_

example (T T₂ : Type) (P Q : T → T₂) (h : ∀ x, (P x = Q x)) : P = Q := by
  _funext_cl h, h_new
  assumption

example (T T₂ : Type) (P Q : T → T₂) (h : ∀ x, (P x = Q x)) : P = Q := by
  _funext_cl_
  assumption


-- Exists Unique Quantifier Notation:
-- (∃! x, P x) is notation for exists_unique
set_option pp.notation false in
#check (T : Type) → (P : T → Prop) → (∃! x, P x)

-- Exists Unique Definition Notation
#print Props2Theories.exists_unique


-- Optional number of tactics:
-- because exists_unique is defined in previous terms, you could do this without
-- new tactics, but I will add this for convinience

-- Exists Unique Introduction
example (T : Type) (P : T → Prop) (w : T) (h : P w) (g : ∀ y, P y → w = y) : ∃! x, P x := by
  intro_exists_unique w
  intro_and <;> assumption

example (T : Type) (P : T → Prop) (w : T) (h : P w) (g : ∀ y, P y → w = y) : ∃! x, P x := by
  intro_exists_unique_ w, h, g

example (T : Type) (P : T → Prop) (w : T) (h : P w) (g : ∀ y, P y → w = y) : ∃! x, P x := by
  _intro_exists_unique w, h, g, h_new
  assumption

example (T : Type) (P : T → Prop) (Q : Prop) (h : ∃! x, P x) (hq : ∀ x, (P x → Q)) : Q := by
  elim_exists_unique h, x, hp, hw
  specialize hq x
  apply hq
  assumption

example (T : Type) (P : T → Prop) (Q : Prop) (h : ∃! x, P x) (hq : ∀ x, (P x → Q)) : Q := by
  elim_exists_unique_ h, hq

example (T : Type) (P : T → Prop) (Q : Prop) (h : ∃! x, P x) (hq : ∀ x, (P x → Q)) : Q := by
  _elim_exists_unique h, Q, hfoll
  apply hfoll
  assumption


-- (≠) is default Lean symbol too
example (T : Type) : (∀ (x y : T), ¬(x = y) ↔ x ≠ y) := by
  intro x y
  intro_iff
  · intro h_xy; assumption
  · intro h_xy; assumption




-- Suppose, that for some predicate, you add instance trans_R
variable {T : Type}
variable {R : T → T → Prop}
axiom trans_R : ∀ (a b c : T), R a b → R b c → R a c
instance : Trans R R R where
  trans h1 h2 := trans_R _ _ _ h1 h2

-- Then, instead of using trans_R explicitly
example (a b c d : T) (h1 : R a b) (h2 : R b c) (h3 : R c d) : R a d := by
  apply trans_R _ c _ <;> try assumption
  apply trans_R _ b _ <;> try assumption


-- you can use calc tactic
-- Which looks more elegant
example (a b c d : T) (h1 : R a b) (h2 : R b c) (h3 : R c d) : R a d := by
  calc
    R a b := h1
    R _ c := h2
    R _ d := h3

-- For "=" and "<->" it is already added
