// ch7ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    cout << "Enter side one measurement ";
    cin >> side1;
    cout << "Enter side two measurement ";
    cin >> side2;
    cout << "Enter side three measurement ";
    cin >> side3;

    if (side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1)
    {
        if (side1 == side2 && side2 == side3)
        {
            cout << "equalateral triangle" << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout << "Isosceles triangle" << endl;
        }
        else
        {
            cout << "Scalene triangle" << endl;
        }
    }
    else
    {
        cout << "No triangle";
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
