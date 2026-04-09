#include <stdio.h>

int main()
{
    int choice, i, n;
    double num1, num2, result;
    long fact;

    printf("Simple Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0)
                result = num1 / num2;
            else
                printf("Division by zero is not allowed.\n");
            if(num2 != 0)
                printf("Result = %.2lf\n", result);
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = 1;
            for(i = 1; i <= (int)num2; i++)
                result = result * num1;
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
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

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}