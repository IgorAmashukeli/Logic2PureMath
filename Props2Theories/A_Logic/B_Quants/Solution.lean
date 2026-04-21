import Props2Theories.TacticNames
import Props2Theories.A_Logic.A_Props.Task

-- true is true for every element
theorem uni (T : Type) : ∀ _ : T, True := by
    intro t
    intro_true

 -- Fictitious quantifier
theorem exi_uni_then_uni (T : Type) (P : T → Prop) : (∃ _ : T, ∀ x : T, P x) → (∀ x : T, P x) := by
    intro h_ex_for
    elim_exists h_ex_for, y, h_x
    intro x
    apply h_x

theorem exi_exi_then_exi (T : Type) (P : T → Prop) : (∃ _ : T, ∃ x : T, P x) → (∃ x : T, P x) := by
    intro h_ex_ex
    elim_exists h_ex_ex, y, h_ex
    assumption

theorem uni_uni_then_uni (T : Type) (P : T → Prop) : (∀ _ : T, ∀ x : T, P x) → (∀ x : T, P x) := by
    intro h_y_x
    intro x
    specialize (h_y_x x x)
    assumption

theorem change_variable_uni (T : Type) (P: T → Prop) : (∀ x : T, P x) ↔ (∀ y : T, P y) := by
    intro_iff
    · intro h_for
      intro y
      apply h_for
    · intro h_for
      intro x
      apply h_for


theorem change_variable_exi (T : Type) (P: T → Prop) : (∃ x : T, P x) ↔ (∃ y : T, P y) := by
    intro_iff
    · intro h_ex
      elim_exists h_ex, x, h_x
      intro_exists_ x, h_x
    · intro h_ex
      elim_exists h_ex, y, h_y
      intro_exists_ y, h_y


-- Quantifier congruence
theorem uni_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∀ x : T, P x) ↔ (∀ x : T, Q x)) := by
    intro h_for
    intro_iff
    · intro h_for_p
      intro x
      specialize (h_for_p x)
      specialize (h_for x)
      apply_l_ h_for
    · intro h_for_p
      intro y
      specialize (h_for_p y)
      specialize (h_for y)
      apply_r_ h_for

theorem exi_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∃ x : T, P x) ↔ (∃ x: T, Q x)) := by
    intro h_for
    intro_iff
    · intro h_ex
      elim_exists h_ex, x, h_x
      specialize (h_for x)
      intro_exists x
      apply_l_ h_for
    · intro h_ex
      elim_exists h_ex, x, h_x
      specialize (h_for x)
      intro_exists x
      apply_r_ h_for


-- Quantifier commutativity --
theorem uni_comm (T T₂ : Type) (P : T →  T₂ → Prop) : (∀ x : T, ∀ y : T₂, P x y) ↔ (∀ y : T₂, ∀ x : T, P x y) := by
    intro_iff
    · intro h_x_y
      intros y x
      apply h_x_y
    · intro h_y_x
      intros x y
      apply h_y_x

theorem exi_comm (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∃ y : T₂, P x y) ↔ (∃ y : T₂, ∃ x : T, P x y) := by
    intro_iff
    · intro h_ex_ey
      elim_exists h_ex_ey, x, h_ey
      elim_exists h_ey, y, h_xy
      intro_exists y
      intro_exists x
      assumption
    · intro h_ey_ex
      elim_exists h_ey_ex, y, h_ex
      elim_exists h_ex, x, h_xy
      intro_exists x
      intro_exists y
      assumption

-- Quantifier Order Change
theorem exi_uni_then_uni_exi (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∀ y : T₂, P x y) → (∀ y : T₂, ∃ x : T, P x y) := by
    intro h_exi_uni
    elim_exists h_exi_uni, x, h_uni
    intro y
    specialize (h_uni y)
    intro_exists_ x, h_uni


-- Quantifier distributivity --
theorem uni_conj (T : Type) (P Q: T → Prop) : (∀ x: T, P x ∧ Q x) ↔ (∀ x : T, P x) ∧ (∀ x : T, Q x) := by
    intro_iff
    · intro h_for
      intro_and
      · intro x
        specialize (h_for x)
        elim_and_ h_for
      · intro x
        specialize (h_for x)
        elim_and_ h_for
    · intro h_and
      intro x
      elim_and h_and, h_px, h_qx
      intro_and
      · apply h_px
      · apply h_qx


