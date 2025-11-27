#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

int main()
{
    srand(time(NULL));  

    // Randomly choose test case 1–5
    int choice = (rand() % 5) + 1;
    int n = 0;

    printf("Automatically selected Test Case: %d\n", choice);

    switch (choice) 
    {
        case 1: n = 5; break;
        case 2: n = 10; break;
        case 3: n = 50; break;
        case 4: n = 100; break;
        case 5: n = 1000; break;
    }

    printf("Array size = %d\n", n);

    int arr[n + 1];
    arr[0] = n;

    printf("\nGenerated Array Elements:\n");
    for (int i = 1; i <= n; i++) 
    {
        arr[i] = rand() % 500;  // random 0–499
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Random sum value
    int sum = rand() % 900;
    printf("\nAutomatically selected sum = %d\n", sum);

    int *pair = pair_equalsto_sum(arr, sum);

    if (pair == NULL)
        printf("\nNo pair found for sum %d.\n", sum);
    else
        printf("\nPair found: (%d, %d)\n", pair[0], pair[1]);

    return 0;
}

