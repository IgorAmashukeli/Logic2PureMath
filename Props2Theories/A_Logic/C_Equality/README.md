# Equality Rules

We finish studying [Natural Deduction](https://en.wikipedia.org/wiki/Natural_deduction#Gentzen-style_propositional_logic).

In LEAN and my `Top.TacticNames` library, there are speicific tactics to work
with Equality.

These tactics together make `Normal` Definition of `Equality`.

Thoroughly study all examples in `EqualityRules.lean`

They show, how the equality tactics can be used in the most general and, on other hand, simple way.

Tactics consists of the following parts:

- `Itroduction` rules for `Equality` (=)

- `Elimination` rules for `Equality` (=) in `rewrite` form

- `Classical` `Introduction` rules for `Prop` `Equality`

- `Classical` `Introduction` rules for `Functional Symbols` (`T → T₂`) `Equality`

- `Exists Unique` (∃!) quantifier definition and tactics

First two parts are already default `Lean` tactics.

I tried to include both `Forward` (enriching the `Context`) and `Backward` (simplifying the `Goal`) reasoning for the `third`, `fourth` and `fifth` part.

Note, that the rules from the `first two` and `fifth` rules can be used both in the `Intuitionistic` and `Classical` Logic.

While the third and the fourth rule (`Introduction` rules for `Prop` and `Functional Symbols` `Equality`) is usually added only for the `Classical` Logic. Sometimes, it is not even included for the `Classical` Logic.

Note, that here for `Predicates` we use Coq (`T → Prop`) primitive.

And for `Functional Symbols` we use Coq (`T → T₂`) primitive.

Note, that `Predicates` and `Functional Symbols` are in our `Logic Meta Language Theory`.

We will define our own "true" `Relations` and "true" `Functions` in `Set Theory` later.

But we need `Predicates` as an object to make formulas in Logic

(for example, later, we declare `belongs` (`∈`) as `Predicate`)

And we need `Functional Symbols` as an object to make conviniet set notations.

(for example, later, we declare `iota definite description operator` (`ι`) as `Functional Symbol`)

Your task is to prove all the `Equality` properties in `Task.lean`, using these tactics.

If a theorem has `_cl` suffix in its name, it means it requires classical rules.
If a theorem doesn't have this suffix, it means, that you should try to prove it without using any of classical rules.

After each prove you should change each `sorry` to the proof.

You can use theorems from previous tasks.
For more detail on that look in README in the root.

You can find solution in `Solution.lean`.

P.S

Remember very important requirements, when working with `Top.TacticNames`:

In !!ANY!! file, which uses `Top.TacticNames` tactic library
you CAN'T name hypothesis, starting with underscore `_`.

This requirement is assumed to be strictly met.
Otherwise you will have UNDEFINED BEHAVIOUR.
