#include<iostream>
using namespace std;
int main()
{
	int choice;
	string patientID;
	char condition;
	char roomtype;
	int age = 0, daysadmitted = 0;
	float temprature, heartbeat, oxygensaturation;
	int painlevel;
	int roomchoice;
	int additionalcharges = 0;
	int roombill = 0;
	float billbeforedis = 0;
	float disduetodays = 0;
	float disduetoage = 0;
	float billafterdis = 0;
	float serviceCharges = 0;
	float totalbill = 0, totaldis = 0;
	cout << "1. Register Patient\n2. Assess Patient\n3. Calculate Hospital Bill\n4. Display Patient Summary\n5. Exit\n ";
	do
	{
		cout << "\nEnter choice : ";
		cin >> choice;
		
		switch (choice)
		{
		case 1:
		{
			cout << "\nEnter Patient ID : ";
			cin >> patientID;
			do
			{
				cout << "Enter patient age : ";
				cin >> age;
				if (age < 1 || age>120)
					cout << "Age must be between 1 to 120!!\n";
			} while (age < 1 || age>120);
			do
			{
				cout << "Enter days admitted : ";
				cin >> daysadmitted;
				if (daysadmitted < 0)
					cout << "Days cannot be negative!!\n";
			} while (daysadmitted < 0);
		}
		break;

		case 2:
		{
			cout << "\nEnter temprature(C)       : ";
			cin >> temprature;
			cout << "Enter heart beat          : ";
			cin >> heartbeat;
			cout << "Enter oxygen saturation   : ";
			cin >> oxygensaturation;
			cout << "Enter pain level (0 - 10) : ";
			cin >> painlevel;
			if (oxygensaturation < 90 || heartbeat>140 || temprature > 40)
			{
				condition = 'C';
				additionalcharges = 25000;
			}
			else if (oxygensaturation < 93 && oxygensaturation >= 90 || heartbeat>121 && heartbeat <= 140 || temprature >= 39 && temprature <= 40 || painlevel >= 8)
			{
				condition = 'HR';
				additionalcharges = 15000;
			}
			else if (oxygensaturation < 95 && oxygensaturation >= 93 || heartbeat>101 && heartbeat <= 121 || temprature >= 38 && temprature <= 38.9 || painlevel >= 5 && painlevel <= 7)
			{
				condition = 'MR';
				additionalcharges = 7500;
			}
			else
			{
				condition = 'S';
				additionalcharges = 2500;
			}
		}
		break;

		case 3:
		{
			cout << "\n1. General Ward   5000rs/day";
			cout << "\n2. Semi Private   8000rs/day";
			cout << "\n3. Private        10000rs/day";
			cout << "\n4. ICU            30000rs/day";
			cout << "\nEnter your room choice : ";
			cin >> roomchoice;
			switch (roomchoice)
			{
			case 1:
			{
				roomtype = 'G';
				roombill = daysadmitted * 5000;
			}
			break;

			case 2:
			{
				roomtype = 'S';
				roombill = daysadmitted * 8000;
			}
			break;

			case 3:
			{
				roomtype = 'P';
				roombill = daysadmitted * 10000;
			}
			break;

			case 4:
			{
				roomtype = 'I';
				roombill = daysadmitted * 30000;
			}
			break;

			default:
			{
				cout << "\nInvalid Room choice ";
			}
			}
			billbeforedis = roombill + additionalcharges;

			if (age >= 65)
			{
				disduetoage = billbeforedis * 0.05;
			}
			if (daysadmitted > 7)
			{
				disduetodays = billbeforedis * 0.1;
			}

			totaldis = disduetoage + disduetodays;
			billafterdis = billbeforedis - (disduetoage + disduetodays);
			serviceCharges = billafterdis * 0.05;
			totalbill = billafterdis + serviceCharges;
		}
		break;

		case 4:
		{
			cout << "\n========== SUMMARY ==========";
			cout << "\nPatient ID     : " << patientID;
			cout << "\nAge            : " << age;
			if (condition == 'C')
				cout << "\nRisk level     : Critical";
			else if (condition == 'HR')
				cout << "\nRisk level     : High Risk";
			else if (condition == 'MR')
				cout << "\nRisk level     : Moderate Risk";
			else if (condition == 'S')
				cout << "\nRisk level     : Stable";
			else
				cout << "\nRisk level     : ---";
			cout << "\nDays Admitted  : " << daysadmitted;

			if (roomtype == 'G')
				cout << "\nRoom type      : General";
			else if (roomtype == 'S')
				cout << "\nRoom type      : Semi Private";
			else if (roomtype == 'P')
				cout << "\nRoom type      : Private";
			else if (roomtype == 'I')
				cout << "\nRoom type      : ICU";
			else
				cout << "\nRoom type      : ---";

			cout << "\nMedical charges   : " << billbeforedis;
			cout << "\nDiscount          : " << totaldis;
			cout << "\nService charges   : " << serviceCharges;
			cout << "\nTotal Bill        : " << totalbill;
		}
		break;

		case 5:
		{
			cout << "\nExit !!!!!";
		}
		break;
		default:
		{
			cout << "\nInvalid choice!!!";
		}
		}
	}while (choice != 5);
	return 0;
}