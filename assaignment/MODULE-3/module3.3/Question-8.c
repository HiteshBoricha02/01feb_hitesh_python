// WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{

    
    char in[30], rev[30];

    
    printf("Enter Word/Line here to check Palindrome or not :");
    scanf("%s", &in);
    
    
    strcpy(rev, in);


    strrev(rev);

    
    if (strcmp(in, rev) == 0)
    {
        printf("%s is palindrome",in);
    }
    else
    {
        printf("%s is not palindrome",in);
    }
}