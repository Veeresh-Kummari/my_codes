#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

// Function to generate random linked list of given size
struct node* generateRandomList(int size) 
{
    struct node *head = NULL, *temp = NULL;
    for(int i = 0; i < size; i++) 
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = rand() % 10000;   // random number 0–9999
        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else 
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

int main() 
{
    srand(time(NULL));  // Seed random number generator

    // Automatically select test case 1–5
    int choice = (rand() % 5) + 1;
    int size = 0;

    printf("Automatically selected Test Case: %d\n", choice);

    switch(choice) 
    {
        case 1: size = 5; break;
        case 2: size = 10; break;
        case 3: size = 50; break;
        case 4: size = 100; break;
        case 5: size = 1000; break;
    }

    printf("Generating %d random nodes...\n", size);

    // Generate random list
    struct node *head = generateRandomList(size);

    // Display list
    display(head);

    // Auto-select n (1 to size)
    int n = (rand() % size) + 1;
    printf("\nAutomatically selected n = %d\n", n);

    // Get nth element from last
    int result = getFromLast(head, n);

    if(result != -1)
        printf("Nth element from last = %d\n", result);

    return 0;
}

