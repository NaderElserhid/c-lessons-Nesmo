# c-lessons-Nesmo

**A comprehensive curriculum and interactive toolkit for the Nasmo Informatics Olympiad**, covering foundational programming through advanced competitive-programming algorithms and data structures.

Welcome to the official repository for the Nasmo Competition training program. This repository contains interactive HTML lessons, worked problems, and teaching notes designed to take students from their first `#include <iostream>` to advanced topics like segment trees, tree DP, and order-statistics data structures.

Every lesson is a self-contained, interactive HTML page — open it directly in any modern browser. Most pages include live, self-computing simulators/labs (not just static explanations), worked examples, and practice questions.

> **Note:** lesson content is written primarily in Arabic for the students of the program; this README and the folder/file names are in English for ease of navigation.

## 🚀 Curriculum Overview

The training is organized into four progressive levels.

### 📁 [Level 1 — Foundations](./Level-1)

*Focus: core C++ syntax and programming logic, from zero.*

18 chapters covering program structure, variables and types, constants, operators, input/output, flow control (`if`, `while`, `for`), functions, scope, arrays, and `vector`, followed by problem-solving foundations (sum/product rule, worked examples, contests & platforms, and multi-part problems). See [Level-1/README.md](./Level-1/README.md) for the full chapter list.

### 📁 [Level 2 — Intermediate](./Level-2)

*Focus: STL containers, complexity, and core algorithmic techniques.*

9 chapters — Sets, Maps, Time Complexity, Sorting, Binary Search, Modular Arithmetic, Simulation, Casework, and Greedy Algorithms — plus a 9-problem practice set applying these ideas. See [Level-2/README.md](./Level-2/README.md).

### 📁 [Level 3 — Advanced](./Level-3)

*Focus: bit manipulation, structs, and introductory dynamic programming.*

6 chapters — Bitwise Operations, Structs, Bit Manipulation Tricks, Generating Subsets Using Bitmasks, Backtracking, and Dynamic Programming — plus a small practice set. See [Level-3/README.md](./Level-3/README.md).

### 📁 [Level 4 — Algorithms & Advanced Data Structures](./Level-4)

*Focus: graph algorithms, trees, number theory, and advanced data structures for olympiad-level problem solving.*

13 chapters — Graphs, DFS, Connected Components, BFS, Trees, Tree DP, Number Theory, Divisors & Primes, Sieve of Eratosthenes, Prime Factorization, Sqrt Decomposition, Ordered Set (PBDS), and Segment Trees — plus an ongoing **Problems series** that walks through real [CSES](https://cses.fi/problemset/list/) problems (Labyrinth, Tree Matching, Counting Rooms, Subordinates) end-to-end: problem statement, solution idea, annotated code, an interactive lab, and complexity/pitfall analysis.

Open **[Level-4/index.html](./Level-4/index.html)** for a browsable table of contents of this level, plus full documentation of the design system and conventions used across every lesson in the repository. See also [Level-4/README.md](./Level-4/README.md).

## 🛠 How to Use These Materials

1. **Interactive lessons:** open any `.html` file in a modern web browser (Chrome, Edge, Firefox). No build step or server required — everything is a self-contained page.
2. **Practice problems:** each level's `Problems` (or numbered problems) folder contains worked, judge-based practice — mostly sourced from [CSES](https://cses.fi/problemset/list/), with a few from Codeforces/AtCoder-style sources.
3. **Start here:** new to the repo? Open [Level-4/index.html](./Level-4/index.html) first for a full map of that level and an explanation of how every lesson is structured (design system, quiz formats, interactive-lab conventions, and verification practices used while building the material).

## 📌 Repository Notes

- Levels 1–4 (the numbered folders above) contain the **finished, polished curriculum**.
- You may also see folders like `Level-1-Foundations`, `Level-2-Intermediate`, `Level-3-Advanced`, and `level-4` (lowercase) — these hold **raw source material**: early drafts, scratch `.cpp` files, compiled binaries, and reference notes used while building the polished lessons above. They're kept for reference and are not part of the student-facing curriculum.

## 👨‍🏫 About the Instructor

Developed by **Nader Elserhid**. This project is part of a dedicated effort to enhance algorithmic thinking and competitive programming skills for students in the region.

Built with ❤️ for the Nasmo Community.
