// ch3ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	double salary1, updatedSalary1, percentage1, payIncrease1;
	double salary2, updatedSalary2, percentage2, payIncrease2;
	double salary3, updatedSalary3, percentage3, payIncrease3;

	string firstName1;
	string lastName1;
	string firstName2;
	string lastName2;
	string firstName3;
	string lastName3;

	inFile.open("Ch3_Ex5Data.txt");
	outFile.open("Ch3_Ex5Output.txt");

	outFile << fixed << showpoint;
	outFile << setprecision(2);

	cout << "Processing data" << endl;

	inFile >> lastName1 >> firstName1 >> salary1 >> percentage1;
	payIncrease1 = salary1 * percentage1;
	updatedSalary1 = salary1 + payIncrease1;
	outFile << firstName1 << " " << lastName1 << " " << updatedSalary1 << endl;

	inFile >> lastName2 >> firstName2 >> salary2 >> percentage2;
	payIncrease2 = salary2 * percentage2;
	updatedSalary2 = salary2 + payIncrease2;
	outFile << firstName2 << " " << lastName2 << " " << updatedSalary2 << endl;

	inFile >> lastName3 >> firstName3 >> salary3 >> percentage3;
	payIncrease3 = salary3 * percentage3;
	updatedSalary3 = salary3 + payIncrease3;
	outFile << firstName3 << " " << lastName3 << " " << updatedSalary3 << endl;

	inFile.close();
	outFile.close();

	cout << "Data Successfully transferred";

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
