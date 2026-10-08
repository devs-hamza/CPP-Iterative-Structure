#include<iostream>
using namespace std;
int main()
{
	int tbill,bill;
	int age;
	int days;
	cout << "======WELCOME======\n1. Small room - 30$ per night\n2. Medium room - 50$ per night\n3. Large room - 70$ per night\n4. Exit\n";
	int choice;
	do
	{
		cout << "\nEnter your age : ";
		cin >> age;
		cout << "Enter the number of nights you wanna stay : ";
		cin >> days;
		cout << "Enter your room choice :";
		cin >> choice;
		if (age >= 18)
		{
			switch (choice)
			{
			case 1:
			{
				if (days >= 7)
				{
					tbill = 30 * days;
					int per;
					per = tbill * 0.15;
					bill = tbill - per;
					cout << "\nYour total bill before 15% discount is " << tbill << "$\n";
					cout << "Your bill after discount is " << bill << "$\n";
				}
				else if (days < 7 && days>0)
				{
					tbill = days * 30;
					cout << "You have no discount \n Your total bill is " << tbill << "$\n";
				}
				else
				{
					cout << "Invalid days\n";
				}
			}
			break;
			case 2:
			{
				if (days >= 7)
				{
					tbill = 50 * days;
					int per;
					per = tbill * 0.15;
					bill = tbill - per;
					cout << "\nYour total bill before 15% discount is " << tbill << "$\n";
					cout << "Your bill after discount is " << bill << "$\n";
				}
				else if (days < 7 && days>0)
				{
					tbill = days * 50;
					cout << "You have no discount \n Your total bill is " << tbill << "$\n";
				}
				else
				{
					cout << "Invalid days\n";
				}
			}
			break;
			case 3:
			{
				if (days >= 7)
				{
					tbill = 70 * days;
					int per;
					per = tbill * 0.15;
					bill = tbill - per;
					cout << "\nYour total bill before 15% discount is " << tbill << "$\n";
					cout << "Your bill after discount is " << bill << "$\n";
				}
				else if (days < 7 && days>0)
				{
					tbill = days * 70;
					cout << "You have no discount \n Your total bill is " << tbill << "$\n";
				}
				else
				{
					cout << "Invalid days\n";
				}
			}
			break;
			case 4:
			{
				cout << "Exit";
			}
			break;
			default:
			{
				cout << "\n==Invalid Room Choice==\n";
			}
			}
		}
		else
		{
			cout << "Sorry! You can't checkin because of your age\n";
		}
		
	} while (choice != 4||age<18);
	
	return 0;
}