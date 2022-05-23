// ch3ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int square(int);
    double speedcarA;
    double speedcarB;
    double hour;
    double minutes;
    double shortDistance;
    double carADistance;
    double carBDistance;
    double time_taken;

    cout << "Please enter car A's speed: " << endl;
    cin >> speedcarA;
    cout << endl;

    cout << "Please enter car B's speed: " << endl;
    cin >> speedcarB;
    cout << endl;

    cout << "Please enter time in hh mm: " << endl;
    cin >> hour >> minutes;
    cout << endl;

    time_taken = hour + (minutes / 60);

    carADistance = speedcarA * time_taken;
    carBDistance = speedcarB * time_taken;

    shortDistance = sqrt((carADistance * carADistance) + (carBDistance * carBDistance));

    cout << "The shortest distance would be: " << shortDistance << " " << "miles" << endl;

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
