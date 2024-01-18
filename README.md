# Sum Of Two Smallest Numbers

## Overview
This program calculates the sum of the two smallest numbers in a given integer array. It demonstrates efficient computation by avoiding full array sorting and instead, directly finding the smallest and second smallest numbers.

## Implementation Details
- The program is written in C++.
- It uses a single-pass algorithm to find the two smallest numbers.
- The function `FindSumOfTwoSmallest` implements the core logic.
- Error handling is included for edge cases, such as arrays with fewer than two elements.

## Building and Running
1. Compile the program:
g++ -o sum_of_two_smallest sum_of_two_smallest.cpp

css
Copy code
2. Execute the program and follow the prompts to input array elements:
./sum_of_two_smallest

css
Copy code

## Sample Input/Output
- Input:
5
3 1 4 1 5
- Output:
The sum of the two smallest numbers is: 2

## Limitations
- The program expects integer input.
- The array size should be at least 2.

## Author
- [Dao Trong Hieu B20DDCN242]
