Project: Nth Node from Last in Linked List
------------------------------------------

This program creates a linked list and returns the Nth node from the end.

Folder: Interview_Prep/Data_Structure/Nth_node_Last_LL
Files:
    - main.c
    - function.c
    - node.h

Description:
------------
The program builds a singly linked list either manually or by automated generation.
The user provides a position 'n', and the program prints the node value that is
n positions from the end of the linked list.

If n is valid:
    Output -> The Nth node from the end is: <value>

If n is invalid or list is empty:
    Output -> Appropriate error message

Edge Cases Handled:
-------------------
1. Empty list
2. n greater than list length
3. n less than or equal to zero
4. Proper error messages

Functions Used:
---------------
struct node* generateRandomList(int size)
int getFromLast(struct node* head, int n)

generateRandomList:
    - Creates a list of random integers
    - Returns head pointer

getFromLast:
    - Uses two-pointer technique
    - Efficient: O(n) time, O(1) memory

How to Compile:
---------------
gcc main.c function.c -o nth_last

How to Run:
-----------
./nth_last

Example:
--------
Enter list size: 6
Generated List: 3 7 1 9 4 2
Enter n: 3
The 3rd node from the last is: 9


