#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function (Value): a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n--- Call by Value ---\n");
    swap_by_value(num1, num2);
    printf("After swapping without pointers: a = %d b = %d\n", num1, num2);

    printf("\n--- Call by Reference ---\n");
    swap_by_reference(&num1, &num2);
    printf("After swapping with pointers: x = %d y = %d\n", num1, num2);

    return 0;
}