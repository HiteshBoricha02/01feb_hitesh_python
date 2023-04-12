// nasted if and switch
#include<stdio.h>
void main()
{
       int hotdrink,colddrink;
       int choice1;
       int choice2;
       printf("cold drinks:\nhot drinks:");
       printf("\nenter your choice");
       scanf("%d",&choice1);
       switch (choice1)
       {
        case 1:
        printf("\ncolddrink");
        printf("\n1.thumsup\n2.sprite");
        printf("\n enter your choice");
        scanf("%d",&choice2);
        switch (choice2)
        {
        case 1:
        printf("\nthumsup");
            break;
        case 2:
        printf("\nsprite");
            break;
        
        default:
        printf("\n not available");
            break;
        }
        break;
        case 2:
        printf("\nhotdrink");
        printf("\n1.tea\n2.coffe");
        printf("\n enter your choice");
        scanf("%d",&choice2);
        switch (choice2)
        {
        case 1:
        printf("\ntea");
            break;
        case 2:
        printf("\ncoffe");
        break;
        
        default:
        printf("\n not avleble");
            break;
        }
        break;
    default:
    printf("\not available");
        break;


       }

}