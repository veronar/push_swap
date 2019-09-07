# **Push_swap**

WeThinkCode_ Module  
Alogrithms - Project 1  
Because Swap_push isn’t as natural

### **Description**
This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.
  
Allowed functions:
- write
- read
- malloc
- free
- exit

## **Objective**
The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks.  
  
The goal? Write 2 programs in C:  
- The first, named checker which takes integer arguments and reads instructions on
the standard output. Once read, checker executes them and displays `OK` if integers
are sorted. Otherwise, it will display `KO`.
- The second one called push_swap which calculates and displays on the standard
output the smallest progam using Push_swap instruction language that sorts integer
arguments received.

## Installation

Clone the push_swap repo and change to the repo directory:

```
git clone https://github.com/veronar/push_swap
cd ./push_swap/push_swap/
```

### Compilation

Push_swap & checker are compiled with a `Makefile`; to compile, run the follwing command:

```
make
```

This will create 2 executables: `checker` & `push_swap`.  

If any edits are made to the source code the executables can be recompiled using the follwing command:

```
make re
```

## Usage

Both programs run with with the same rules for input:
- only digits
- numbers only within `INT MIN` & `INT MAX`
- no duplicates
- input is read from `stdout`
- `ctrl + d` signifies `EOF` (end of file / input)
- Errors are displayed on `stderr`
  
Operations allowed:
- `sa` : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
- `sb` : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
- `ss` : sa and sb at the same time.
- `pa` : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- `pb` : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- `ra` : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
- `rb` : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.
- `rr` : ra and rb at the same time.
- `rra` : reverse rotate a - shift down all elements of stack a by 1. The flast element becomes the first one.
- `rrb` : reverse rotate b - shift down all elements of stack b by 1. The flast element becomes the first one.
- `rrr` : rra and rrb at the same time.
  
  The programs can be run independantly of each other.  
  They can also be run simultaneously with the following format:
  ```
  ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
  ```

  Number of operations done by push_swap can be checked in the follwing way:
  ```
  ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
  ```

  ## Shout-out
  Thanks to @FWMoor & @CharlieDeltaZA for major help on optimising my sorting algorithm for large stacks!
