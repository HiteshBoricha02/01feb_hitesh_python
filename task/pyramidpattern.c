#include<stdio.h>
int main()
{
    int k,j;
    int count = 5;
    
    for ( k = 0 ; k < 5; k++)
    {
        for (int i = 0; i <count ; i++)
        {
            printf("  ");
        }
        count--;
        for( j = 0; j <=k; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}