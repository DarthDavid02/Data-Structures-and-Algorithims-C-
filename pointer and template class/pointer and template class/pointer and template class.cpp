// pointer and template class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "TemplateClass.h"
using namespace std;

template <class someType>
someType bigger(someType a, someType b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template <class T1, class T2>
void addEm(T1 firstVar, T2 secondVar)
{
    cout << firstVar + secondVar << endl;
}

/*int bigger(int a, int b)
{
    //check to see if a is > b
    //return larger of the two
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double bigger(double a, double b)
{
    //check to see if a is > b
    //return larger of the two
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
*/
//DRY= don't repeat yourself

int main()
{
    //generic classes and functions
    //can use a varitey of datatypes, and specify them at RUNTIME
    string w1 = "Lee", w2 = "Hi";
    int a = 1, b = 15;
    double x = -3, y = -4;

        cout << bigger(w1, w2) << endl;
        cout << bigger(a, b) << endl;
        cout << bigger(x, y) << endl; 
        //cout << bigger(a, w2) << endl; //two different data types
        cout << "addem output\n";
        addEm(a, x);
        addEm(x, y);
        cout << "Template class output\n";

        GenClass<string> C1("Lee");
                //specify type
        GenClass<int> C2(42);

        //GenClass<FoodItem>

  /*  double payroll = 12345.67;
    double tax = payroll * .07;

    cout << "Payroll: " << payroll << endl;
    cout << "Tax: " << tax << endl;

    //pointers examples
    double *payrollPtr, *taxPtr; //hold memory address of a double

    payrollPtr = &payroll; // get the memory address of payroll
                            // & is the address of operator

    cout << "Payroll address is " << payrollPtr << endl;
    cout << "Value at payroll address is " << *payrollPtr << endl;

    //this->someVar;
    */

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
