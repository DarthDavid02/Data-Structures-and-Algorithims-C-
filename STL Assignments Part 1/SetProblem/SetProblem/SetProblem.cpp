//couldn't figure out how to set up a set for this problem
// used a vector and got it to lable each line 
// I tried to figureout a way to use set, but it was confusing for this assingment
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <vector>
#include "book.h"

using namespace std;

int main()
{
    int row = 1;
    string filename("booklist.txt");
    vector<string> lines;
    string line;

    ifstream input_file(filename);
    if (!input_file.is_open()) 
    {
        cerr << "Could not open the file - '"
            << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    while (getline(input_file, line))
    {
        lines.push_back(line);
    }

    for (const auto& i : lines)
    {

        //Don't know how to repeat this without writing  row == a number every time or an easier way
        if (row == 1 || row == 5)
        {
            cout << "Rank: " << i << endl;
            row++;
        }
        else if (row == 2 || row == 6)
        {
            cout << "Author: " << i << endl;
            row++;
        }
        else if (row == 3 || row == 7)
        {
            cout << "Book Title: " << i << endl;
            row++;
        }
        else if (row == 4 || row == 8)
        {
            cout << "Year Published: " << i << endl;
            cout << "\n";
            row++;
        }
        else
            cout << i << endl;
    }
    input_file.close();
    return EXIT_SUCCESS;
}