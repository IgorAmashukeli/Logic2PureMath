Require Import Top.TacticNames.
Require Import Unicode.Utf8.
Require Import Props.Task.


(* 1) True is true for every element*) 
Theorem uni (T : Type) : (∀ y : T, True).
Proof.
    intro t.
    intro_true.
Qed.


(* 2) Fictitious quantifier*)
Theorem exi_uni_then_uni (T : Type) (P : T → Prop) : (∃ y : T, ∀ x : T, P x) → (∀ x : T, P x).
Proof.
    intro het.
    _elim_exists het (∀ x : T, P x) hfoll.
    apply hfoll.
    intros ht hf. assumption.
Qed.
Theorem exi_exi_then_exi (T : Type) (P : T → Prop) : (∃ y : T, ∃ x : T, P x) → (∃ x : T, P x).
Proof.
    intro het.
    _elim_exists het (∃ x : T, P x) hfoll.
    apply hfoll.
    intros ht hf. assumption.
Qed.
Theorem uni_uni_then_uni (T : Type) (P : T → Prop) : (∀ y : T, ∀ x : T, P x) → (∀ x : T, P x).
Proof.
    intro hfor. intro x.
    repeat specialize (hfor x).
    assumption.
Qed.


(* 3) Variable changing*)
Theorem change_variable_uni (T : Type) (P: T → Prop) : (∀ x : T, P x) ↔ (∀ y : T, P y).
Proof.
    intro_iff.
    -   intro hx. intro y. specialize (hx y). assumption.
    -   intro hy. intro x. specialize (hy x). assumption.    
Qed.
Theorem change_variable_exi (T : Type) (P: T → Prop) : (∃ x : T, P x) ↔ (∃ y : T, P y).
Proof.
    intro_iff.
    -   intro hx. elim_exists hx x hpx. exists_ x hpx.
    -   intro hy. elim_exists hy y hpy. exists_ y hpy.
Qed.


(* 4) Quantifier congruence*)
Theorem uni_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∀ x : T, P x) ↔ (∀ x : T, Q x)).
Proof.
    intro hpqx.
    intro_iff.
    -   intro hpx. intro x.
        specialize (hpqx x).
        elim_iff_l_ hpqx.
        apply hpx.
    -   intro hqx. intro x.
        specialize (hpqx x).
        elim_iff_r_ hpqx.
        apply hqx.
Qed.
Theorem exi_congr (T : Type) (P Q : T → Prop) : (∀ x : T, (P x ↔ Q x)) → ((∃ x : T, P x) ↔ (∃ x: T, Q x)).
Proof.
    intro hpqx.
    intro_iff.
    -   intro hpx.
        elim_exists hpx y hp.
        exists y.
        specialize (hpqx y).
        elim_iff_l hpqx hp.
    -   intro hqx.
        elim_exists hqx y hq.
        exists y.
        specialize (hpqx y).
        elim_iff_r hpqx hq.
Qed.


(* 5) Quantifier commutativity*)
Theorem uni_comm (T T₂ : Type) (P : T →  T₂ → Prop) : (∀ x : T, ∀ y : T₂, P x y) ↔ (∀ y : T₂, ∀ x : T, P x y).
Proof.
    intro_iff.
    -   intro hxy.
        intros y x.
        specialize (hxy x y).
        assumption.
    -   intro hyx.
        intros x y.
        specialize (hyx y x).
        assumption.

Qed.
Theorem exi_comm (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∃ y : T₂, P x y) ↔ (∃ y : T₂, ∃ x : T, P x y).
Proof.
    intro_iff.
    -   intro hxy.
        elim_exists hxy u hpuv.
        elim_exists hpuv v hp.
        exists v.
        exists u.
        assumption.
    -   intro hyx.
        elim_exists hyx v hpvu.
        elim_exists hpvu u hp.
        exists u.
        exists v.
        assumption.
Qed.



(* 6) Quantifier order change*)
Theorem exi_uni_then_uni_exi (T T₂ : Type) (P : T → T₂ → Prop) : (∃ x : T, ∀ y : T₂, P x y) → (∀ y : T₂, ∃ x : T, P x y).
Proof.
    intro hxy.
    intro y.
    elim_exists hxy u hyu.
    exists u.
    apply hyu.
Qed.


(* 7) Quantifier distributivity*)
Theorem uni_conj (T : Type) (P Q: T → Prop) : (∀ x: T, P x ∧ Q x) ↔ (∀ x : T, P x) ∧ (∀ x : T, Q x).
Proof.
    intro_iff.
    -   intro hpqx.
        intro_and; intro x; specialize (hpqx x); elim_and_ hpqx.
    -   intro hpqx.
        intro x.
        elim_and hpqx hpx hqx.
        specialize (hpx x). specialize (hqx x).
        intro_and_ hpx hqx.
