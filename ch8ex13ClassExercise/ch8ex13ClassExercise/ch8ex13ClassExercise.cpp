// ch8ex13ClassExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

#define STUDS 10
#define GRADES 5

string students[STUDS];
int grades[STUDS][GRADES];
double averages[STUDS];

int fillArrays()
{
    int row = 0;
    int aGrade;
    string aStud;
    ifstream fin;
    
    fin.open("ch8num13.txt");
    if (fin.fail())
    {
        cout << "Could not open the file\n";
        return -1;
    }

    while (!fin.eof() && row < STUDS)
    {
        fin >> aStud;
        students[row] = aStud;
        for (int g = 0; g < GRADES; g++)
        {
            fin >> aGrade; //should error check this
            //cout << row << " row " << g << " g " << aGrade << endl;
            grades[row][g] = aGrade;
        }
        row++;
    }

    return row;
}

double calcAverage()
{
    double classAverage = 0;
    double rowAvg = 0;
    int rowTotal = 0;
    int classTotal = 0;

    for (int row = 0; row < STUDS; row++)
    {
        for (int col = 0; col < GRADES; col++)
        {
            rowTotal += grades[row][col];
        }//end of col
        rowAvg = rowTotal / GRADES;
        averages[row] = rowAvg;
        classTotal += rowTotal;
        rowTotal = 0;//reset rowTotal
    }//end of row

    classAverage = (float) classTotal / (GRADES * STUDS);
    return classAverage;
}

void reportCard()
{
    for (int s = 0; s < STUDS; s++)
    {
        cout << setw(14) << left << students[s] << averages[s] << endl;
    }
}

int main()
{
    int rowsRead = 0;

    rowsRead = fillArrays();
    if (rowsRead <= 0) 
    {
        cout << "Problem with file, quitting\n";
        return -1;
    }

    cout << rowsRead << " rows read from file\n";

    cout << "Class Average " << calcAverage() << endl;

    reportCard();

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
