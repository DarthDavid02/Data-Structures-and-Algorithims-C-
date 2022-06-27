// ch10ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Sandwich.h"

using namespace std;

int main()
{
    string bread, meat, cheese, vegetable, condiment;
    double breadCost, meatCost, cheeseCost = 0;

    cout << "Choose a bread type for the sandwich: White, Wheat, or Other >> ";
    cin >> bread;

    cout << "Choose a meat type for the sandwich: Ham, Turkey, or Other >> ";
    cin >> meat;

    cout << "Choose a cheese type for the sandwich: American, Provolone, Other >> ";
    cin >> cheese;

    cout << "What vegetable do you want on your sandwich? ";
    cin >> vegetable;

    cout << "What condiment do you want on your sandwich? ";
    cin >> condiment;

    Sandwich item;
    item.SetBreadType(bread);
    item.SetMeatType(meat);
    item.SetCheeseType(cheese);
    item.SetVeg(vegetable);
    item.SetSause(condiment);

    if (item.getBreadType() == "White")
    {
        breadCost = 2.00;
    }
    else if(item.getBreadType() == "Wheat")
    {
        breadCost = 2.25;
    }
    else
    {
        breadCost = 2.50;
    }

    if (item.getMeatType() == "Ham")
    {
        meatCost = 3.00;
    }
    else if (item.getMeatType() == "Turkey")
    {
        meatCost = 3.25;
    }
    else
    {
        meatCost = 3.50;
    }

    if (item.getCheeseType() == "American")
    {
        cheeseCost = 2.75;
    }
    else if (item.getCheeseType() == "Provolone")
    {
        cheeseCost = 3.00;
    }
    else
    {
        cheeseCost = 3.25;
    }

    cout << item.to_string() << endl;

    double cost = breadCost + meatCost + cheeseCost;
    cout << "The sandwich made costs: $" << cost << "." << endl;
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
