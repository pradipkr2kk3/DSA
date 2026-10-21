/*
 Write a program, where given by user a number or a sequence of number and you create a function to generate a random suffling arrangement of each time function call.
 like, Input - 1,2,3,4,5
 Ans =  1,3,2,4,5
 Ans =  4,2,5,3,1
 ============================================================================================
*/

#include <stdio.h>

#define MAX 10

int factorial(int n)
{
    int num = 1;

    while (n > 1)
    {
        num = num * n;
        n--;
    }

    return num;
}


void permutation(int arr[], int n)
{
    static int count = 0;

    int total = factorial(n);
    int index = count % total;

    int used[MAX] = {0};
    int result[MAX];

    int i, j, k;

    for (i = 0; i < n; i++)
    {
        k = index / factorial(n - i - 1);
        index = index % factorial(n - i - 1);

        for (j = 0; j < n; j++)
        {
            if (!used[j])
            {
                if (k == 0)
                {
                    result[i] = arr[j];
                    used[j] = 1;
                    break;
                }

                k--;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", result[i]);

    printf("\n");

    count++;
}

int main()
{
    int arr[MAX];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    permutation(arr, n);
    permutation(arr, n);
    permutation(arr, n);
    permutation(arr, n);
    permutation(arr, n);
    return 0;
}
