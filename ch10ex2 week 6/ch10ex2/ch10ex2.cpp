// ch10ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "medRec.h"
#include <cmath>
#include "CardiacPatient.h"
using namespace std;
void BloodPressure();
int main()
{
    medRec patient1("Steve", "Rogers", 72, 198);

    cout << patient1.to_string() << endl;
    
    double BMI = 703 * patient1.getWeight() / pow(patient1.getHeightInches(), 2);
        cout << "BMI: " << BMI << endl;
    
    //new code for week 6 Inheritance assignment
	BloodPressure();

    return 0;
}

void BloodPressure()
{
	CardiacPatient patient2(120, 80);

	int normalSystolic = 120;
	int elevatedSystolic = 129;
	int highSystolic1 = 139;
	int highSystolic2 = 180;
	int hypertensiveSystolic = 181;

	int normalDiastolic = 80;
	int highDiastolic1 = 89;
	int highDiastolic2 = 119;
	int hypertensiveDiastolic = 120;

	if (patient2.getSystolic() <= normalSystolic && patient2.getDiastolic() <= normalDiastolic)
	{
		cout << "Your blood pressure is normal." << endl;
	}
	else if (patient2.getSystolic() > normalSystolic && patient2.getSystolic() <= elevatedSystolic && patient2.getDiastolic() <= normalDiastolic)
	{
		cout << "Your blood pressure is elevated." << endl;
	}
	else if (patient2.getSystolic() >= elevatedSystolic && patient2.getSystolic() <= highSystolic1 && patient2.getDiastolic() > normalDiastolic && patient2.getDiastolic() <= highDiastolic1)
	{
		cout << "Your blood pressure is high at the first stage of high blood pressure and\n it is reccommended to start lowering your blood pressure." << endl;
	}
	else if (patient2.getSystolic() >= highSystolic1 && patient2.getSystolic() <= highSystolic2 && patient2.getDiastolic() > highDiastolic1 && patient2.getDiastolic() <= highDiastolic2)
	{
		cout << "Your blood pressure is getting really high at the second stage of high blood pressure and\n is strongly reccommended to seek medical attention." << endl;
	}
	else if (patient2.getSystolic() >= hypertensiveSystolic && patient2.getDiastolic() >= hypertensiveDiastolic)
	{
		cout << "Your blood pressure is at the highest stage of blood pressure and\n need to seek medical attention immediately!" << endl;
	}
	else
	{
		cout << "An error occured, please make sure the Systolic and Diastolic blood pressure levels are correct" << endl;
	}
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
