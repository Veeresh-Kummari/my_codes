#include <stdio.h>
#include "header.h"

int* pair_equalsto_sum(int arr[], int sum)
{
    static int result[2];
    int n = arr[0];

    if (n < 2)
        return NULL;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                result[0] = arr[i];
                result[1] = arr[j];
                return result;
            }
        }
    }

    return NULL;  // No pair found
}

