#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Start = ";
    cin >> start;
    cout << "End = ";
    cin >> end;

    int totalPrimes = 0;
    int sumPrimes = 0;
    int largest = 0;
    int smallest = 0;

    for (int num = start; num <= end; num++)
    {
        int count = 0;

        if (num >= 2)
        {
            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }

            if (count == 2)
            {
                cout << "\nPrime number: " << num;

                int temp = num;
                int digitSum = 0;

                for (; temp > 0; temp = temp / 10)
                {
                    digitSum += temp % 10;
                }

                cout << "\nSum of digits: " << digitSum;

                if (digitSum % 2 == 0)
                {
                    cout << "\nDigit sum is Even";
                }
                else
                {
                    cout << "\nDigit sum is Odd";
                }

                totalPrimes++;
                sumPrimes += num;

                if (totalPrimes == 1)
                {
                    smallest = num;
                    largest = num;
                }
                else
                {
                    if (num > largest)
                    {
                        largest = num;
                    }

                    if (num < smallest)
                    {
                        smallest = num;
                    }
                }

                cout << "\n";
            }
        }
    }

    cout << "\n===== FINAL RESULTS =====\n";
    cout << "\nTotal number of primes: " << totalPrimes;
    cout << "\nSum of all primes: " << sumPrimes;
    if (totalPrimes > 0)
    {
        cout << "\nLargest prime: " << largest;
        cout << "\nSmallest prime: " << smallest;
    }
    else
    {
        cout << "\nNo prime numbers found in this range.\n";
    }

    return 0;
}