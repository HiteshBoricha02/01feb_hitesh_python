// WAP to Find Vowels andd Consonants using switch case

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Charater : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("Character is Vowel");
        break;

    case 'A':
        printf("Character is Vowel");
        break;

    case 'e':
        printf("Character is Vowel");
        break;

    case 'E':
        printf("Character is Vowel");
        break;

    case 'i':
        printf("Character is Vowel");
        break;

    case 'I':
        printf("Character is Vowel");
        break;

    case 'o':
        printf("Character is Vowel");
        break;

    case 'O':
        printf("Character is Vowel");
        break;

    case 'u':
        printf("Character is Vowel");
        break;

    case 'U':
        printf("Character is Vowel");
        break;

    default:
        printf("Character is Consonants");
        break;
    }
}