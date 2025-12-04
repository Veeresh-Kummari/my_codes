#ifndef NODE_H
#define NODE_H

struct node {
    int data;
    struct node *next;
};

// Function declarations
void display(struct node *head);
int getFromLast(struct node *head, int n);

struct node* generateRandomList(int size);  // Added this for external linkage

#endif

