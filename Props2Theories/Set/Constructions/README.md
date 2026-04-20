# Construction

We are starting `Set Theory`.

In my `Axioms.lean` library, I declared:

- `set` type
- `∈` `Predicate`
- `iota` `Operator` of [Definite Description](https://en.wikipedia.org/wiki/Definite_description) (it is `Functional Symbol`) and its properties
- [ZF Axioms](https://en.wikipedia.org/wiki/Zermelo%E2%80%93Fraenkel_set_theory)
- [ZFC Extension Of ZF with Axiom Of Choice](https://en.wikipedia.org/wiki/Axiom_of_choice)
- [TG Extension Of ZFC with Tarski Axiom](https://en.wikipedia.org/wiki/Tarski%E2%80%93Grothendieck_set_theory#References)

I defined:

- - `Bounded Quantifiers` Notation

Thoroughly study all examples in `AxiomsRules.lean` file.

Despite the fact, that `Bounded Quantifiers` are defined with previously defined `Quanfitiers` and you can use previous tactics, I tried to include both `Forward` (enriching the `Context`) and `Backward` (simplifying the `Goal`) reasoning for the `Bounded Quantifiers` properties for convinience.

Note, that later, we will show that `Axiom Of Choice` implies `Classical Logic`

Moreover, we will show that `Tarski Axiom` implies `Axiom Of Choice` and
some other `ZF` axioms.

Why do we need all of them? Why not to have `Tarski Axiom`, for example?

Actually, we are going to expand our suffix tradition.

- Theorems with `_tg` suffix can use `any` rule and axiom.

- Theorems with `_ac` suffix can't use `Tarski` axiom or theorems, proved with it.

- Theorems with `_cl` suffix can't use `Tarksi` or `Choice` axioms or theorems, proved with them.

- Theorems without such siffixes can't use `Tarski`, `Choice` axioms, theorems, proved with them or any of `Classical` rules (`by_contra` series + `propext_cl` series + `funext_cl` series)

This means, that we are studying 4 different, but nested mathematical foundations!

From the Strongest to the Weakest:

- `Tarski - Grothedieck` Set Theory
- `Zermelo - Fraenkel - Choice` Set Theory
- `Zermelo - Fraenkel` Set Theory with `Classical Logic`
- `Zermelo - Fraenkel` Set Theory with `Intutionistic Logic`

Of course, when proving some theorem, you `can't` use any theorem, that was proved in a stronger foundations, as your hypothesis.

But don't be afraid.

We will not need `Tarski Axiom` for a long time and won't need `Axiom of Choice` for some time too.

For example, in this chapter, we will need only `ZF` axioms so far.

I simply listed out all the axioms at once for the sake of purity, so as not to add anything later and not create a dangerous feeling that the rules of the game are constantly changing.

From now on in each math field and chapter, we will `not` introduce any new rule nor declare any axiom or predicate/functional symbol.

We will only:

- `define` `sets/set functional symbols`, using special cases of `iota` `Operator` (Definite Description)
- `prove` some `theorems` about this objects.

This looks exactly as a standard math practice!
Because, in such a practice, you usually only:

- define notations for unique existing objects
- prove theorems about them

Your task is to prove all the theorems about some `set constructions` in `Task.lean`.

After each prove you should remove each `sorry`.

You can use theorems from previous tasks.
For more detail on that look in README in the root.

You can find solution in `Solution.lean`.

P.S

Remember very important requirements, when working with `TacticNames`:

In !!ANY!! file, which uses `TacticNames` tactic library
you CAN'T name hypothesis, starting with underscore `_`.

This requirement is assumed to be strictly met.
Otherwise you will have UNDEFINED BEHAVIOUR.
