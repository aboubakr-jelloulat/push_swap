# Push Swap  
[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)  

## Table of Contents
- [Introduction](#introduction)
- [Rules](#rules)
- [Operations](#operations)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Evaluation Criteria](#evaluation-criteria)
- [Bonus](#bonus)
- [License](#license)

## Introduction
The **Push Swap** project is a challenging algorithmic exercise designed to test your ability to implement efficient sorting techniques using a constrained set of operations. Sorting is a fundamental concept in computer science, and this project helps in understanding **sorting algorithms, algorithmic complexity, stack operations, and optimization techniques**.

In this project, you are provided with a set of **random integers** that must be sorted using two stacks (`a` and `b`). However, you are only allowed to manipulate these stacks using a limited set of predefined operations. The challenge is to achieve the sorting with the **minimum number of operations possible**, making it an exercise in both efficiency and optimization.

The **Push Swap** project is valuable for learning about:
- **Algorithm design and complexity**: Choosing the best approach to sort the numbers efficiently.
- **Data structures**: Working with stacks and their associated operations.
- **Problem-solving skills**: Finding the optimal sorting sequence with minimal operations.
- **Optimization techniques**: Reducing the number of moves required for sorting.

This project is widely used in technical interviews and coding competitions, as it helps improve logical thinking and the ability to implement efficient algorithms.

## Rules
- There are **two stacks**, `a` and `b`.
- `stack a` initially contains a set of unique integers.
- `stack b` starts empty.
- The goal is to sort `stack a` in **ascending order**.
- You can only use a defined set of operations to manipulate the stacks.

## Operations
| Command | Description |
|---------|-------------|
| `sa` | Swap the first two elements of `stack a`. |
| `sb` | Swap the first two elements of `stack b`. |
| `ss` | Swap the first two elements of both stacks. |
| `pa` | Push the first element from `stack b` to `stack a`. |
| `pb` | Push the first element from `stack a` to `stack b`. |
| `ra` | Rotate `stack a` upwards (first element becomes last). |
| `rb` | Rotate `stack b` upwards (first element becomes last). |
| `rr` | Rotate both stacks upwards. |
| `rra` | Reverse rotate `stack a` (last element becomes first). |
| `rrb` | Reverse rotate `stack b` (last element becomes first). |
| `rrr` | Reverse rotate both stacks. |

## Installation
Clone the repository and compile the program:
```sh
$ git clone https://github.com/your-repo/push_swap.git
$ cd push_swap
$ make
```

## Usage
Run the program with a list of numbers:
```sh
$ ./push_swap 4 3 2 1 5
```
To check if the output correctly sorts the numbers, use the provided `checker`:
```sh
$ ARG="4 3 2 1 5"; ./push_swap $ARG | ./checker $ARG
```

## Examples
Sorting an already sorted stack:
```sh
$ ./push_swap 1 2 3 4 5
```
*Output: (No output, as it's already sorted)*

Sorting an unsorted stack:
```sh
$ ./push_swap 5 1 4 2 3
sa
pb
pb
ra
pa
pa
```

## Evaluation Criteria
To validate the project, the sorting algorithm must:
- Sort **100 numbers** in less than **700 moves**.
- Sort **500 numbers** in less than **5500 moves**.
- Handle errors correctly (duplicates, non-integer input, etc.).

## Bonus
The bonus part includes:
- A `checker` program to validate sorting operations.
- Additional optimizations for sorting.

## License
This project is part of the 42 School curriculum.

