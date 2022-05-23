// ch6ex21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

bool isLeapYear(int year);
bool isLeapYear(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0))
    {
        ((year % 100 == 0) && (year % 400 == 0));
        cout << year << " is a leap year.";
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int day, month, year, dayNumber;
    char ch;
    cout << "Enter a date (mm-dd-yyyy): ";
    cin >> month;
    cin >> ch;
    cin >> day;
    cin >> ch;
    cin >> year;
    dayNumber = 0;

    if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31))
    {
        while (month > 1 && month <= 12)
        {
            switch (month - 1)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    dayNumber += 31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    dayNumber += 30;
                    break;
                case 2:
                    dayNumber += 28;
                    if (isLeapYear(year))
                    {
                        dayNumber++;
                        break;
                    }
            }
            month--;
        }
    }
    else
    {
        cout << "Enter Correct Month or Day";
        return 0;
    }
    dayNumber += day;
    cout << "The day number is " << dayNumber;
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
