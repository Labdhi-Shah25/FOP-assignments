#include <stdio.h>

int main()
{
    int marks[5], i, total = 0;
    float percentage;
    char result[5];
    char grade[20];

    printf("Enter marks of 5 subjects: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    int pass = 1;
    for(i = 0; i < 5; i++)
    {
        if(marks[i] < 40)
        {
            pass = 0;
            break;
        }
        total += marks[i];
    }

    if(pass)
    {
        sprintf(result, "PASS");
        percentage = total / 5.0;

        if(percentage >= 75)
            sprintf(grade, "Distinction");
        else if(percentage >= 60)
            sprintf(grade, "First Division");
        else if(percentage >= 50)
            sprintf(grade, "Second Division");
        else
            sprintf(grade, "Third Division");
    }
    else
    {
        sprintf(result, "FAIL");
        percentage = total / 5.0;
        sprintf(grade, "NA");
    }

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Result: %s\n", result);
    printf("Grade: %s\n", grade);

    return 0;
}