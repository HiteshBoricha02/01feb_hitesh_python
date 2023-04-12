// write a program find monday to sunday using switch case
#include<stdio.h>
int main()
{
int days;
printf("\n sunday \n monday \n tuesday \n wednesday \n thursday \n friday \n saturday ");


printf("\n enter days :");
scanf("%d",&days);
switch(days)
{
    case 1:
         printf("sunday");
    break;
    case 2:
         printf("monday");
    break;
    case 3:
        printf("tuesday");
    break;
    case 4:
        printf("wednesday");
    break;
    case 5:
        printf("thursday");
    break;
    case 6:
        printf("friday");
    break;
    case 7:
        printf("saturday");

    default:
        printf("invalid ");
    break;

}
}
