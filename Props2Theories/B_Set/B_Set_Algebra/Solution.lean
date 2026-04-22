import Props2Theories.TacticNames
import Props2Theories.Axioms
import Props2Theories.B_Set.A_Constructions.Task

noncomputable def union_2sets (A B : Set) := ⋃ {A, B}
notation:60 (priority:=high) a " ∪ " b => union_2sets a b
noncomputable def intersect_2sets (A B : Set) := {x ∈ A | x ∈ B}
infix:60 (priority:=high) " ∩ " => intersect_2sets
noncomputable def difference (A B : Set) := {x ∈ A | x ∉ B}
infix:60 (priority:=high) " \\ " => difference
noncomputable def symmetric_difference (A B : Set) := (A \ B) ∪ (B \ A)
infix:60 (priority:=high) " △ " => symmetric_difference
