// ch8ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

void displayDataResults(int count_numbers[])
{
    int n = 0;
    cout << "Ranges" << " Count" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << n << "-" << n + 24 << " : " << count_numbers[i] << endl;
        n = n + 25;
    }
}

void readDataFileStream(ifstream& fin, int count[])
{
    int a;
    while (fin >> a)
    {
        if (a >= 0 && a <= 24)
        {
            count[0]++;
        }
        if (a >= 25 && a <= 49)
        {
            count[1]++;
        }
        if (a >= 50 && a <= 74)
        {
            count[2]++;
        }
        if (a >= 75 && a <= 99)
        {
            count[3]++;
        }
        if (a >= 100 && a <= 124)
        {
            count[4]++;
        }
        if (a >= 125 && a <= 149)
        {
            count[5]++;
        }
        if (a >= 150 && a <= 174)
        {
            count[6]++;
        }
        if (a >= 175 && a <= 200)
        {
            count[7]++;
        }
    }
}

int main()
{
    int count_ranges[8];
    for (int i = 0; i < 8; i++)
    {
        count_ranges[i] = 0;
    }
    ifstream fin("ch8ex4_Data.txt");
    if (!fin) 
    {
        cout << "Error opening file\n";
        return 0;
    }
    readDataFileStream(fin, count_ranges);
    fin.close();
    displayDataResults(count_ranges);
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
