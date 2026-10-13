#include <iostream>
using namespace std;
int main()
{
	double principle, numMonths;
	double interest=0,latefee=0,month=1;
	double totalinterest = 0, totalfee = 0, totalfinal = 0;
	cout << "Enter the Loan amount: ";
	cin >> principle;
	cout << "Enter maximum number of months: ";
	cin >> numMonths;
	do
	{
		double payment;
		cout << "\nEnter Monthly payment: ";
		cin >> payment;

		if (principle >= 500000)
		{
			interest = principle * 0.022;
		}
		else if (principle > 200000 && principle < 500000)
		{
			interest = principle * 0.018;
		}
		else if (principle <= 200000)
		{
			interest = principle * 0.015;
		}
		else
		{
			cout << "\n===Invalid Loan Amount===";
		}
		totalinterest += interest;
		if (payment < (principle * 0.001))
		{
			latefee = principle * 0.0001;
			totalfee += latefee;
			principle = (principle+latefee+interest) - (payment);
			totalfinal += principle;
			cout << "\nMonth: " << month;
			cout << "\nInterest: " << interest;
			cout << "\nPayment: " << payment;
			cout << "\nLate fee: " << latefee;
			cout << "\nNew Principle: " << principle;

		}
		else
		{
			principle = (principle+interest) - (payment);
			totalfinal += principle;
			cout << "\nMonth: " << month;
			cout << "\nInterest: " << interest;
			cout << "\nPayment: " << payment;
			cout << "\nNew Principle: " << principle;
		}
		month++;
	} while (month != numMonths&&principle>=0);
	cout << "\n\n===== REPORT =====";
	cout << "\nTotal months : " << month-1;
	cout << "\nTotal interest : " << totalinterest;
	cout << "\nTotal final : " << totalfinal;
	cout << "\n==================";

	return 0;

}