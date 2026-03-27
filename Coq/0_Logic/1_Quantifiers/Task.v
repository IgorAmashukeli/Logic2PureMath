Require Import Top.TacticNames.
Require Import Unicode.Utf8.

(* 1) True is true for every element*) 
Theorem uni (T : Type) : (∀ y : T, True).
Proof.
Admitted.


(* 2) Fictitious quantifier*)
Theorem exi_uni_then_uni (T : Type) (P : T → Prop) : (∃ y : T, ∀ x : T, P x) → (∀ x : T, P x).
Proof.
Admitted.
Theorem exi_exi_then_exi (T : Type) (P : T → Prop) : (∃ y : T, ∃ x : T, P x) → (∃ x : T, P x).
Proof.
Admitted.
Theorem uni_uni_then_uni (T : Type) (P : T → Prop) : (∀ y : T, ∀ x : T, P x) → (∀ x : T, P x).
Proof.
Admitted.


(* 3) Variable changing*)
Theorem change_variable_uni (T : Type) (P: T → Prop) : (∀ x : T, P x) ↔ (∀ y : T, P y).
Proof.   
Admitted.
Theorem change_variable_exi (T : Type) (P: T → Prop) : (∃ x : T, P x) ↔ (∃ y : T, P y).
Proof.
Admitted.


(* 4) Quantifier congruence*)
Theorem uni_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∀ x : T, P x) ↔ (∀ x : T, Q x)).
Proof.
Admitted.
Theorem exi_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∃ x : T, P x) ↔ (∃ x: T, Q x)).
Proof.
Admitted.


(* 5) Quantifier commutativity*)
Theorem uni_comm (T T₂ : Type) (P : T →  T₂ → Prop) : (∀ x : T, ∀ y : T₂, P x y) ↔ (∀ y : T₂, ∀ x : T, P x y).
Proof.
Theorem exi_comm (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∃ y : T₂, P x y) ↔ (∃ y : T₂, ∃ x : T, P x y).
Proof.
Admitted.



(* 6) Quantifier order change*)
Theorem exi_uni_then_uni_exi (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∀ y : T₂, P x y) → (∀ y : T₂, ∃ x : T, P x y).
Proof.
Admitted.


(* 7) Quantifier distributivity*)
Theorem uni_conj (T : Type) (P Q: T → Prop) : (∀ x: T, P x ∧ Q x) ↔ (∀ x : T, P x) ∧ (∀ x : T, Q x).
Proof.
Admitted.
Theorem exi_disj (T : Type) (P Q : T → Prop) : (∃ x : T, P x ∨ Q x) ↔ (∃ x : T, P x) ∨ (∃ x: T, Q x).
Proof.
Admitted.


(* 8) De morgan intutionists quantifier laws*)
Theorem morgan_uni (T : Type) (P : T → Prop) : (∀ x : T, ¬ P x) ↔ (¬ ∃ x : T, P x).
Proof.
Admitted.
Theorem morgan_exi_lr (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) →  (¬ ∀ x : T, P x).
Proof.
Admitted.


(* 9) Quantifiers intutionists and constant predicates*)
Theorem brackets_exi_conj (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∧ Q x) ↔ (P ∧ ∃ x : T, Q x).
Proof.
Admitted.
Theorem brackets_uni_conj_lr (T : Type) (P : Prop) (Q : T → Prop) : (P ∧ ∀ x : T, Q x) → (∀ x : T, P ∧ Q x).
Proof.
Admitted.
Theorem brackets_exi_disj_lr (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) → (P ∨ ∃ x : T, Q x).
Proof.
Admitted.
Theorem brackets_uni_disj_rl (T : Type) (P : Prop) (Q : T → Prop) : (P ∨ ∀ x : T, Q x) → (∀ x : T, P ∨ Q x).
Proof.
Admitted.
Theorem brackets_left_uni_impl (T : Type) (P : Prop) (Q : T → Prop) : (P → ∀ x : T, Q x) ↔ (∀ x : T, (P → Q x)).
Proof.
Admitted.
Theorem brackets_left_exi_impl_rl (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, (P → Q x)) → (P → ∃ x : T, Q x).
Proof.
Admitted.
Theorem brackets_right_uni_impl_rl (T : Type) (P : T → Prop) (Q : Prop) : (∃ x : T, (P x → Q)) → ((∀ x : T, P x) → Q).
Proof.
Admitted.
Theorem brackets_right_exi_impl (T : Type) (P : T → Prop) (Q : Prop) : ((∃ x : T, P x) → Q) ↔ (∀ x : T, (P x → Q)).
Proof.
Admitted.

(* 10) Inhabitance*)
Definition inhabited (T : Type) : Prop := ∃ v : T, True.

(* 11) Inhabited fictitious quantifier*)
Theorem inh_uni_exi_then_exi (T : Type) (h : inhabited T) (P : T → Prop) : (∀ y : T, ∃ x : T, P x) → (∃ x : T, P x).
Proof.
Admitted.

(* 12) Inhabited quantifier change*)
Theorem inh_uni_then_exi (T : Type) (h : inhabited T) (P : T → Prop) : (∀ x : T, P x) → (∃ x : T, P x).
Proof.
Admitted.

(* 13) Inhabited intutionists quantifiers and constant predicates*)
Theorem inh_brackets_uni_conj (T : Type) (h : inhabited T) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∧ Q x) ↔ (P ∧ ∀ x : T, Q x).
Proof. 
Admitted.
Theorem inh_brackets_exi_disj (T : Type) (h : inhabited T) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) ↔ (P ∨ ∃ x : T, Q x).
Proof.
Admitted.


(* 14) Classical quantifiers and constant predicates*)
Theorem brackets_uni_disj_cl (T : Type) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∨ Q x) ↔ (P ∨ ∀ x : T, Q x).
Proof.
Admitted.


(* 15) Classical de morgan law*)
Theorem morgan_exi_cl (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) ↔ (¬ ∀ x : T, P x).
Proof.
Admitted.


(* 16) Classical inhabited quantifiers and constant predicates*)
Theorem inh_brackets_left_exi_impl_cl (T : Type) (h : inhabited T) (P : Prop) (Q : T → Prop) : (P → ∃ x : T, Q x) ↔ (∃ x : T, (P → Q x)).
Proof.
Admitted.
Theorem inh_brackets_right_uni_impl_cl (T : Type) (h : inhabited T) (P: T → Prop) (Q : Prop) :  ((∀ x : T, P x) → Q) ↔ (∃ x : T, (P x → Q)).
Proof.
Admitted.


(* 17) In non empty pub there is someone in the pub such that, 
if he or she is drinking, then everyone in the pub is drinking *)
Theorem drinker_paradox_cl (Pub : Type) (h : inhabited Pub) (is_drinking : Pub → Prop):
 (∃ someone : Pub, (is_drinking someone  → ∀ person : Pub, is_drinking person)).
Proof.
Admitted.

