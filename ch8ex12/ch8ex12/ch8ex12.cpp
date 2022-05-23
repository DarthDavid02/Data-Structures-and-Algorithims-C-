// ch8ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
double average[5];
void getData(ifstream& inf, string n[], double runData[][8], int count);
void calculateAverage(double runData[][8], int count);
void print(string n[], double runData[][8], int count);

int main()
{
    string names[5];
    double runningData[5][8];
    ifstream inputfile("ch8ex12_Data.txt");
    if (inputfile) 
    {
        getData(inputfile, names, runningData, 5);
    }
    else
    {
        cout << "Unable to open file " << endl;
        return 0;
    }
    inputfile.close();
    calculateAverage(runningData, 5);
    print(names, runningData, 5);
    return 0;
}

void getData(ifstream& inf, string n[], double runData[][8], int count)
{
    while (!inf.eof())
    {
        for (int i = 0; i < count; i++)
        {
            inf >> n[i];
            for (int j = 0; j < 7; j++)
            {
                inf >> runData[i][j];
            }
        }
    }
}

void calculateAverage(double runData[][8], int count)
{
    double total;
    for (int i = 0; i < count; i++)
    {
        total = 0;
        for (int j = 0; j < 7; j++)
        {
            total += runData[i][j];
        }
        average[i] = total / 7;
    }
}

void print(string n[], double runData[][8], int count)
{
    cout << setfill('=') << setw(80) << "=";
    cout << setfill(' ');
    cout << endl;
    cout << "Name" << setw(6) << "";
    for (int i = 0; i < 7; i++) 
    {
        cout << setw(7) << "Day " << (i + 1);
    }
    cout << setw(12) << "Average" << endl;
    cout << setfill('=') << setw(80) << "=";
    cout << setfill(' ') << endl;
    for (int i = 0; i < count; i++)
    {
        cout << n[i] << setw(8) << fixed << "";
        for (int j = 0; j < 7; j++) 
        {
            cout << setprecision(2) << fixed << runData[i][j] << setw(3) << "";
        }
        cout << setw(8) << average[i];
        cout << endl;
    }
    cout << setfill('=') << setw(80) << "=";
    cout << endl;
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
