// STL Queue Map Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#include <time.h>
#include <cmath>
#include <iterator>

using namespace std;

void queueLecture() 
{
    queue<string> directions;
    string aStep;
    int count = 1;

    directions.push("Heat up the oven");
    directions.push("Mix ingredients");
    directions.push("Pour into pan");
    directions.push("Bake until done");

    while (!directions.empty())//walk through entire queue
    {
        aStep = directions.front();
        directions.pop();
        cout << "Step: " << count << " " << aStep << endl;
        count++;
    }
    /*//remove first entry from queue
    aStep = directions.front();
    directions.pop();
    cout << "Step: " << count << " " << aStep << endl;
    */
}

void vectorLecture()
{
    //vector is unlimited size array
    //array will size itself as needed
    vector<int> numberVec;
    srand(time(NULL));
    double vectorSize = (int)(rand() % 5000) + 1000;
    cout << "Vector size is " << vectorSize << endl << endl;
    for (int x = 0; x < vectorSize; x++)
    {
        numberVec.push_back(rand() % 5000);
        //numberVec.
    }

    //walk through the vector
    //show first 10
    vector<int>::iterator itr;
    vector<int> counter;
    for (itr = numberVec.begin(); itr != numberVec.begin() + 10; itr++)
    {
        cout << *itr << endl;
        //counter[*itr] ++;
    }

}

void mapLecture() 
{
    //map are like a dictionary
    //key - value pair
    //key must be unique
    //key is a 0(1) search

        //key   value
    map<string, double> gradePoints;
    gradePoints["A+"] = 4.25;
    gradePoints["A"] = 4.0;
    gradePoints["A-"] = 3.75;

    cout << "A is worth: " << gradePoints["A"] << endl;
    cout << "A is worth: " << gradePoints["B"] << endl;//Not in map, it will spit out a 0(zero)
}
int main()
{
    //queueLecture();
    //vectorLecture();
    mapLecture();



    return 1;
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
