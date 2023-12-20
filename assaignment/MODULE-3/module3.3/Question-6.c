// WAP to make addition, Subtraction and multiplication of two matrix using 3-D Array

#include <stdio.h>
int main()
{
    int x1[3][3], x2[3][3], x3[3][3];
    int i, j;

    

    printf("First Matrix Values\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Values %d%d : ", i, j);
            scanf("%d", &x1[i][j]);
        }
    }

    

    printf("Second Matrix Values\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Values %d%d : ", i, j);
            scanf("%d", &x2[i][j]);
        }
    }


    printf("Addition\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            x3[i][j] = x1[i][j] + x2[i][j];
            printf("%d  ", x3[i][j]);
        }

        printf(" \n");
    }

    // -------
    // Substation 
    printf("Subtraction\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            x3[i][j] = x1[i][j] - x2[i][j];
            printf("%d  ", x3[i][j]);
        }

        printf(" \n");
    }

    // --------
    // Multiplication 
    printf("Multiplication\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            x3[i][j] = x1[i][j] * x2[i][j];
            printf("%d  ", x3[i][j]);
        }

        printf(" \n");
    }

    // -------
    // Division 
    printf("Division\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            x3[i][j] = x1[i][j] / x2[i][j];
            printf("%d  ", x3[i][j]);
        }

        printf(" \n");
    }
}