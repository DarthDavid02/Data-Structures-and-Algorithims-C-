// ch2ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    double score1, score2, score3, score4, score5;

    cout << "Please enter the test score 1: ";
    cin >> score1;
    cout << endl;

    cout << "Please enter the test score 2: ";
    cin >> score2;
    cout << endl;

    cout << "Please enter the test score 3: ";
    cin >> score3;
    cout << endl;

    cout << "Please enter the test score 4: ";
    cin >> score4;
    cout << endl;

    cout << "Please enter the test score 5: ";
    cin >> score5;
    cout << endl;

    double averageScore = (score1 + score2 + score3 + score4 + score5) / 5;

    cout << "The average test score equals " << averageScore << endl;
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
