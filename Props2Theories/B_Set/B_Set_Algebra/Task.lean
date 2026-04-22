import Props2Theories.B_Set.A_Constructions.Task


noncomputable def union_2sets (A B : Set) := ⋃ {A, B}
notation:max A:1024 " ∪ " B:1024 => union_2sets A B
noncomputable def intersect_2sets (A B : Set) := {x ∈ A | x ∈ B}
notation:max A:1024 " ∩ " B:1024 => intersect_2sets A B
noncomputable def difference (A B : Set) := {x ∈ A | x ∉ B}
notation:max A:1024 " \\ " B:1024 => difference A B
noncomputable def symmetric_difference (A B : Set) := (A \ B) ∪ (B \ A)
notation:max A:1024 "△" B:1024 => symmetric_difference A B


theorem union2_sets_prop : (∀ A B x, x ∈ A ∪ B ↔ x ∈ A ∨ x ∈ B) := sorry
