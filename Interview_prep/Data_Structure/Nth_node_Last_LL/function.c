#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void display(struct node *head) 
{
    while(head != NULL) 
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int getFromLast(struct node *head, int n) 
{

    if(head == NULL) 
    {
        printf("Error: List is empty\n");
        return -1;
    }

    if(n <= 0) 
    {
        printf("Error: n must be a positive number\n");
        return -1;
    }

    struct node *temp = head;
    int length = 0;

    // Find length
    while(temp != NULL) 
    {
        length++;
        temp = temp->next;
    }

    if(n > length) 
    {
        printf("Error: n (%d) is bigger than length (%d)\n", n, length);
        return -1;
    }

    int indexFromStart = length - n;

    temp = head;

    // Move to the required node
    for(int i = 0; i < indexFromStart; i++)
        temp = temp->next;

    return temp->data;
}

