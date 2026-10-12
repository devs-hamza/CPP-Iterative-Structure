#include <iostream>
using namespace std;
int main()
{
    int carCapacity = 5, bikeCapacity = 5, busCapacity = 5;
    int carIn = 0, bikeIn = 0, busIn = 0;
    int totalCar = 0, totalBike = 0, totalBus = 0;
    int choice;
    char type;
    
    do
    {
        cout << "\n===== PARKING LOT MANAGER =====\n";
        cout << "1. Entry\n";
        cout << "2. Exit\n";
        cout << "3. Status\n";
        cout << "0. Shutdown\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter vehicle type (C=Car, B=Bike, U=Bus): ";
            cin >> type;

            switch (type)
            {
            case 'C':
            case 'c':
            {
                if (carIn >= carCapacity)
                {
                    cout << "Section Full\n";
                }
                else
                {
                    carIn++;
                    totalCar++;
                    cout << "Car entered successfully.\n";
                }
            }
            break;

            case 'B':
            case 'b':
            {
                if (bikeIn >= bikeCapacity)
                {
                    cout << "Section Full\n";
                }
                else
                {
                    bikeIn++;
                    totalBike++;
                    cout << "Bike entered successfully.\n";
                }
            }
            break;

            case 'U':
            case 'u':
            {
                if (busIn >= busCapacity)
                {
                    cout << "Section Full\n";
                }
                else
                {
                    busIn++;
                    totalBus++;
                    cout << "Bus entered successfully.\n";
                }
            }
            break;


            default:
            {
                cout << "Invalid vehicle type!\n";
            }
            break;
            }
        }
        break;

        case 2:
        {
            cout << "Enter vehicle type (C=Car, B=Bike, U=Bus): ";
            cin >> type;

            switch (type)
            {
            case 'C':
            case 'c':
                if (carIn == 0)
                {
                    cout << "No vehicle to exit\n";
                }
                else
                {
                    carIn--;
                    cout << "Car exited successfully.\n";
                }
                break;

            case 'B':
            case 'b':
                if (bikeIn == 0)
                {
                    cout << "No vehicle to exit\n";
                }
                else
                {
                    bikeIn--;
                    cout << "Bike exited successfully.\n";
                }
                break;

            case 'U':
            case 'u':
                if (busIn == 0)
                {
                    cout << "No vehicle to exit\n";
                }
                else
                {
                    busIn--;
                    cout << "Bus exited successfully.\n";
                }
                break;

            default:
            {
                cout << "Invalid vehicle type!\n";
            }
            }
            break;
        }
        break;

        case 3:
        {
            cout << "\n===== PARKING STATUS =====\n";

            cout << carCapacity - carIn << "cars out of " << carCapacity << " are remaining.\n";
            cout << bikeCapacity - bikeIn << "bikes out of " << bikeCapacity << " are remaining.\n";
            cout << busCapacity - busIn << " buses out of " << bikeCapacity << " are remaining.\n";

            cout << "\nTotal cars entered: " << totalCar << '\n';
            cout << "Total bikes entered: " << totalBike << '\n';
            cout << "Total buses entered: " << totalBus << '\n';
        }
        break;

        case 0:
        {
            cout << "Parking Lot Manager shutting down...\n";
        }
        break;

        default:
        {
            cout << "Invalid menu choice!\n";
        }

        }

    }while (choice != 0);
  

    return 0;
}