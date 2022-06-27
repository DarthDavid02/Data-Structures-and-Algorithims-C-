// STLStack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <forward_list>
#include <iomanip>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

bool balance(string exp)
{
    stack<char> parens;
    for (char ch : exp) 
    {
        if (ch == '(')
        {
            parens.push(ch);// add to stack
        }

        if (ch == ')')
        {
            if (parens.empty())
            {
                return false;
            }

            char top = parens.top();//get element from top of stack
            parens.pop();// remove element from stack

            if (top == '(' && ch != ')')
            {
                return false;
            }
        }//pop if
    }//for loop

    return parens.empty();
}

int main()
{
    string exp = "(23 - (4 * 5))";
    if (balance(exp))
    {
        cout << exp << " is balanced\n";
    }
    else
    {
        cout << exp << " is Not balanced\n";
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
