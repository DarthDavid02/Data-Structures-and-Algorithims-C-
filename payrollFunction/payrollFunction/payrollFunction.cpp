// payrollFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//declare the function here - prototype
//prototype is function header followed by:
void printMyName(); //prototype

int someFunction(int x); //prototype 2 with a variable

string buildALine(int size = 10);//prototype 3 with a default parameter

//int fun(int, double, string); old school prototype with a variable

double grossPay(double hours, double rate)
{
    double pay = hours * rate;

    return pay;
}

//enum is just a numbering system with custom names
//enumeration
enum year { Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12 };

int main()
{
    for (int y = Jan; y <= Dec; y++)
    {
        cout << y << endl;
    }


    //call the function - somewhere
    printMyName();

    cout << someFunction(5) << endl;
    cout << someFunction(10) << endl;
    int theAnswer = someFunction(100);
    int whoaNelly = someFunction(someFunction(someFunction(5)));
    cout << "Big Number: " << theAnswer << endl;

    cout << buildALine() << endl;
    cout << buildALine(20) << endl;
    return 0;
}

//function creation and body
void printMyName()
{
    cout << "David Ressler" << endl;
}

int someFunction(int x)
{
    int answer = x * x;
    return answer;
}
string buildALine(int size)
{
    string line;
    for (int x = 0; x < size; x++)
    {
        line += "-";
    }
    return line;
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
