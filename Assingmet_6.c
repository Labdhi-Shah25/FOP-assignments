//non-recursive
#include <stdio.h>

int main()
{
    int n, i;
    long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial (iterative) = %ld\n", fact);

    return 0;
}



// Recursive
#include <stdio.h>

int factorial(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    printf("Factorial (recursive) = %d\n", factorial(n));

    return 0;
}