# Level 4 — Algorithms & Advanced Data Structures

Graph algorithms, trees, number theory, and advanced data structures for olympiad-level problem solving.

👉 **Open [index.html](./index.html) in a browser** for a full browsable table of contents plus documentation of the design system and conventions used across every lesson in this repository (shared CSS components, quiz formats, interactive-lab philosophy, the 5-tab structure used for Problems pages, and the verification checklist followed before publishing each page).

## Chapters (13)

| # | Chapter | Topic |
|---|---------|-------|
| 01 | [Graphs](./01-Graphs/Graphs.html) | Graph representation: adjacency lists/matrices, nodes, edges, directed vs. undirected |
| 02 | [DFS](./02-DFS/DFS.html) | Depth-first search |
| 03 | [ConnectedComponents](./03-ConnectedComponents/ConnectedComponents.html) | Counting connected components via DFS/BFS |
| 04 | [BFS](./04-BFS/BFS.html) | Breadth-first search and shortest paths in unweighted graphs |
| 05 | [Trees](./05-Trees/Trees.html) | Trees as a special case of graphs: roots, parents, children, leaves |
| 06 | [TreeDP](./06-TreeDP/TreeDP.html) | Dynamic programming on trees via post-order DFS |
| 07 | [NumberTheory](./07-NumberTheory/NumberTheory.html) | GCD, LCM, and the Euclidean algorithm |
| 08 | [DivisorsPrimes](./08-DivisorsPrimes/DivisorsPrimes.html) | Finding all divisors in O(√n) and primality testing |
| 09 | [Sieve](./09-Sieve/Sieve.html) | Sieve of Eratosthenes |
| 10 | [PrimeFactorization](./10-PrimeFactorization/PrimeFactorization.html) | Prime factorization in O(√n) and via smallest-prime-factor sieve |
| 11 | [SqrtDecomposition](./11-SqrtDecomposition/SqrtDecomposition.html) | Block decomposition for O(√n) range queries |
| 12 | [OrderedSet](./12-OrderedSet/OrderedSet.html) | GNU PBDS ordered set — `find_by_order` / `order_of_key` |
| 13 | [SegmentTree](./13-SegmentTree/SegmentTree.html) | Segment trees: build, query, and point update in O(log n) |

## Problems series (ongoing)

Each entry walks through a real [CSES](https://cses.fi/problemset/list/) problem end-to-end: the verified original statement, the solution idea, fully annotated code, an interactive lab that runs the real algorithm on input you provide, and a complexity/pitfalls analysis geared at solving the same problem on the actual judge.

| # | Problem | CSES | Difficulty |
|---|---------|------|------------|
| 01 | [Labyrinth](./Problems/01-Labyrinth/Labyrinth.html) | [1193](https://cses.fi/problemset/task/1193) | Easy |
| 02 | [Tree Matching](./Problems/02-TreeMatching/TreeMatching.html) | [1130](https://cses.fi/problemset/task/1130) | Medium |
| 03 | [Counting Rooms](./Problems/03-CountingRooms/CountingRooms.html) | [1192](https://cses.fi/problemset/task/1192) | Easy |
| 04 | [Subordinates](./Problems/04-Subordinates/Subordinates.html) | [1674](https://cses.fi/problemset/task/1674) | Easy |
| 05 | [Dice Combinations](./Problems/05-DiceCombinations/DiceCombinations.html) | [1633](https://cses.fi/problemset/task/1633) | Easy |

## Raw source material

The `lesson_1` … `lesson_14` folders (and the lowercase `problems/` folder) alongside the content above are early drafts, scratch `.cpp` files, and reference notes used while building the polished chapters — kept for reference, not part of the student-facing curriculum.
