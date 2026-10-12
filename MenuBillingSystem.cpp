#include <iostream>
using namespace std;

int main()
{
	int choice;
    int teaTotal = 0;
    int coffeeTotal = 0;
    int sandwichTotal = 0;
    int friesTotal = 0;
    int waterTotal = 0;
    int quantity;

    cout << "===== MENU =====\n";
	cout << "\n1. Tea (Rs. 80)\n2. Coffee (Rs. 150)\n3. Sandwich (Rs. 250)\n4. Fries (Rs. 200)\n5. Water (Rs. 50)\n0. Checkout";
    do
    {
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter quantity of Tea: ";
            cin >> quantity;

            if (quantity > 0)
            {
                teaTotal += 80 * quantity;
            }
            else
            {
                cout << "\nInvalid quantity!";
            }
        }
        break;

        case 2:
        {
            cout << "Enter quantity of Coffee: ";
            cin >> quantity;

            if (quantity > 0)
            {
                coffeeTotal += 150 * quantity;
            }
            else
            {
                cout << "\nInvalid quantity!";
            }
        }
        break;

        case 3:
        {
            cout << "Enter quantity of Sandwich: ";
            cin >> quantity;

            if (quantity > 0)
            {
                sandwichTotal += 250 * quantity;
            }
            else
            {
                cout << "\nInvalid quantity!";
            }
        }
        break;

        case 4:
        {
            cout << "Enter quantity of Fries: ";
            cin >> quantity;

            if (quantity > 0)
            {
                friesTotal += 200 * quantity;
            }
            else
            {
                cout << "\nInvalid quantity!";
            }
        }
        break;

        case 5:
        {
            cout << "Enter quantity of Water: ";
            cin >> quantity;

            if (quantity > 0)
            {
                waterTotal += 50 * quantity;
            }
            else
            {
                cout << "\nInvalid quantity!";
            }
        }
        break;

        case 0:
        {
            cout << "\nChecking out...";
        }
        break;

        default:
        {
            cout << "\nInvalid menu choice!";
        }
        }
    } while (choice != 0);

    cout << "\n----- BILL -----\n";
    cout << "Tea:       Rs. " << teaTotal << '\n';
    cout << "Coffee:    Rs. " << coffeeTotal << '\n';
    cout << "Sandwich:  Rs. " << sandwichTotal << '\n';
    cout << "Fries:     Rs. " << friesTotal << '\n';
    cout << "Water:     Rs. " << waterTotal << '\n';
    int subtotal = teaTotal + coffeeTotal + sandwichTotal + friesTotal + waterTotal;
    double tax = subtotal * 0.10;
    double discount = 0;
    if (subtotal > 2500)
        discount = subtotal * 0.05;
    double finalTotal = subtotal + tax - discount;

    cout << "Subtotal:  Rs. " << subtotal << '\n';
    cout << "Tax (10%): Rs. " << tax << '\n';
    cout << "Discount:  Rs. " << discount << '\n';
    cout << "Final:     Rs. " << finalTotal << '\n';
    cout << "----------------------------------";

	return 0;
}
