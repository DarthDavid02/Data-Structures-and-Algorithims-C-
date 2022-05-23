// ch4ex20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float discountTen = 0.10;
float discountTwenty = 0.20;
float discountThirty = 0.30;
float additionalDiscount = 0.05;
float salesTax = 0.10;

int main()
{
    cout << "Number of rooms booked: ";
    int rooms;
    cin >> rooms;

    cout << "Number of days booked: ";
    int days;
    cin >> days;

    if (rooms < 10)
    {
        if (days < 3)
        {
            cout << "Rent is " << rooms * 100 << "\n";
            cout << "Discount is " << rooms * 100 * discountTen << "\n";
            cout << "Payable amount is " << rooms * 100 - rooms * 100 << "\n";
            cout << "Sales Tax is " << (rooms * 100 - rooms * 100) * salesTax << "\n";
        }
        else
        {
            cout << "Payable amount is " << rooms * 100 - rooms * 100 * additionalDiscount << "\n";
            cout << "Sales Tax is " << rooms * 100 - (rooms * 100 * additionalDiscount) * salesTax << "\n";
        }
    }

    if (rooms >= 10 && rooms < 20)
    {
        if (days < 3)
        {
            cout << "Rent is " << rooms * 100 << "\n";
            cout << "Discount is " << rooms * 100 * discountTen << "\n";
            cout << "Payable amount is " << rooms * 100 - rooms * 100 * discountTen << "\n";
            cout << "Sales Tax is " << (rooms * 100 - rooms * 100 * discountTen) * salesTax << "\n";
        }
    }

    if (rooms >= 20 && rooms < 30)
    {
        if (days < 3)
        {
            cout << "Rent is " << rooms * 100 << "\n";
            cout << "Discount is " << rooms * 100 * discountTwenty << "\n";
            cout << "Payable amount is " << rooms * 100 - rooms * 100 * discountTwenty << "\n";
            cout << "Sales Tax is " << (rooms * 100 - rooms * 100 * discountTwenty) * salesTax << "\n";
        }
        else 
        {
            cout << "Rent is" << rooms * 100 << "\n";
            cout << "Discount is " << rooms * 100 * discountTwenty * additionalDiscount << "\n";
            cout << "Payable amount is " << rooms * 100 - rooms * 100 * discountTwenty * additionalDiscount << "\n";
            cout << "Sales Tax is " << (rooms * 100 - rooms * 100 * discountTwenty * additionalDiscount) * salesTax << "\n";
        }
    }

    if (rooms >= 30)
    {
        if (days < 3)
        {
            cout << "Rent is " << rooms * 100 << "\n";
            cout << "Discount is " << rooms * 100 * discountThirty << "\n";
            cout << "Payable amount is " << rooms * 100 - rooms * 100 * discountThirty << "\n";
            cout << "Sales Tax is " << (rooms * 100 - rooms * 100 * discountThirty) * salesTax << "\n";
        }
        else
        {
            cout << "Rent is " << rooms * 100 << "\n";
            cout << "Discount is " << rooms * 100 * discountThirty * additionalDiscount << "\n";
            cout << "Payable amount is " << rooms * 100 - rooms * 100 * discountThirty * additionalDiscount << "\n";
            cout << "Sales Tax is " << (rooms * 100 - rooms * 100 * discountThirty * additionalDiscount) * salesTax << "\n";
        }
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
