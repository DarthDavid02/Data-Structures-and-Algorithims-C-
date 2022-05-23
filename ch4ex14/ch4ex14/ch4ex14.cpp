// ch4ex14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float hours;

    cout << "Please enter the number of hours a car parked at the airport: ";
    cin >> hours;

    if (hours >= 0 && hours <= 3) // if 0 <= h <= 3
    {
        cout << "Parking fee is: $5.";
    }
    else if(hours > 3 && hours <= 9) // if 3 < h <= 9
    {
        cout << "Parking fee is: $" << 6 * int(hours) << ".";
    }
    else // if 9 < h <= 24
    {
        cout << "Parking fee is: $60.";
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
