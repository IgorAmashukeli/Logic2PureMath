# Props2Theorems

## Common words about the repository:

This course covers the most important foundations, core knowledge, and applications of mathematics (sometimes with reference to Pure Math, and sometimes to Theoretical Computer Science).

The course structure in this repository closely resembles that of my Voltage2Services course.

The difference is that this is not about programming; it is about mathematics.

It explains the basics of math, starting from logic and set axioms and proceeding to fundamental abstractions in pure math and applications in theoretical computer science.

However, it goes much deeper and is at a higher level than many well-known courses.

Let's call this Props2Theories.

For this course, all fundamental mathematical objects and theorems about them (with full solution proofs) will be added, so the course will evolve over time.

It will be a long-term work in progress.

## Course structure

The course consists of different mathematical subjects.

Each subject is divided into multiple topics.

- Your task is to prove the listed theorems for each topic in `Task.v`.
- In each topic, you will also find solutions in `Solution.v`.

The course is structured in such a way that you usually only need knowledge from previous tasks, along with your creativity and ability to carefully construct proofs.

## Technical instructions:

The required software to install includes Coq, opam, and vsrocq.

1. Install `VS Code`.
2. Install the VS Code extension `VsRocq` for Coq.

This part can be problematic, as you need the correct versions of opam, the vsrocq server, etc.

Look up installation instructions online for your system.

Make sure that vsrocq works correctly in VS Code.

Make sure you do not confuse `VsRocq` with `coq`, `VsCoq`, or `VsCoq Legacy`.

Make sure any `.v` files are automatically associated with `VsRocq` (for example, the `Verilog-HDL` extension also uses `.v` files).

3. We will import the `Unicode.Utf8.` library in all of our files, which allows Coq to use Unicode symbols.

4. To ensure you can quickly type these symbols, you can create a `rocq.json` file at `~/.config/Code/User/snippets`.

   There, you can add custom shortcuts for Unicode symbols in all VS Code Coq files.

   For example, if you paste the following into this file:

   ```json
   {
     "forall": {
       "prefix": "\\forall",
       "body": "∀",
       "description": "Insert ∀ symbol"
     }
   }
   ```

   it will allow you to type `\forall` and press `Tab` to insert `∀` in any `.v` file.

   You can add similar shortcuts for all Unicode symbols you encounter.

5. Open VS Code in the root directory of the project.

6. The order of the tasks is strictly important.

   You should first go to `0_Logic/0_Props`, then `0_Logic/1_Quantifiers`, and so on.

   After finishing `0_Logic`, move on to `1_Set`, etc.

   I think you get the idea.

7. After finishing each `Task.v` file, run `/.recompile.sh`.

   This recompiles all the `Task.v` files you have solved so far.

8. You can check `_CoqProject` to see the names of submodules of `Top` (the root directory).

   Starting from the second line, you will find the names of directories corresponding to chapters.

   For example:

   `-Q 0_Logic/0_Props Props`

   means that you can import your proofs in `0_Logic/0_Props Props/Task.v` file with `Require Import Top.Props`, etc.

   This allows you to use the theorems from previous chapters in later ones.

I generally expect you to use Linux (I use Fedora), although it can usually also be installed on macOS and Windows. However, it is your responsibility to install VS Code, vsrocq, etc.

## About the choice of fundamentals

We will use:

1. `Natural Deduction` rules, defined as tactics in the `Top.TacticNames` library

- Rules for `Propositional Logic` (`Intuitionistic` + `Classical`)
- Rules for `Higher-Order Predicate Logic`
- Rules for `Equality`

2. `℩` (the `iota operator`) for `Definite Descriptions`

3. `ZF` axioms

4. Sometimes (not always), we will use the `Axiom of Choice` or even the `Tarski Axiom`

All mathematics will be built upon these four foundations.

So, we will essentially work within three different `Set Theory` systems:

- `ZF`
- `ZFC` (`ZF` + the `Axiom of Choice`)
- `TG` (`ZF` + the `Axiom of Choice` + the `Tarski Axiom`)

Here, `ZFC` is an extension of `ZF`, and `TG` is an extension of `ZFC`.

I am aware that `CIC` (`Calculus of Inductive Constructions`) as a mathematical foundation is more convenient in Coq and includes many built-in primitives in the language or libraries.

Moreover, together with lambda calculus, it allows for much more convenient computable reductions of certain expressions (for example, in arithmetic).

Also, in Coq or in other proof assistants (such as `Lean`), there are advanced tactics that can simplify some trivial but tedious proofs.

We could even have chosen `HoTT` (`Homotopy Type Theory`) as the foundational system.

You could also argue that the axiomatic structure of our theories is not the most natural fit for Coq, which primarily follows constructive logic.

However, in this repository, I explicitly want you to experience the "hardcore" approach.

It is useful to understand how to build mathematical abstractions from abstract `Logic Rules` and `Set Theory Axioms` using non-trivial ideas.

Have fun! 😈

## P.S

If you really want to learn about topics such as:

- Basic functional programming fundamentals, including lambda calculus
- Type theories
- Proof assistants

and build your own compilers for different functional languages such as:

- Untyped
- Haskell-like
- Coq/Lean/Agda-like

you can study the `04_Functional` chapter of my other comprehensive Voltage2Services course, which teaches functional programming and type theory.
