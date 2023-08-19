#include <iostream>
using namespace std;

int main() {
    int choice;
    int itemChoice;
    int quantity;
    char repeat;
    double totalBill = 0.0;

    // our menu for you 
    do {
        cout << "Welcome to the Restaurant!" << endl;
        cout << "Menu:" << endl;
        cout << "1. Pizza" << endl;
        cout << "2. Burger" << endl;
        cout << "3. Salad" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // chose  your favorite item
        switch (choice) {
            case 1:
                cout << "Pizza selected. Choose your type:" << endl;
                cout << "1. Margherita ($9.99)" << endl;
                cout << "2. Pepperoni ($10.99)" << endl;
                cout << "3. Hawaiian ($11.99)" << endl;
                cout << "Enter your choice: ";
                cin >> itemChoice;

            //    switch case for you multiple choice 
                switch (itemChoice) {
                    case 1:
                        cout << "You selected Margherita pizza." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (9.99 * quantity);
                        break;
                    case 2:
                        cout << "You selected Pepperoni pizza." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (10.99 * quantity);
                        break;
                    case 3:
                        cout << "You selected Hawaiian pizza." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (11.99 * quantity);
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }

                break;
            //  case 2 for select a burger type 
            case 2:
                cout << "Burger selected. Choose your type:" << endl;
                cout << "1. Cheeseburger ($6.99)" << endl;
                cout << "2. Veggie Burger ($7.99)" << endl;
                cout << "3. Chicken Burger ($8.99)" << endl;
                cout << "Enter your choice: ";
                cin >> itemChoice;
                 
                //  select to your item and proses
                switch (itemChoice) {
                    case 1:
                        cout << "You selected Cheeseburger." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (6.99 * quantity);
                        break;
                    case 2:
                        cout << "You selected Veggie Burger." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (7.99 * quantity);
                        break;
                    case 3:
                        cout << "You selected Chicken Burger." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (8.99 * quantity);
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }

                break;

            // chose for salad type 
            case 3:
                cout << "Salad selected. Choose your type:" << endl;
                cout << "1. Caesar Salad ($5.99)" << endl;
                cout << "2. Greek Salad ($6.99)" << endl;
                cout << "3. Garden Salad ($4.99)" << endl;
                cout << "Enter your choice: ";
                cin >> itemChoice;
                
            // chose to deferent type salad 
                switch (itemChoice) {
                    case 1:
                        cout << "You selected Caesar Salad." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (5.99 * quantity);
                        break;
                    case 2:
                        cout << "You selected Greek Salad." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (6.99 * quantity);
                        break;
                    case 3:
                        cout << "You selected Garden Salad." << endl;
                        cout << "Enter the quantity: ";
                        cin >> quantity;
                        totalBill += (4.99 * quantity);
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }

                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << "Do you want to make another selection? (y/n): ";
        cin >> repeat;
        cout << endl;

        // for generate bill and delivery time 
    } while (repeat == 'y' || repeat == 'Y');
                cout << "Thank you for for order!" << endl;
                cout << "Total bill: $" << totalBill << endl;
                cout << " delivery in 30 min"<< endl;

    return 0;
}