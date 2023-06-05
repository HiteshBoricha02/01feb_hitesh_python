// food billing system
#include<stdio.h>
// Variable to store user input for ordering more items
char more; 
// Variables for item, quantity, cost, and total bill                 
int item, quantity, cost, totalbill;    

void show()
{
    // Displaying the menu to the user
    printf("Welcome to Our Restaurant");
    printf("\n\n\t   -- Your Menu --");
    printf("\n\n\t1. Pizza           - 130 rs");
    printf("\n\t2. Burger          - 99 rs");
    printf("\n\t3. Pasta           - 70 rs");
    printf("\n\t4. Fries           - 80 rs");
    printf("\n\t5. Cold Drinks     - 35 rs");
    printf("\n\n -- So What Would you like to Have? --    ");
}

void get()
{
    do
    {
        // Prompting the user to select an item and quantity
        printf("\n\nSelect Item from Menu: ");
        scanf("%d", &item);

        printf("Select Quantity: ");
        scanf("%d", &quantity);

        switch (item)
        {
            case 1:
                cost = 130 * quantity;
                printf("%d Pizza ", quantity);
                break;

            case 2:
                cost = 99 * quantity;
                printf("%d Burger ", quantity);
                break;

            case 3:
                cost = 70 * quantity;
                printf("%d Pasta ", quantity);
                break;

            case 4:
                cost = 80 * quantity;
                printf("%d Fries ", quantity);
                break;

            case 5:
                cost = 35 * quantity;
                printf("%d Cold Drinks ", quantity);
                break;

            default:
                printf("-- Item is not Available --");
                break;
        }

         // Updating the total bill with the cost of the selected item
        totalbill += cost;

        // Prompting the user if they want to order more
        printf("\n\nDo you want to order something more? ");
        printf("Press Y / N ");
        scanf(" %c", &more);

    } while (more == 'Y' || more == 'y');
       // Displaying the total bill
    printf("\nYour Total Bill is: %d", totalbill);   
}

int main()
{
     // Displaying the menu
    show();  
     // Getting the user's order
    get();   
    return 0;
}
