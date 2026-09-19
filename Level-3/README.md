# Level 3 — Advanced

Bit manipulation, structs, and an introduction to dynamic programming.

| # | Chapter | Topic |
|---|---------|-------|
| 01 | [BitwiseOperations](./01-BitwiseOperations/BitwiseOperations.html) | Bitwise operators (`&`, `\|`, `^`, `~`, `<<`, `>>`) and binary representation |
| 02 | [Structs](./02-Structs/Structs.html) | `struct` — grouping related data |
| 03 | [BitManipulationTricks](./03-BitManipulationTricks/BitManipulationTricks.html) | Common bit tricks: isolating bits, counting set bits, power-of-two checks |
| 04 | [GeneratingSubsetsUsingBitmasks](./04-GeneratingSubsetsUsingBitmasks/GeneratingSubsetsUsingBitmasks.html) | Enumerating all subsets of a set via bitmasks |
| 05 | [Backtracking](./05-Backtracking/Backtracking.html) | Backtracking search and pruning |
| 06 | [DynamicProgramming](./06-DynamicProgramming/DynamicProgramming.html) | Introduction to dynamic programming: memoization and tabulation |
| 08 | [ConstructiveAlgorithms](./08-ConstructiveAlgorithms/ConstructiveAlgorithms.html) | Building an object that satisfies given constraints (or proving none exists): parity, pigeonhole, induction, worst-case checks |
| 09 | [RectangularGeometry](./09-RectangularGeometry/RectangularGeometry.html) | Axis-aligned rectangles and 1D intervals: area, intersection, and coverage length (worked example: USACO 2015 Dec Bronze "Fence Painting") |

## Problems

The [`07-Problems/`](./07-Problems) folder applies these ideas to practice problems:

1. [Frog1](./07-Problems/01-Frog1.html) — DP (AtCoder DP Contest A)
2. [Knapsack1](./07-Problems/02-Knapsack1.html) — DP (AtCoder DP Contest D)
3. [Sum of Two Values](./07-Problems/03-SumOfTwoValues.html) — hashing / complement technique ([CSES 1640](https://cses.fi/problemset/task/1640))
4. [Sum of Three Values](./07-Problems/04-SumOfThreeValues.html) — sort + fix two indices + binary search for the third ([CSES 1641](https://cses.fi/problemset/task/1641))
5. [Subordinates](./07-Problems/05-Subordinates.html) — tree-shaped DP (subtree size via post-order DFS) ([CSES 1674](https://cses.fi/problemset/task/1674)) — also covered from a graph-algorithms angle in [Level-4/Problems/04-Subordinates](../Level-4/Problems/04-Subordinates/Subordinates.html)
6. [Product of Squares](./07-Problems/06-ProductOfSquares.html) — integer square root + O(√n) primality/composite check (source not linked — no judge URL was provided)
7. [Diverse Game](./07-Problems/07-DiverseGame.html) — constructive: cyclic +1 shift to build a fixed-point-free relabeling of a matrix ([Codeforces 1994A](https://codeforces.com/problemset/problem/1994/A))
8. [Bit Strings](./07-Problems/08-BitStrings.html) — counting + modular arithmetic: 2^n mod (10^9+7) ([CSES 1617](https://cses.fi/problemset/task/1617))
9. [Your Digits](./07-Problems/09-YourDigits.html) — greedy digit allocation to maximize a sum ([Codeforces 734B — "Anton and Digits"](https://codeforces.com/problemset/problem/734/B))
