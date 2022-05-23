// ch7ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool isVowel(char c)
{
    if (toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I' || toupper(c) == 'O' || toupper(c) == 'U')
    {
        return true;
    }
    return false;
}

string removeVowel(string st)
{
    string newWord = "";
    for (int i = 0; i < st.length(); i++)
    {
        if (isVowel(st[i]))
        {
            continue;
        }
        else
        {
            newWord += st[i];
        }
    }
    return newWord;
}

int main()
{
    string s;
    cout << "Enter a word: ";
    cin >> s;
    cout << "New Word: " << removeVowel(s) << endl;
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
