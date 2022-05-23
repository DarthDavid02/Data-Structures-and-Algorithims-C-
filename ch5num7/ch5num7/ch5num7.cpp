// ch5num7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int number = 8784204;
    int digit = 0;
    int total = 0;
    int count = 0;

    cout << "Number is: " << number << endl;

    while (number > 0)
    {
        digit = number % 10;//Gets the right most digit
        number = number / 10;
        cout << digit << endl;

        if (count % 2 == 0)
        {
            //even, add to total
            total += digit;
        }
        else
        {
            total -= digit;
        }
        count++;
    }//end of while loop

    cout << "Total " << total << endl;

    if (total % 11 == 0)
    {
        cout << "Divisible by 11" << endl;
    }
    else
    {
        cout << "Not divisible by 11" << endl;
    }
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
