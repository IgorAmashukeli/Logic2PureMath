# 2.2 Set Sum And Set Product

In this chapter, we define:

- Ordered Pair Construction `(-, -)`
- Pair Projectors (`π₁` and `π₂`)
- Cartesian Product of 2 Sets `×`
- Disjoint Union (or Sum) of 2 Sets `⊔` and ways to extract the sets from it

Your task is to prove all the theorems in `Task.lean`.

After each prove you should remove each `sorry`.

You can use theorems from previous tasks.
For more detail on that look in README in the root.

You can find solution in `Solution.lean`.

P.S

1.

Ordered Pair can be extended to tuples

`((a, b), c)`, `(((a, b), c), d)` ... etc

For such objects we can have a shorter notation

`(a, b, c)`, `(a, b, c, d)`

In `TupleSynt.lean`, I defined such syntax.
(You don't need to try to understand the macro and parser from this file)

This is just the shorter way to write such tuples.

With these notations, we actually don't define something new.

See:
`((((a, b), c), d), e)` transforms to `(a, b, c, d, e)`

We are simply removing

- all unnecessary round brackets

We have already seen similiar notations.

But, then you can ask: Why do I moved it to another file?

Technically, there were some collisions and problems with default parsers, so not to clutter the Task.lean file, I did this.

Moreover, with such notation,
you can only create tuples with already known constant number of components and known and explicitly listed components.

Later, we will define tuples of arbitrary unknown length as some substantive object from our axioms and iota operator.

However, if you somehow continue think, that it is unfair and you are using something, that was not explained and that you haven't constructed it yourself, you can continue writing `((a, b), c)` or `(((a, b), c), d)`. It will not reduce your power to prove.

What is the `most important` you should know about this file and imports:

- Because TupleSynt.lean uses Task.lean from this chapter, you can't use it in the current chapter

- In all subsequent chapters, if you need theorems from this chapter, simply import the TupleSynt file directly, it will import everything from Task

- If somewhere in imports, you have
  both Task and TupleSynt from this chapter, it can be problematic

2.

As always, remember very important requirements, when working with `TacticNames`:

In !!ANY!! file, which uses `TacticNames` tactic library
you CAN'T name hypothesis, starting with underscore `_`.

This requirement is assumed to be strictly met.
Otherwise you will have UNDEFINED BEHAVIOUR.
