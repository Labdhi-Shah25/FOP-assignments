#include <stdio.h>
#include <math.h>

int main()
{
    int choice, i, n, isPrime;
    double num, squareRoot, square, cube;
    long fact;

    printf("Enter a number: ");
    scanf("%lf", &num);
    n = (int)num;

    printf("\nSelect operation:\n");
    printf("1. Square root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check prime\n");
    printf("5. Factorial\n");
    printf("6. Prime factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(num < 0)
                printf("Square root of negative number is not real.\n");
            else
            {
                squareRoot = sqrt(num);
                printf("Square root = %.2lf\n", squareRoot);
            }
            break;

        case 2:
            square = num * num;
            printf("Square = %.2lf\n", square);
            break;

        case 3:
            cube = num * num * num;
            printf("Cube = %.2lf\n", cube);
            break;

        case 4:
            if(n <= 1)
                isPrime = 0;
            else
            {
                isPrime = 1;
                for(i = 2; i <= n/2; i++)
                {
                    if(n % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if(isPrime)
                printf("%d is a prime number.\n", n);
            else
                printf("%d is not a prime number.\n", n);
            break;

        case 5:
            if(n < 0)
                printf("Factorial not defined for negative numbers.\n");
            else
            {
                fact = 1;
                for(i = 1; i <= n; i++)
                    fact = fact * i;
                printf("Factorial = %ld\n", fact);
            }
            break;

        case 6:
            if(n <= 1)
                printf("No prime factors.\n");
            else
            {
                printf("Prime factors of %d: ", n);
                for(i = 2; i <= n; i++)
                {
                    while(n % i == 0)
                    {
                        printf("%d ", i);
                        n = n / i;
                    }
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}