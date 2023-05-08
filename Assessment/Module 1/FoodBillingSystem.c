#include<stdio.h>
int main()
{   
    char more; 
    int item,quantity,cost,totalbill=0;
    

    // Pass Message to show menu to user 
    printf("Welcome to Our Restaurant");
    printf("\n\n\t   --Here is Your Menu --");

    // Hotel Menu
    printf("\n\n\t1. Pizza           - 180 rs");
    printf("\n\t2. Burger          - 80 rs");
    printf("\n\t3. Pasta           - 70 rs");
    printf("\n\t4. Fries           - 90 rs");
    printf("\n\t5. cold Drinks     - 35 rs");

    printf("\n\n -- So What Would you like to Have ? --    ");

    // Do while loop for condition check 
    do
    {
    
    // select item 
    printf("\n\nSelect Item from Menu :");
    scanf("%d",&item); 
    //  quantity as per users choice
    printf("Enter Quantity :");
    scanf("%d",&quantity);

    // switch for choice item
    switch (item)
    {
    
    case 1:

        // cost = item cost multiple to quantity
        cost = 180 * quantity;
        printf("%d Pizza",quantity);
        break;

    case 2:
        cost = 80 * quantity;
        printf("%d Burger",quantity);    
        break;

    case 3:
        cost = 70 * quantity;
        printf("%d Pasta",quantity);
        break;

    case 4:
        cost = 90 * quantity;
        printf("%d  Fries",quantity);
        break;

    case 5:
        cost = 35 * quantity;
        printf("%d Cold Drinks",quantity);     
        break;   

    default:
        printf("-- Item is not Available --");
        cost = 0; 
        break;
    }
    
    // total bill = addition of all ordered item cost
    totalbill += cost;

    //  something more
    printf("\n\n something More ? ");
    printf("Press Y / N :");
    scanf(" %c",&more);
    }
    while (more == 'Y' || more == 'y' );

   //  total bill 
    printf("\nYour Total Bill is : %d",totalbill);

    
}
