// ch5ex33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int a, b, t, dishes, prepare_time;

    cout << "Please enter time taken to prepare first dish: ";
    cin >> a;

    cout << "Please enter time taken longer than the previous dish: ";
    cin >> b;

    cout << "Please enter time taken to prepare all dishes: ";
    cin >> t;

    prepare_time = a;
    dishes = 0;

    while (prepare_time <= t)
    {
        dishes++;
        a = a + b;
        prepare_time = prepare_time + a;
    }
    cout << "\nNumber of dishes prepared is " << dishes << endl;
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
