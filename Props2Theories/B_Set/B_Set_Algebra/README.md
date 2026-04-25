# 2.2 Set Algebra

Now, using constructions from the first chapter, we can define

- Union (`∪`) of 2 sets
- Intersection (`∩`) of 2 sets
- Difference (`\`) of 2 sets
- Symmetric Difference (`△`) of 2 sets

Using this operations, we want to prove the basic theorems of [Set Algebra](https://en.wikipedia.org/wiki/Algebra_of_sets):

Your task is to prove all the theorems from `Set Algebra` in `Task.lean`.

After each prove you should remove each `sorry`.

You can use theorems from previous tasks.
For more detail on that look in README in the root.

You can find solution in `Solution.lean`.

P.S

1.

Union of 2 sets allows to construct the sets the following way:

`{A, B} ∪ {C}`, `({A, B} ∪ {C}) ∪ {D}` ... etc

For such sets we can have a shorter notation

`{A, B, C}`, `{A, B, C, D}`

In `SetSynt.lean`, I defined such syntax.
(You don't need to try to understand the macro and parser from this file)

This is just the shorter way to write such sets.

With these notations, we actually don't define something new.

See:
`(({A, B} ∪ {C}) ∪ {D}) {E}` transforms to `{A, B, C, D, E}`

We are simply removing

- all round brackets
- union signs
- all, but first and last curly brackets

And adding

- necessary commas

We have already seen similiar notations.

But, then you can ask: Why do I moved it to another file?

Technically, there were some collisions and problems with default parsers, so not to clutter the Task.lean file, I did this.

Moreover, with such notation,
you can only create sets with already known constant number of elements and known and explicitly listed elements.

Later, we will define sets, produced by lists of arbitrary unknown sizes as some substantive object
from our axioms and iota operator.

However, if you somehow continue think, that it is unfair and you are using something, that was not explained and that you haven't constructed it yourself, you can continue writing `{A, B} ∪ {C}` or `({A, B} ∪ {C}) ∪ {D}`. It will not reduce your power to prove.

What is the `most important` you should know about this file and imports:

- Because SetSynt.lean uses Task.lean from this chapter, you can't use it in the current chapter

- In all subsequent chapters, if you need theorems from this chapter, simply import the SentSynt file directly, it will import everything from Task

- If somewhere in imports, you have
  both Task and SentSynt from this chapter, it can be problematic

2.

As always, remember very important requirements, when working with `TacticNames`:

In !!ANY!! file, which uses `TacticNames` tactic library
you CAN'T name hypothesis, starting with underscore `_`.

This requirement is assumed to be strictly met.
Otherwise you will have UNDEFINED BEHAVIOUR.
