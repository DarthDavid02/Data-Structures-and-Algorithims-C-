// Encrypt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
/*
        open the file
        walk through the file (parse)
        encrypt the letters
        write the encryption out to a file
        close the files
    */
using namespace std;

int main()
{
    string line;
    string encrypt;
    ifstream fin;
    ofstream fout;
    int rotation = 5;

    //open the files
    fin.open("Frost.txt");
    if (fin.fail()) {
        cout << "Frost.txt not opened\n";
        return -1;
    }

    fout.open("Frost.enc");
    if (fout.fail()) {
        cout << "Frost.enc not opened";
        return -1;
    }
    //do something

    while (getline(fin, line)) {
        //keep looping as long as there are lines in the file
        //cout << line << endl;

        encrypt = "";//clear out the encryption
        for (int c = 0; c < line.length(); c++) {
            encrypt += line.at(c) + rotation;
        }
        fout << encrypt << endl;


    }
    fout.close();
    fin.close();
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
