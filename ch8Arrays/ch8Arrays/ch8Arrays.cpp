// ch8Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#define SIZE 1000
//#define argh cout
using namespace std;

//datatype variable[size];
int numbers[SIZE];


void fillArrayFile(string path);
void calcAverage(int& avg);
double calcStd(int avg);

int main()
{
    fillArrayFile("normalnumbers.txt");
    int average = 0;
    calcAverage(average);
    cout << average << " average of array\n";

    double std = 0;
    std = calcStd(average);
    cout << std << " standard deviation\n";
    return 0;
    
}

void fillArrayFile(string path)
{
    int index = 0;
    ifstream fin;
    fin.open(path);
    if (fin.fail())
    {
        cout << path << " did not open - quitting\n";
        exit(-1); //die out of C++
    }

    while (!fin.eof())
    {
        //cout << index << endl;

        fin >> numbers[index];
        cout << numbers[index] << endl;
        index++;
    }
    cout << "Read " << index << " numbers from " << path << endl;
    fin.close();
}

void calcAverage(int& avg)
{
    int total = 0;
    for (int x = 0; x < SIZE; x++)
    {
        total += numbers[x];
    }
    avg = total / SIZE;
}
double calcStd(int avg)
{
    double std = 0;
    double total = 0;

    for (int x = 0; x < SIZE; x++) {
        total += pow(numbers[x] - avg, 2);
    }//end of sigma loop
    std = sqrt(total / SIZE);
    return std;
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
