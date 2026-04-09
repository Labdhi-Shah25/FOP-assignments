#include <stdio.h>

int main()
{
    int num1, num2, i, gcd, smallestDivisor;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Finding smallest common divisor (>1)
    smallestDivisor = 0;
    for(i = 2; i <= (num1 < num2 ? num1 : num2); i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            smallestDivisor = i;
            break;
        }
    }
    if(smallestDivisor == 0)
        printf("No common divisor other than 1 exists.\n");
    else
        printf("Smallest Common Divisor: %d\n", smallestDivisor);

    // Finding GCD using Euclidean algorithm
    int a = num1, b = num2, r;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    gcd = a;
    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}