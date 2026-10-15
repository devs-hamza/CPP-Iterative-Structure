#include <iostream>
using namespace std;
int main()
{
	int exitchoice = 0;
	int semesternumber, credithours;
	string studentID;
	float cgpa;
	int choice;
	do
	{
		cout << "Enter the student ID : ";
		cin >> studentID;
		cout << "Enter current CGPA : ";
		cin >> cgpa;
		cout << "Enter completed credit hours : ";
		cin >> credithours;
		cout << "Enter semester number : ";
		cin >> semesternumber;

		bool ai = false;
		bool ml = false;
		bool dl = false;
		bool cv = false;
		bool fyp = false;
		int labfee = 0;
		float scholarship = 0;
		int scholarshipPer = 0;
		int registeredcourses = 0;
		int registeredhours = 0;
		float finalfee = 0;
		float totalfee = 0;
		cout << "\nCode   Course                      Credit hours\n";
		cout << "\n1      Artificial Intelligence          3";
		cout << "\n2      Machine Learning                 3";
		cout << "\n3      Deep learning                    3";
		cout << "\n4      Computer vision                  3";
		cout << "\n5      Final year project               6";
		cout << "\nEnter 0 to exit!!";
		do
		{
			cout << "\nEnter your choice : ";
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				if (ai == true)
				{
					cout << "\nCourse already registered!!";
				}
				else
				{
					ai = true;
					totalfee += (9000 * 3);
					cout << "\nAI course registered!!";
					labfee += 3000;
					registeredhours += 3;
					registeredcourses++;
				}
			}
			break;

			case 2:
			{
				if (cgpa >= 2.0)
				{
					if (ml == true)
					{
						cout << "\nCourse already registered!!";
					}
					else
					{
						ml = true;
						totalfee += (9000 * 3);
						cout << "\nML course registered!!";
						labfee += 4000;
						registeredhours += 3;
						registeredcourses++;
					}
				}
				else
				{
					cout << "\nCGPA must be atleast 2.0!!";
				}
			}
			break;

			case 3:
			{
				if (cgpa >= 2.5 && credithours >= 60)
				{
					if (dl == true)
					{
						cout << "\nCourse already registered!!";
					}
					else
					{
						dl = true;
						totalfee += (9000 * 3);
						cout << "\nDL course registered!!";
						labfee += 5000;
						registeredhours += 3;
						registeredcourses++;
					}
				}
				else
				{
					cout << "\nCredit hours and CGPA must be atleast 60 and 2.5 respectivily!!";
				}
			}
			break;

			case 4:
			{
				if (cgpa >= 2.3 && semesternumber >= 5)
				{
					if (cv == true)
					{
						cout << "\nCourse already registered";
					}
					else
					{
						cv = true;
						totalfee += (9000 * 3);
						cout << "\nCV course registered!!";
						labfee += 5000;
						registeredhours += 3;
						registeredcourses++;
					}
				}
				else
				{
					cout << "\nCGPA and semester must be atleast 2.3 and 5 respectivily!!";
				}
			}
			break;

			case 5:
			{
				if (cgpa >= 2.0 && semesternumber >= 7 && credithours >= 90)
				{
					if (fyp == true)
					{
						cout << "\nCourse already registered!!";
					}
					else
					{
						fyp = true;
						totalfee += (9000 * 6);
						cout << "\nFYP course registered!!";
						labfee += 10000;
						registeredhours += 6;
						registeredcourses++;
					}
				}
				else
				{
					cout << "\nCGPA, semester and credit hours must be 2.0, 7 and 90 respectivily!!";
				}
			}
			break;


			case 0:
			{
				cout << "\nRegistration completed!!";
			}
			break;

			default:
			{
				cout << "\nInvalid course choice!!";
			}
			}

		} while (choice != 0);

		if (cgpa >= 3.75)
		{
			scholarship = totalfee * 0.4;
			scholarshipPer = 40;
		}
		else if (cgpa < 3.75 && cgpa >= 3.5)
		{
			scholarship = totalfee * 0.25;
			scholarshipPer = 25;
		}
		else if (cgpa < 3.5 && cgpa >= 3)
		{
			scholarship = totalfee * 0.1;
			scholarshipPer = 10;
		}
		else
		{
			scholarship = totalfee * 0;
			scholarshipPer = 0;
		}

		finalfee = (totalfee + labfee) - scholarship;
		cout << "\n============ Report ===========";
		cout << "\n\nStudent ID             : " << studentID;
		cout << "\nRegistered courses      : " << registeredcourses;
		cout << "\nTotal registered hours  : " << registeredhours;
		cout << "\nTuition fee             : " << totalfee;
		cout << "\nLab fee                 : " << labfee;
		cout << "\nScholarship percentage  : " << scholarshipPer;
		cout << "\nScholarship amount      : " << scholarship;
		cout << "\nFinal fee               : " << finalfee;
		cout << "\n\n================================";


		cout << "\n\nDO YOU WANT TO EXIT??? \n1. YES \n2. NO";
		cin >> exitchoice;
	}while (exitchoice != 1);
	
	return 0;

}