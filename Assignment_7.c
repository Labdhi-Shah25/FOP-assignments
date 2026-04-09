#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks in 3 subjects: ");
        s[i].total = 0;
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3.0;
    }

    printf("\nStudent Result:\n");
    for(i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %d\n", s[i].total);
        printf("Percentage: %.2f%%\n\n", s[i].percentage);
    }

    return 0;
}