Qed.
Theorem exi_disj (T : Type) (P Q : T → Prop) : (∃ x : T, P x ∨ Q x) ↔ (∃ x : T, P x) ∨ (∃ x: T, Q x).
Proof.
    intro_iff.
    -   intro hpqx.
        elim_exists hpqx a pq.
        elim_or pq h h; [left | right]; exists_ a h.
    -   intro hpqx.
        elim_or hpqx h h; elim_exists h a h; exists a; [left_ | right_].
Qed.


(* 8) De morgan intutionists quantifier laws*)
Theorem morgan_uni (T : Type) (P : T → Prop) : (∀ x : T, ¬ P x) ↔ (¬ ∃ x : T, P x).
Proof.
    intro_iff.
    -   intro hpnx.
        intro_neg hex.
        elim_exists hex a h.
        specialize (hpnx a).
        elim_neg_ hpnx.
    -   intro hnpex.
        intro y.
        intro_neg hpy.
        elim_neg hnpex.
        exists y.
        assumption.
Qed.
Theorem morgan_exi_lr (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) →  (¬ ∀ x : T, P x).
Proof.
    intro hex.
    intro_neg hxp.
    elim_exists hex y hnpy.
    specialize (hxp y).
    elim_neg_ hnpy.
Qed.


(* 9) Quantifiers intutionists and constant predicates*)
Theorem brackets_exi_conj (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∧ Q x) ↔ (P ∧ ∃ x : T, Q x).
Proof.
    intro_iff.
    -   intro hex.
        elim_exists hex u hpqu.
        elim_and hpqu hp hqu.
        intro_and; [| exists u]; assumption.
    -   intro hpex.
        elim_and hpex hp hex.
        elim_exists hex u hqu.
        exists u.
        intro_and_ hp hqu.
Qed.
Theorem brackets_uni_conj_lr (T : Type) (P : Prop) (Q : T → Prop) : (P ∧ ∀ x : T, Q x) → (∀ x : T, P ∧ Q x).
Proof.
    intro hpunix.
    elim_and hpunix hp hqx.
    intro x.
    specialize (hqx x).
    intro_and; assumption.
Qed.
Theorem brackets_exi_disj_lr (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) → (P ∨ ∃ x : T, Q x).
Proof.
    intro hex.
    elim_exists hex u hpqu.
    elim_or hpqu hp hqu; [left | right; exists u]; assumption.
Qed.
Theorem brackets_uni_disj_rl (T : Type) (P : Prop) (Q : T → Prop) : (P ∨ ∀ x : T, Q x) → (∀ x : T, P ∨ Q x).
Proof.
    intro hpqx.
    intro x.
    elim_or hpqx hp hqx; [left | right; apply hqx]; assumption.
Qed.
Theorem brackets_left_uni_impl (T : Type) (P : Prop) (Q : T → Prop) : (P → ∀ x : T, Q x) ↔ (∀ x : T, (P → Q x)).
Proof.
    intro_iff.
    -   intros hpqx x hp.
        pose (hqx := hpqx hp).
        exact (hqx x). 
    -   intros hpqx hp x.
        specialize (hpqx x).
        exact (hpqx hp).
Qed.
Theorem brackets_left_exi_impl_rl (T : Type) (P : Prop) (Q : T → Prop) : (∃ x : T, (P → Q x)) → (P → ∃ x : T, Q x).
Proof.
    intros hex hp.
    elim_exists hex u hpqu.
    exists u.
    exact (hpqu hp).
Qed.
Theorem brackets_right_uni_impl_rl (T : Type) (P : T → Prop) (Q : Prop) : (∃ x : T, (P x → Q)) → ((∀ x : T, P x) → Q).
Proof.
    intros hex hpqx.
    elim_exists hex u hpuq.
    specialize (hpqx u).
    exact (hpuq hpqx).
Qed.
Theorem brackets_right_exi_impl (T : Type) (P : T → Prop) (Q : Prop) : ((∃ x : T, P x) → Q) ↔ (∀ x : T, (P x → Q)).
Proof.
    intro_iff.
    -   intro hex.
        intros u hpu.
        apply hex.
        exists u.
        assumption.
    -   intros hpqx hex.
        elim_exists hex u hpu.
        specialize (hpqx u).
        exact (hpqx hpu).
Qed.

(* 10) Inhabitance*)
Definition inhabited (T : Type) : Prop := ∃ v : T, True.

(* 11) Inhabited fictitious quantifier*)
Theorem inh_uni_exi_then_exi (T : Type) (h : inhabited T) (P : T → Prop) : (∀ y : T, ∃ x : T, P x) → (∃ x : T, P x).
Proof.
    intro hpfex.
    elim_exists h u tr. clear tr.
    specialize (hpfex u).
    assumption.
Qed.

