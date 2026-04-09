#include <stdio.h>
#include <math.h>

long factorial(int num)
{
    long fact = 1;
    for(int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n, i;
    double x, sum = 0.0, term;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        term = pow(-1, i) * pow(x, 2*i + 1) / factorial(2*i + 1);
        sum += term;
    }

    printf("Sum of sine series = %.6lf\n", sum);

    return 0;
}