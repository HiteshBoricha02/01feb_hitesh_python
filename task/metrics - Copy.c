#include <stdio.h>
int main()
{
    int number[3][3]; // ={1,2,3,4,5,6,7,8,9}
    int j, k;
    for (j = 0; j < 3; j++)
    {
        for (k = 0; k < 3; k++)
        {
            printf("enter the value:", j, k);
            scanf("%d", &number[j][k]);
        }
    }
    
        for (j = 0; j < 3; j++)
        {

            for (k = 0; k < 3; k++)
            {
                printf(" %d", number[j][k]);
            }

        printf("\n");
        }
    
}