#include <iostream>
using namespace std;

int main()
{
    int pin;
    int pincode = 2112;
    do
    {
        cout << "\nEnter Your PIN code: ";
        cin >> pin;
        if (pin == pincode)
        {
            int choice;
            double balance = 50000;
            double amount;
            cout << "\n===== ATM MENU =====";
            cout << "\n1. Check Balance";
            cout << "\n2. Deposit Money";
            cout << "\n3. Withdraw Money";
            cout << "\n4. Exit";
            do
            {
                cout << "\nEnter your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "Your balance = Rs. " << balance;
                    break;
                case 2:
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    balance = balance + amount;
                    cout << "Amount deposited successfully";
                    cout << "\nNew balance = Rs. " << balance;
                    break;
                case 3:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    if (amount <= balance)
                    {
                        balance = balance - amount;
                        cout << "Please collect your cash";
                        cout << "\nRemaining balance = Rs. " << balance;
                    }
                    else
                        cout << "Insufficient balance";
                    break;
                case 4:
                    cout << "Thank you for using the ATM";
                    break;
                default:
                    cout << "Invalid choice";
                }
            } while (choice != 4);
        }
        else
            cout << "==Please Enter a valid PIN==";
    } while (pin != pincode);
    return 0;
}