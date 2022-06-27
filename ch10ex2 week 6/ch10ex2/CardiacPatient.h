#pragma once
#include <string>
#include "medRec.h"
using namespace std;
class CardiacPatient : public medRec
{
public:
	CardiacPatient();
	CardiacPatient(int systolic, int diastolic);

	void SetSystolic(int Systolic);
	int getSystolic();

	void SetDiaStolic(int Diastolic);
	int getDiastolic();

	void BloodPressure();

private:

protected:
	int systolic, diastolic;
};

