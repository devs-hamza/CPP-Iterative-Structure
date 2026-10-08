#include <iostream>
using namespace std;
int main()
{
	int e = 0;
	int num = 57;
	int number;
	do
	{
		cout << "\nGuess the number (1-100): ";
		cin >> number;
		if (number > num)
		{
			cout << "Too high";
		}
		else if (number < num)
		{
			cout << "Too low";
		}
		else if (number == num)
		{
			cout << "Congratulations!";
		}
		e++;
	} while (num != number);
	cout<<"\nYou got it into " << e << " attempts ";
	return 0;
}