theorem exi_disj (T : Type) (P Q : T → Prop) : (∃ x : T, P x ∨ Q x) ↔ (∃ x : T, P x) ∨ (∃ x: T, Q x) := by
    intro_iff
    · intro h_ex_px_qx
      elim_exists h_ex_px_qx, x, h_px_qx
      elim_or h_px_qx, h_px, h_qx
      · left
        intro_exists_ x, h_px
      · right
        intro_exists_ x, h_qx
    · intro h_ex_px_qx
      elim_or h_ex_px_qx, h_ex_px, h_ex_qx
      · elim_exists h_ex_px, x, h_px
        intro_exists x
        left_
      · elim_exists h_ex_qx, x, h_ex_qx
        intro_exists x
        right_


-- De morgan intutionists quantifier laws --
theorem morgan_uni (T : Type) (P : T → Prop) : (∀ x : T, ¬ P x) ↔ (¬ ∃ x : T, P x) := by
    intro_iff
    · intro h_for_npx
      intro_neg h_ex_px
      elim_exists h_ex_px, x, h_px
      specialize (h_for_npx x)
      elim_neg_ h_for_npx
    · intro h_n_ex_px
      intro x
      intro_neg h_px
      elim_neg h_n_ex_px
      intro_exists x
      assumption

theorem morgan_exi_lr (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) →  (¬ ∀ x : T, P x) := by
    intro h_ex_npx
    intro_neg h_for_px
    elim_exists h_ex_npx, x, h_npx
    elim_neg h_npx
    apply h_for_px


-- Quantifiers intutionists and constant predicates --
theorem brackets_exi_conj (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∧ Q x) ↔ (P ∧ ∃ x : T, Q x):= by
    intro_iff
    · intro h_ex_p_qx
      elim_exists h_ex_p_qx, x, h_p_qx
      elim_and h_p_qx, h_p, h_qx
      intro_and
      · assumption
      · intro_exists_ x, h_qx
    · intro h_p_ex_qx
      elim_and h_p_ex_qx, h_p, h_ex_qx
      elim_exists h_ex_qx, x, h_ex_qx
      intro_exists x
      intro_and <;> assumption


theorem brackets_uni_conj_lr (T : Type) (P : Prop) (Q : T → Prop) : (P ∧ ∀ x : T, Q x) → (∀ x : T, P ∧ Q x):= by
    intro h_p_and_qx
    elim_and h_p_and_qx, h_p, h_qx
    intro x
    specialize (h_qx x)
    intro_and <;> assumption


theorem brackets_exi_disj_lr (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) → (P ∨ ∃ x : T, Q x):= by
    intro h_ex
    elim_exists h_ex, x, p_or_qx
    elim_or p_or_qx, h_p, h_qx
    · left_
    · right; intro_exists_ x, h_qx


theorem brackets_uni_disj_rl (T : Type) (P : Prop) (Q : T → Prop) : (P ∨ ∀ x : T, Q x) → (∀ x : T, P ∨ Q x):= by
    intro h_p_for_qx
    intro x
    elim_or h_p_for_qx, h_p, h_qx
    · left_
    · right; apply h_qx


theorem brackets_left_uni_impl (T : Type) (P : Prop) (Q : T → Prop) : (P → ∀ x : T, Q x) ↔ (∀ x : T, (P → Q x)):= by
    intro_iff
    · intros h_p_for_qx x h_p
      specialize (h_p_for_qx h_p x)
      assumption
    · intros h_x_pqx h_p x
      specialize (h_x_pqx x h_p)
      assumption

theorem brackets_left_exi_impl_rl (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, (P → Q x)) → (P → ∃ x : T, Q x):= by
    intros h_ex_p_qx h_p
    elim_exists h_ex_p_qx, x, hp_qx
    intro_exists x
    revert h_p
    assumption


theorem brackets_right_uni_impl_rl (T : Type) (P : T → Prop) (Q : Prop) : (∃ x : T, (P x → Q)) → ((∀ x : T, P x) → Q):= by
    intros h_ex_px_q h_x_p
    elim_exists h_ex_px_q, x, h_px_q
    specialize (h_x_p x)
    apply h_px_q
    assumption


theorem brackets_right_exi_impl (T : Type) (P : T → Prop) (Q : Prop) : ((∃ x : T, P x) → Q) ↔ (∀ x : T, (P x → Q)):= by
    intro_iff
    · intros h_exp_q x h_px
      apply h_exp_q
      intro_exists_ x, h_px
    · intros h_px_q h_ex
      elim_exists h_ex, x, h_px
      specialize (h_px_q x)
      exact (h_px_q h_px)


-- Inhabitance --
def is_inhabited (T : Type) : Prop := ∃ _ : T, True

