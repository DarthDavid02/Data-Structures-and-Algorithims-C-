#include "CardiacPatient.h"
#include <string>
#include <iostream>
using namespace std;
CardiacPatient::CardiacPatient()
{
	systolic = 0;
	diastolic = 0;
}
CardiacPatient::CardiacPatient(int Systolic, int Diastolic)
{
	systolic = Systolic;
	diastolic = Diastolic;
}

void CardiacPatient::SetSystolic(int Systolic)
{
	systolic = Systolic;
}
int CardiacPatient::getSystolic()
{
	return systolic;
}

void CardiacPatient::SetDiaStolic(int Diastolic)
{
	diastolic = Diastolic;
}
int CardiacPatient::getDiastolic()
{
	return diastolic;
}

/*void CardiacPatient::BloodPressure()
{
	int normalSystolic =  120;
	int elevatedSystolic = 129;
	int highSystolic1 = 139;
	int highSystolic2 = 180;
	int hypertensiveSystolic = 181;

	int normalDiastolic = 80;
	int highDiastolic1 = 89;
	int highDiastolic2 = 119;
	int hypertensiveDiastolic = 120;

	if (getSystolic() < normalSystolic && getDiastolic() < normalDiastolic)
	{
		cout << "Your blood pressure is normal." << endl;
	}
	else if (getSystolic() > normalSystolic || getSystolic() <= elevatedSystolic && getDiastolic() < normalDiastolic)
	{
		cout << "Your blood pressure is elevated." << endl;
	}
	else if (getSystolic() > elevatedSystolic || getSystolic() <= highSystolic1 && getDiastolic() > normalDiastolic || getDiastolic() <= highDiastolic1)
	{
		cout << "Your blood pressure is high at the first stage of high blood pressure and it is reccommended to start lowering your blood pressure." << endl;
	}
	else if (getSystolic() > highSystolic1 || getSystolic() <= highSystolic2 && getDiastolic() > highDiastolic1 || getDiastolic() <= highDiastolic2)
	{
		cout << "Your blood pressure is getting really high at the second stage of high blood pressure and is strongly reccommended to seek medical attention." << endl;
	}
	else if (getSystolic() > hypertensiveSystolic && getDiastolic() > hypertensiveDiastolic)
	{
		cout << "Your blood pressure is at the highest stage of blood pressure and need to seek medical attention immediately!" << endl;
	}
	
}*/