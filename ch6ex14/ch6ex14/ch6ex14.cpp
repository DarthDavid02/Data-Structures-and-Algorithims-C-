// ch6ex14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double calcBill(double rate, int time, double income)
{
    double bill;

    if (income <= 25000)
    {
        if (time <= 30)
        {
            bill = 0;
        }
        else
        {
            bill = (40.0 / 100) * rate * ((time - 30)/60.0);
        }
    }
    else
    {
        if (time <= 20)
        {
            bill = 0;
        }
        else
        {
            bill = (70.0 / 100) * rate * ((time - 20) / 60.0);
        }
    }
    return bill;
}
int main()
{
    double hourly_rate, income, bill_amount;
    int consulting_time;

    cout << "Enter hourly rate: ";
    cin >> hourly_rate;

    cout << "Enter total consulting time: ";
    cin >> consulting_time;

    cout << "Enter your income: $";
    cin >> income;

    bill_amount = calcBill(hourly_rate, consulting_time, income);

    cout << "\nBill amount is $" << bill_amount << endl;
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
