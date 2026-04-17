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

example (T T₂: Type) (P Q : T → T₂) (h : ∀ x, (P x = Q x)) : P = Q := by
  funext_cl h

example (T T₂: Type) (P Q : T → T₂) (h : ∀ x, (P x = Q x)) : P = Q := by
  funext_cl_


example (T T₂ : Type) (P Q : T → T₂) (h : ∀ x, (P x = Q x)) : P = Q := by
  _funext_cl_ h, h_new
  assumption
