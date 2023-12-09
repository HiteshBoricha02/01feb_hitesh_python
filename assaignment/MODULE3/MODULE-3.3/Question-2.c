#include <stdio.h>
int main()
{
    int x, y, cal;
    printf("\n\t Calculation That you can Perform in this calculator  ");
    printf("\n\n\t' 1. Addition    \t+ '\n\t' 2. Subtraction \t- '\n\t' 3. Division     \t/ '\n\t' 4. Multiplication \t* '");
    printf("\n\n Enter First Value :");
    scanf("%d", &x);
    printf("\n\n What would like to Perform :");
    scanf("%d", &cal);
    printf("\n\n Enter Second Value :");
    scanf("%d", &y);

    switch (cal)
    {
    case 1:
        printf("\n %d + %d = %d", x, y, x + y);
        break;

    case 2:
        printf("\n %d - %d = %d", x, y, x - y);
        break;

    case 3:
        printf("\n %d / %d = %d", x, y, x / y);
        break;

    case 4:
        printf("\n %d * %d = %d", x, y, x * y);
        break;

    default:
        printf("\ninvalid Number");
        
        break;
    }
}
