// StringManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <string.h> // need for strcpy and other functions
#include <algorithm>

using namespace std;

int main()
{
    /*
    old school C++ strings are arrays of char
    char name[] = "david";
    char *fname = new char[11]; 
    */

    char name[] = "David";

    //strcpy_s(name, 4, "Rain");

    cout << "Hi " << name << endl;

    // new school string
    string word = "hi";
    if (word == "hi")
    {
        cout << "Hi back\n";
    }
    string sentence = "Four score and seven years ago";
    int pos = 0;
    pos = sentence.find("and");
    cout << "and is a position " << pos;

    // replace e with 3
    // keep replacing until out of e
    // while loop
    /*while ((pos = sentence.find("e")) != string::npos)
    {
        sentence.replace(pos, 1, "3");
    }
    */

    replace(sentence.begin(), sentence.end(), 'e', '3');
    cout << sentence << endl;

    //tokenize the string
    char* theString = new char[sentence.length() + 1];
    strcpy_s(theString, sentence.length() + 1, sentence.c_str());

    char* token;
    char* nextToken;
    token = strtok_s(theString, " ", &nextToken);
    //find the first token - up to the next token
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok_s(NULL, " ", &nextToken);
    }


    return 0;
}
// STL - Standard Template Library

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
