#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int i, j, r, c;
    int min, col, flag, found = 0;
    int magic = 1, s1 = 0, s2 = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    printf("Addition:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        min = a[i][0];
        col = 0;

        for(j=1;j<c;j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
                col = j;
            }
        }

        flag = 1;
        for(j=0;j<r;j++)
        {
            if(a[j][col] > min)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("Saddle point = %d\n", min);
            found = 1;
        }
    }

    if(found == 0)
        printf("No saddle point\n");

    if(r == c)
    {
        for(i=0;i<c;i++)
            s1 = s1 + a[0][i];

        for(i=0;i<r;i++)
        {
            int rs = 0;
            for(j=0;j<c;j++)
                rs = rs + a[i][j];

            if(rs != s1)
                magic = 0;
        }

        for(i=0;i<c;i++)
        {
            int cs = 0;
            for(j=0;j<r;j++)
                cs = cs + a[j][i];

            if(cs != s1)
                magic = 0;
        }

        for(i=0;i<r;i++)
            s2 = s2 + a[i][i];

        if(s2 != s1)
            magic = 0;

        if(magic == 1)
            printf("Magic square\n");
        else
            printf("Not a magic square\n");
    }

    return 0;
}