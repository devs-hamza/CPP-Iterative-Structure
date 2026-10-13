
#include <iostream>
using namespace std;

int main()
{
    int number, i = 2, j,count;
    cout << "Enter n: ";
    cin >> number;

    while (i <= number)
    {
        j = 1;
        count = 0;
        while (j <= i)
        {
            if (i % j == 0)
            {
                count++;
            }
            j++;
        }
        if (count==2)
        {
            cout << i << " ";
        }

        i++;
    }

    return 0;
} 
