#include <stdio.h>

int factorial(int n)
{
    int temp = 1;
    int num = n;

    for (int i = 0; i < num; i++)
    {
        temp = temp * n;
        n--;
    }

    printf("Factorial of %d is = %d\n", num, temp);

    return temp;
}

int main()
{
    int n;

    printf("Enter Number = ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}