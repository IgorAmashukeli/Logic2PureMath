# 1.2 Quantifier Rules

We continue studying [Natural Deduction](https://en.wikipedia.org/wiki/Natural_deduction#Gentzen-style_propositional_logic).

In my `TacticNames` library, I also defined useful list of tactics
for dealing with predicate and quantifier logic.

They reflect the theoretically defined rules for quantifiers on predicates in `Natural Deduction`.

Thoroughly study all examples in `QuantRules.lean`

They show, how the tactics from `TacticNames` library can be used in the most general and, on other hand, simple way.

Tactics consists of the following parts:

- `Universal Quantifier` `Itroduction` and `Elimination` (∀)
- `Existential Quantifier` `Itroduction` and `Elimination` (∃)

I tried to include both `Forward` (enriching the `Context`) and `Backward` (simplifying the `Goal`) reasoning for convinience in different situations.

Note, that all these quantifier tactic rules can be used both in `Intuitionistic` and `Classical` Predicate Logic.

Note, that we use default arrow type like `T → Prop` as Coq primitive for Predicates.

Your task is to prove all the `Quantifier` validities in `Task.lean`, using these tactics.

If a theorem has `_cl` suffix in its name, it means it requires classical rules.
If a theorem doesn't have this suffix, it means, that you should try to prove it without using any of classical rules.

After each prove you should change each `sorry` to your proof.

You can use theorems from previous tasks.
For more detail on that look in README in the root.

You can find solution in `Solution.lean`.

P.S

Remember very important requirements, when working with `TacticNames`:

In !!ANY!! file, which uses `TacticNames` tactic library
you CAN'T name hypothesis, starting with underscore `_`.

This requirement is assumed to be strictly met.
Otherwise you will have UNDEFINED BEHAVIOUR.