-- Inhabited fictitious quantifier --
theorem inh_uni_exi_then_exi (T : Type) (h : is_inhabited T) (P : T → Prop) : (∀ _ : T, ∃ x : T, P x) → (∃ x : T, P x) := by
    intro h_y_ex
    elim_exists h, z, tr
    specialize (h_y_ex z)
    assumption


-- Inhabited quantifier change --
theorem inh_uni_then_exi (T : Type) (h : is_inhabited T) (P : T → Prop) : (∀ x : T, P x) → (∃ x : T, P x) := by
    intro h_for
    elim_exists h, y, tr
    specialize (h_for y)
    intro_exists_ y, h_for

-- Inhabited intutionists quantifiers and constant predicates --
theorem inh_brackets_uni_conj (T : Type) (h : is_inhabited T) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∧ Q x) ↔ (P ∧ ∀ x : T, Q x) := by
    intro_iff
    elim_exists h, v, tr
    · intro h_x_pqx
      intro_and
      · elim_and_ (h_x_pqx v)
      · intro x
        elim_and_ (h_x_pqx x)
    · intro h_p_for_qx
      elim_and h_p_for_qx, h_p, h_for_qx
      intro x
      specialize (h_for_qx x)
      intro_and <;> assumption

theorem inh_brackets_exi_disj (T : Type) (h : is_inhabited T) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) ↔ (P ∨ ∃ x : T, Q x) := by
    intro_iff
    · intro h_ex_p_qx
      elim_exists h_ex_p_qx, x, h_p_qx
      elim_or h_p_qx, h_p, h_qx
      · left_
      · right; intro_exists_ x, h_qx
    · intro h_p_ex
      elim_exists h, u, tr
      elim_or h_p_ex, h_p, h_ex
      · intro_exists u; left_
      · elim_exists h_ex, x, h_qx
        intro_exists x; right_


-- Classical quantifiers and constant predicates --
theorem brackets_uni_disj_cl (T : Type) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∨ Q x) ↔ (P ∨ ∀ x : T, Q x) := by
    intro_iff
    · intro h_for_p_qx
      apply (cases_analysis_cl P)
      · intro h_P
        left_
      · intro h_nP
        right
        intro x
        specialize (h_for_p_qx x)
        elim_or h_for_p_qx, h_p, h_qx
        · elim_f_neg h_nP
        · assumption
    · intro h_p_forx
      intro x
      elim_or h_p_forx, h_p, h_forx
      · left_
      · right
        apply h_forx


-- Classical de morgan law --
theorem morgan_exi_cl (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) ↔ (¬ ∀ x : T, P x) := by
    intro_iff
    · exact (morgan_exi_lr _ P)
    · intro h_n_for
      by_contra h_nex
      elim_neg h_n_for
      intro x
      by_contra h_npx
      elim_neg h_nex
      intro_exists_ x, h_npx


theorem inh_brackets_left_exi_impl_cl (T : Type) (h : is_inhabited T) (P : Prop) (Q : T → Prop) : (P → ∃ x : T, Q x) ↔ (∃ x : T, (P → Q x)) := by
    intro_iff
    · intro h_p_ex
      apply (cases_analysis_cl P)
      · intro h_P
        specialize (h_p_ex h_P)
        elim_exists h_p_ex, x, h_qx
        intro_exists x
        intro h_p
        assumption
      · intro h_nP
        elim_exists h, u, tr
        intro_exists u
        apply (neg_to_impl); assumption
    · exact (brackets_left_exi_impl_rl T P Q)



theorem inh_brackets_right_uni_impl_cl (T : Type) (h : is_inhabited T) (P: T → Prop) (Q : Prop) :  ((∀ x : T, P x) → Q) ↔ (∃ x : T, (P x → Q)) := by
    intro_iff
    · intro h_px_q
      apply (cases_analysis_cl (∀ x, P x))
      · intro h_for_px
        elim_exists h, u, tr
        intro_exists u
        intro h_pu
        exact (h_px_q h_for_px)
      · intro h_not_for_px
        _apply_r (morgan_exi_cl T P), h_not_for_px, h_exi
        elim_exists h_exi, u, h_npu
        intro_exists u
        intro h_pu
        elim_f_neg h_npu
    · exact (brackets_right_uni_impl_rl T P Q)



--In non empty pub there is someone in the pub such that, if he or she is drinking, then everyone in the pub is drinking --
theorem drinker_paradox_cl (Pub : Type) (h : is_inhabited Pub) (is_drinking : Pub → Prop):
 (∃ someone : Pub, (is_drinking someone  → ∀ person : Pub, is_drinking person)) := by
    apply_l (inh_brackets_right_uni_impl_cl Pub h is_drinking (∀ someone, is_drinking someone))
    apply axiomatic_rule
