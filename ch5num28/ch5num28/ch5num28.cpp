// ch5num28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double profit = 30000, oldProfit = -1;
    double rent = 600;
    double units = 50;
    //as rent goes up by 40, units drop by 1

    while (profit > oldProfit)
    {
        //profit is current units and rent, old is the previous
        oldProfit = profit; //keep the current value, make it old
        rent += 39;
        units--;
        profit = units * rent;
    }//beyond equal part, need to undo the last math
    units++;
    rent -= 39;
    profit = units * rent;
    cout << "Units: " << units << endl;
    cout << "Rent: " << rent << endl;
    cout << "Profit: " << profit << endl;

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
