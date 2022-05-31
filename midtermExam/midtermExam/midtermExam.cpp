// midtermExam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "MapCoordinate.h"
#define MAP 3
using namespace std;
double numArray[15] = { 4.5, 6.7, 2.3, 9.7, 1.3, 4.9, 2, 11.5, 13.9, 10.2, 19.6, 3.5, 1.1, 0.9, 12.3 };
void calcAverage(double& avg);
MapCoordinate mapArray[MAP];

void fillArray()
{
    mapArray[0] = MapCoordinate("North America", 2.2, 4.5);
    mapArray[1] = MapCoordinate("South America", 5.5, 7.1);
    mapArray[2] = MapCoordinate("Europe", 6.23, 5.79);
}

int main()
{
    int index = 0;
    double difference = 0.0;
    double average = 0.0;
    calcAverage(average);
    cout << average << " average of the array.\n" << endl;
    while (index <= 14) {
        cout << numArray[index] << endl;
        index++;
    }
    
    for (int i = 0; i < 16; i++) {
        cout << "Difference of " << numArray[i] << endl;
        cout << difference << endl;
        difference = average - numArray[i];
    }
    
    fillArray();

    /*ifstream fin;
    fin.open("randomNums.txt");
    if (fin.fail()) {
        cout << "randomNums.txt did not open" << endl;
        exit(-1);
    }
    while (!fin.eof())
    {
        cout << numbers[index] <<endl;
        index++;
    }
    */
}
void calcAverage(double& avg) 
{
    double total = 0.0;
    for (int x = 0; x < 15; x++)
    {
        total += numArray[x];
    }
    avg = total / 15;
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
