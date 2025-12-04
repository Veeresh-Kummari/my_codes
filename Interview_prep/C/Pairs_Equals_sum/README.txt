Project: Pair Equals Sum
------------------------

This program finds a pair of integers in an array that adds up to a given sum.

Folder: Interview_Prep/C/Pairs_Equals_sum
Files:
    - main.c
    - function.c
    - function.h

Description:
------------
The user provides an array size, array elements, and a target sum.
The program searches for two numbers whose sum matches the target.

If a valid pair exists:
    Output -> Pair found: (a, b)

If no such pair exists:
    Output -> No pair found.

Edge Cases Handled:
-------------------
1. Array size <= 0
2. Array size less than 2 (no possible pair)
3. Invalid input detection
4. Graceful handling when no pair exists

Function Used:
--------------
int* pair_equalsto_sum(int arr[], int sum)

This function:
- Reads array size from arr[0]
- Checks all possible pairs
- Returns pointer to static array containing the pair (if found)
- Returns NULL if no pair matches

How to Compile:
---------------
gcc main.c function.c -o pair_sum

How to Run:
-----------
./pair_sum

Example:
--------
Enter array size: 5
Enter 5 elements:
1 4 7 2 9
Enter sum value: 11
Pair found: (4, 7)


