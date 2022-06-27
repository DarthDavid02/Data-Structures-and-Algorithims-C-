// ch10ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "CarInfo.h"
#include "Hybrid.h"

using namespace std;
int main()
{
    CarInfo car("Chevrolet", "Camaro", 2018, 24479, 19, 21);

    cout << car.to_string() << endl;

    double totalCost = 3.09 / (car.getMPG() * car.getGallons());

    cout << "Cost per mile: " << totalCost << endl;

    double distance = car.getMPG() * car.getGallons();

    cout << "Distance: " << distance << endl;

    /*
    double costPerMile();

    cout << costPerMile() << endl;

    double distance();

    cout << distance() << endl;
    */

    //new code for week 6 Inheritance assignment
    Hybrid truck("AAA", "24", 25);
    Hybrid battery;

    cout << "\nYour battery is at " << truck.getBatteryChargePercentage() << "%." << endl;

    if (truck.getBatteryChargePercentage() <= 99)
    {
        cout << battery.BatteryCharger("The battery is charging") << endl;
    }
    else
    {
        cout << "The battery is at 100% and no longer needs to be charged" << endl;
    }

    cout << "The range of the hybrid is " << truck.RangeOfHybrid(truck.getBatteryChargePercentage()) << " miles" << endl;

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
