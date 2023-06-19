/*
WAP to Print :           * 
                       * * * 
                     * * * * * 
                   * * * * * * * 
                 * * * * * * * * * 
               * * * * * * * * * * * 
 

*/

#include<stdio.h>
 int main()
 {
    int i,j,rows=5;


    for ( i = 1; i <= 5; i++)
    {
        for (j = 1; j <= rows; j++)
        {
          printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
          printf("* ");
        }
        for (j = i-1; j >= 1; j--)
        {
          printf("* ");
        }
        rows--;
        printf("\n");
        
    }
    
 }