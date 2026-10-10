#include <iostream>
using namespace std;

int main()
{
    int choice, quantity, sum_quantity = 0, discount, extra_discount;
    int discount_percentage, tax, tax_percentage;
    double price, sum_price = 0;
    do
    {
        cout << "\nEnter the number of items you bought : ";
        int num_item;
        cin >> num_item;
        int i = 1;
        sum_price = 0;
        sum_quantity = 0;
        while (i != num_item + 1)
        {
            cout << "\nItem " << i << " price($) : ";
            cin >> price;
            cout << "Item " << i++ << " quantity : ";
            cin >> quantity;
            sum_price = (quantity * price) + sum_price;
            sum_quantity = sum_quantity + quantity;
        }
        cout << "\nSubtotal : " << sum_price << "$";
        if (sum_price >= 100)
        {
            discount_percentage = sum_price * 0.1;
            discount = sum_price - discount_percentage;
            cout << "\nDiscount : " << discount_percentage << "$";
            cout << "\nBill After Discount : " << discount << "$";
            if (sum_quantity >= 10)
            {
                extra_discount = discount - 5;
                cout << "\nAfter Extra discount : " << extra_discount << "$";
                tax_percentage = extra_discount * 0.08;
                tax = extra_discount + tax_percentage;
                cout << "\nTax : " << tax_percentage << "$";
                cout << "\nTotal bill : " << tax << "$";
            }
            else
            {
                tax_percentage = discount * 0.08;
                tax = discount + tax_percentage;
                cout << "\n===No extra discount for you===";
                cout << "\nTax : " << tax_percentage << "$";
                cout << "\nTotal bill : " << tax << "$";
            }
        }
        else
        {
            tax_percentage = sum_price * 0.08;
            tax = sum_price + tax_percentage;
            cout << "\n===No discount for you===";
            cout << "\nTax : " << tax_percentage << "$";
            cout << "\nTotal bill : " << tax << "$";
        }
        cout << "\nIs there more costumers?\n1. YES\n2. NO\n";
        cin >> choice;
    } while (choice != 2);
    cout << "\n\nThanks for visiting";
    return 0;
}