(* 12) Inhabited quantifier change*)
Theorem inh_uni_then_exi (T : Type) (h : inhabited T) (P : T → Prop) : (∀ x : T, P x) → (∃ x : T, P x).
Proof.
    intro hpx.
    elim_exists h u tr. clear tr.
    exists u.
    specialize (hpx u).
    assumption.
Qed.

(* 13) Inhabited intutionists quantifiers and constant predicates*)
Theorem inh_brackets_uni_conj (T : Type) (h : inhabited T) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∧ Q x) ↔ (P ∧ ∀ x : T, Q x).
Proof.
    intro_iff.
    -   intro hpqx.
        pose hpqx as hpqx₂.
        elim_exists h u tr. clear tr.
        specialize (hpqx₂ u).
        elim_and hpqx₂ hp hqu. clear hqu.
        intro_and; [| intro x; specialize (hpqx x); elim_and hpqx hp₂ hqx]; assumption.
    -   exact (brackets_uni_conj_lr T P Q). 
        
Qed.
Theorem inh_brackets_exi_disj (T : Type) (h : inhabited T) (P : Prop) (Q : T → Prop) : (∃ x : T, P ∨ Q x) ↔ (P ∨ ∃ x : T, Q x).
Proof.
    intro_iff.
    -   exact (brackets_exi_disj_lr T P Q).
    -   intro hpex.
        elim_or hpex hp heqx.
        +   elim_exists h u tr. clear tr.
            exists u. left_.
        +   elim_exists heqx u hqu.
            exists u. right_.
Qed.


(* 14) Classical quantifiers and constant predicates*)
Theorem brackets_uni_disj_cl (T : Type) (P : Prop) (Q : T → Prop) : (∀ x : T, P ∨ Q x) ↔ (P ∨ ∀ x : T, Q x).
Proof.
    intro_iff.
    -   intro hpqx.
        pose (tndp := tnd_cl P).
        elim_or tndp hP hnP.
        +   left_.
        +   right.
            intro x.
            specialize (hpqx x).
            elim_or hpqx hp hqx; [elim_f_neg hnP| assumption].
    -   exact (brackets_uni_disj_rl T P Q).
Qed.


(* 15) Classical de morgan law*)
Theorem morgan_exi_cl (T : Type) (P : T → Prop) : (∃ x : T, ¬ P x) ↔ (¬ ∀ x : T, P x).
Proof.
    intro_iff.
    - exact (morgan_exi_lr T P).
    -   intro hnpx.
        classical.by_contra hne.
        pose (Q x := ¬ P x).
        pose (mg₂ := morgan_uni T Q).
        _elim_iff_r mg₂ hne hfor.
        clear mg₂ hne.
        elim_neg hnpx.
        intro x.
        specialize (hfor x).
        classical.by_contra hnp.
        elim_neg_ hfor.
Qed.


(* 16) Classical inhabited quantifiers and constant predicates*)
Theorem inh_brackets_left_exi_impl_cl (T : Type) (h : inhabited T) (P : Prop) (Q : T → Prop) : (P → ∃ x : T, Q x) ↔ (∃ x : T, (P → Q x)).
Proof.
    intro_iff.
    -   intro hpex.
        pose (tndp := tnd_cl P).
        elim_or tndp hp hnp.
        +  apply hpex in hp.
           elim_exists hp u hqu.
           exists u.
           intro hp. assumption.
        +  elim_exists h a htr. clear htr.
           exists a.
           intro hp. elim_f_neg hnp.
    -   exact (brackets_left_exi_impl_rl T P Q).
Qed.
Theorem inh_brackets_right_uni_impl_cl (T : Type) (h : inhabited T) (P: T → Prop) (Q : Prop) :  ((∀ x : T, P x) → Q) ↔ (∃ x : T, (P x → Q)).
Proof.
    intro_iff.
    -   intro hpfx.
        pose (tndf := tnd_cl (∀ x, P x)).
        elim_or tndf hf hnf.
        +   elim_exists h u tr. clear tr.
            exists u.
            intro hpu.
            apply hpfx.
            assumption.
        +   _elim_iff_r_ (morgan_exi_cl T P) hnf hexi.
            elim_exists hexi a ha.
            exists a.
            intro hpa.
            elim_f_neg ha.
    -   exact (brackets_right_uni_impl_rl T P Q).
Qed.


(* 17) In non empty pub there is someone in the pub such that, 
if he or she is drinking, then everyone in the pub is drinking *)
Theorem drinker_paradox_cl (Pub : Type) (h : inhabited Pub) (is_drinking : Pub → Prop):
 (∃ someone : Pub, (is_drinking someone  → ∀ person : Pub, is_drinking person)).
Proof.
    pose (eq_dr := inh_brackets_right_uni_impl_cl Pub h is_drinking (∀ x, is_drinking x)).
    elim_iff_l_ eq_dr.
    exact (axiomatic_rule _).
Qed.

