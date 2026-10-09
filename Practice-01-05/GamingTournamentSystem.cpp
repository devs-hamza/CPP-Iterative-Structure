#include <iostream>
using namespace std;
int main()
{
	int age, matchesplayed, wins, loss, draws,choice;
	int winpoints, losspoints, drawpoints, totalpoints;
	int e = 0;

	do
	{
		age = 0;
		matchesplayed = 0;
		wins = 0;
		loss = 0;
		cout << "Enter the age of player: ";
		cin >> age;
		cout << "Enter the matches played: ";
		cin >> matchesplayed;
		cout << "Enter wins: ";
		cin >> wins;
		cout << "Enter losses: ";
		cin >> loss;
		cout << "\n========== PLAYER REPORT ==========";
		cout << "\nAGE: " << age;
		cout << "\nMatches Played: " << matchesplayed;
		if (age > 16)
		{
			if (matchesplayed > 3)
			{
				if (wins + loss <= matchesplayed)
				{
					cout << "\nWins: " << wins;
					cout << "\nLosses: " << loss;
					draws = matchesplayed - (wins + loss);
					cout << "\nDraws:" << draws;
					winpoints = wins * 10;
					losspoints = loss * 2;
					drawpoints = draws * 5;
					totalpoints = winpoints + losspoints + drawpoints;
					cout << "\nTotal Points: " << totalpoints;
					if (totalpoints >= 80)
					{
						if (wins == matchesplayed)
						{
							cout << "\nRank: Champion";
							cout << "\nPrize Money: 1000$";
							cout << "\nPrize After Bonus: 1250$";
						}
						else
						{
							cout << "\nRank: Champion";
							cout << "\nPrize Money: 1000$";
						}
					}
					else if (totalpoints < 80 && totalpoints >= 50)
					{
						if (wins == matchesplayed)
						{
							cout << "\nRank: Professional";
							cout << "\nPrize Money: 500$";
							cout << "\nPrize After Bonus: 750$";
						}
						else
						{
							cout << "\nRank: Professional";
							cout << "\nPrize Money: 500$";
						}
					}
					else if (totalpoints < 50 && totalpoints >= 30)
					{
						if (wins == matchesplayed)
						{
							cout << "\nRank: Intermediate";
							cout << "\nPrize Money: 200$";
							cout << "\nPrize After Bonus: 450$";
						}
						else
						{
							cout << "\nRank: Intermediate";
							cout << "\nPrize Money: 200$";
						}
					}
					else
					{
						cout << "\nRank: Beginner";
						cout << "\nPrize Money: 0$";
					}
				}
				else
				{
					cout << "Invalid Match Data";
				}
			}
			else
			{
				cout << "\nYou have to play more than 3 matches to qualify for tournment";
			}
		}
		else
		{
			cout << "\nYou must 16 or elder to qualify";
		}
		cout << "\n==================================";
		cout << "\nProcess another player?\n1. Yes\n2. No \n";
		cin >> choice;
		e++;
	} while (choice != 2);
	cout << "The total players are : " << e;
	return 0;
}