// ch2ex17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double totalMilk, cost, profit, totalCost, totalProfit, roundedProfit;

    cout << "Please enter the total amount of milk produced in the morning. ";
    cin >> totalMilk;
    cout << endl;

    double totalCartons = totalMilk / 3.78;
    cout << "The total number of milk cartons needed to hold " << totalMilk << " liters of milk is " << round(totalCartons);
    cout << endl;

    cout << "\nPlease input the cost of producing one liter of milk. ";
    cin >> cost;
    cout << endl;

    totalCost = totalMilk * cost;
    cout << "The total cost of producing " << totalMilk << " liters of milk is $" << totalCost << ".";
    cout << endl;

    cout << "\nPlease input the profit on each milk carton. ";
    cin >> profit;
    cout << endl;

    totalProfit = totalCartons * profit;
    roundedProfit = ceil(totalProfit * 100.0) / 100.0;
    cout << "The total profit is $" << roundedProfit << ".";
    cout << endl;

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
