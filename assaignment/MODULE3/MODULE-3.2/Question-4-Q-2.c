// WAP to Find Vowels and Consonants using switch case

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Charater : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("a is Vowel");
        break;

    case 'A':
        printf("A is Vowel");
        break;

    case 'e':
        printf("e is Vowel");
        break;

    case 'E':
        printf("E is Vowel");
        break;

    case 'i':
        printf("i is Vowel");
        break;

    case 'I':
        printf("I is Vowel");
        break;

    case 'o':
        printf("o is Vowel");
        break;

    case 'O':
        printf("O is Vowel");
        break;

    case 'u':
        printf("u is Vowel");
        break;

    case 'U':
        printf("U is Vowel");
        break;

    default:
        printf("%c is Consonants",ch);
        break;
    }
}