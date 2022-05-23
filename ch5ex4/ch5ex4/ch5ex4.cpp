// ch5ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter a contact name: ";
    string number;
    cin >> number;
    cout << "Translated phone number is: ";
    char ch;

    for (int i = 0; i < number.length(); ++i)
    {
        ch = number[i];
        if (ch == 'A' || ch == 'B' || ch == 'C')
        {
            cout << '2';
        }
        else if (ch == 'D' || ch == 'E' || ch == 'F') 
        {
            cout << '3';
        }
        else if (ch == 'G' || ch == 'H' || ch == 'I')
        {
            cout << '4';
        }
        else if (ch == 'J' || ch == 'K' || ch == 'L')
        {
            cout << '5';
        }
        else if (ch == 'M' || ch == 'N' || ch == 'O')
        {
            cout << '6';
        }
        else if (ch == 'P' || ch == 'Q' || ch == 'R')
        {
            cout << '7';
        }
        else if (ch == 'S' || ch == 'T' || ch == 'U' || ch == 'V')
        {
            cout << '8';
        }
        else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z')
        {
            cout << '9';
        }
        else
        {
            cout << ch;
        }
    }
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
