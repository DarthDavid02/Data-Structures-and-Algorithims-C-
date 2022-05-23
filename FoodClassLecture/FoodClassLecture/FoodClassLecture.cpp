// FoodClassLecture.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "FoodItem.h"
using namespace std;

int main()
{
    FoodItem cookies("Oreos", 100, 2.4);

    cout << cookies.to_string() << endl;

    FoodItem drink;
    drink.SetName("Mountain Dew");
    drink.SetCalories(200);
    drink.SetCost(1.75);

    cout << drink.to_string() << endl;

    double totalCost = drink.getCost() + cookies.getCost();

    cout << totalCost << endl;

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
