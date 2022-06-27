// StackProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stack>
#include <algorithm>
#include <forward_list>
//#include <bits/stdc++.h>
using namespace std;

void fillListFile(forward_list<string>& theList, string fileName)
{
    string word;
    int count = 0;
    ifstream fin;
    fin.open(fileName);
    if (fin.fail())
    {
        cout << fileName << " did not open.";
        exit(-1);
    }

    while (!fin.eof())
    {
        fin >> word;
        theList.push_front(word);//add to the list
        count++;
    }

    cout << count << " words read from " << fileName << " in reverse order.\n" << endl;

    fin.close();
}

void showTheList(forward_list<string> theList, int numDisplay = 150)
{
    forward_list<string>::iterator word;
    int count = 1;
    for (word = theList.begin(); word != theList.end() && count <= numDisplay; word++)
    {
        cout << *word << " ";
        if (count % 5 == 0)
        {
            cout << endl;
        }
        count++;
    }
}

int main()
{
    forward_list<string> frost;
    fillListFile(frost, "Frost.txt");

    showTheList(frost);
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
