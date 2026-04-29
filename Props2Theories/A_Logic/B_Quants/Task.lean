import Props2Theories.TacticNames
import Props2Theories.A_Logic.A_Props.Task

-- True is True for every element
theorem uni (T : Type) : ∀ _ : T, True := sorry

 -- Fictitious quantifier
theorem exi_uni_then_uni (T : Type) (P : T → Prop) : (∃ _ : T, ∀ x : T, P x) → (∀ x : T, P x) := sorry
theorem exi_exi_then_exi (T : Type) (P : T → Prop) : (∃ _ : T, ∃ x : T, P x) → (∃ x : T, P x) := sorry
theorem uni_uni_then_uni (T : Type) (P : T → Prop) : (∀ _ : T, ∀ x : T, P x) → (∀ x : T, P x) := sorry

-- Chaingin variable in quantifier
theorem change_variable_uni (T : Type) (P: T → Prop) : (∀ x : T, P x) ↔ (∀ y : T, P y) := sorry
theorem change_variable_exi (T : Type) (P: T → Prop) : (∃ x : T, P x) ↔ (∃ y : T, P y) := sorry

-- Quantifier congruence
theorem uni_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∀ x : T, P x) ↔ (∀ x : T, Q x)) := sorry
theorem exi_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∃ x : T, P x) ↔ (∃ x: T, Q x)) := sorry

-- Quantifier commutativity --
theorem uni_comm (T T₂ : Type) (P : T →  T₂ → Prop) : (∀ x : T, ∀ y : T₂, P x y) ↔ (∀ y : T₂, ∀ x : T, P x y) := sorry
theorem exi_comm (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∃ y : T₂, P x y) ↔ (∃ y : T₂, ∃ x : T, P x y) := sorry

-- Quantifier Order Change
theorem exi_uni_then_uni_exi (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∀ y : T₂, P x y) → (∀ y : T₂, ∃ x : T, P x y) := sorry

-- Quantifier distributivity --
theorem uni_conj (T : Type) (P Q: T → Prop) : (∀ x: T, P x ∧ Q x) ↔ (∀ x : T, P x) ∧ (∀ x : T, Q x) := sorry
theorem exi_disj (T : Type) (P Q : T → Prop) : (∃ x : T, P x ∨ Q x) ↔ (∃ x : T, P x) ∨ (∃ x: T, Q x) := sorry

-- De morgan intutionists quantifier laws --
theorem morgan_uni (T : Type) (P : T → Prop) : (∀ x : T, ¬ P x) ↔ (¬ ∃ x : T, P x) := sorry
theorem morgan_exi_lr (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) →  (¬ ∀ x : T, P x) := sorry

-- Quantifiers intutionists and constant predicates --
theorem brackets_exi_conj (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∧ Q x) ↔ (P ∧ ∃ x : T, Q x):= sorry
theorem brackets_uni_conj_lr (T : Type) (P : Prop) (Q : T → Prop) : (P ∧ ∀ x : T, Q x) → (∀ x : T, P ∧ Q x):= sorry
theorem brackets_exi_disj_lr (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) → (P ∨ ∃ x : T, Q x):= sorry
theorem brackets_uni_disj_rl (T : Type) (P : Prop) (Q : T → Prop) : (P ∨ ∀ x : T, Q x) → (∀ x : T, P ∨ Q x):= sorry
theorem brackets_left_uni_impl (T : Type) (P : Prop) (Q : T → Prop) : (P → ∀ x : T, Q x) ↔ (∀ x : T, (P → Q x)):= sorry
theorem brackets_left_exi_impl_rl (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, (P → Q x)) → (P → ∃ x : T, Q x):= sorry
theorem brackets_right_uni_impl_rl (T : Type) (P : T → Prop) (Q : Prop) : (∃ x : T, (P x → Q)) → ((∀ x : T, P x) → Q):= sorry
theorem brackets_right_exi_impl (T : Type) (P : T → Prop) (Q : Prop) : ((∃ x : T, P x) → Q) ↔ (∀ x : T, (P x → Q)):= sorry

-- Inhabitance --
def is_inhabited (T : Type) : Prop := ∃ _ : T, True

-- Inhabited fictitious quantifier --
theorem inh_uni_exi_then_exi (T : Type) (h : is_inhabited T) (P : T → Prop) : (∀ _ : T, ∃ x : T, P x) → (∃ x : T, P x) := sorry

-- Inhabited quantifier change --
theorem inh_uni_then_exi (T : Type) (h : is_inhabited T) (P : T → Prop) : (∀ x : T, P x) → (∃ x : T, P x) := sorry

-- Inhabited intutionists quantifiers and constant predicates --
theorem inh_brackets_uni_conj (T : Type) (h : is_inhabited T) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∧ Q x) ↔ (P ∧ ∀ x : T, Q x) := sorry
theorem inh_brackets_exi_disj (T : Type) (h : is_inhabited T) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) ↔ (P ∨ ∃ x : T, Q x) := sorry

-- Classical quantifiers and constant predicates --
theorem brackets_uni_disj_cl (T : Type) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∨ Q x) ↔ (P ∨ ∀ x : T, Q x) := sorry

-- Classical de morgan law --
theorem morgan_exi_cl (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) ↔ (¬ ∀ x : T, P x) := sorry
theorem inh_brackets_left_exi_impl_cl (T : Type) (h : is_inhabited T) (P : Prop) (Q : T → Prop) : (P → ∃ x : T, Q x) ↔ (∃ x : T, (P → Q x)) := sorry
theorem inh_brackets_right_uni_impl_cl (T : Type) (h : is_inhabited T) (P: T → Prop) (Q : Prop) :  ((∀ x : T, P x) → Q) ↔ (∃ x : T, (P x → Q)) := sorry

-- In non empty pub there is someone in the pub such that, if he or she is drinking, then everyone in the pub is drinking --
theorem drinker_paradox_cl (Pub : Type) (h : is_inhabited Pub) (is_drinking : Pub → Prop): (∃ someone : Pub, (is_drinking someone  → ∀ person : Pub, is_drinking person)) := sorry
