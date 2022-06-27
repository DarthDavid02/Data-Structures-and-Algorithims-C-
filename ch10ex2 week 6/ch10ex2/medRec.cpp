#include "medRec.h"
#include <cmath>
medRec::medRec()
{
	fName = " ";
	lName = " ";
	heightInches = 0;
	weight = 0;
}
medRec::medRec(string FName, string LName, int HeightInches, int Weight)
{
	fName = FName;
	lName = LName;
	heightInches = HeightInches;
	weight = Weight;
}

medRec::~medRec()
{

}

void medRec::SetFName(string FName)
{
	fName = FName;
}
string medRec::getFName()
{
	return fName;
}

void medRec::SetLName(string LName)
{
	lName = LName;
}
string medRec::getLName()
{
	return lName;
}

void medRec::SetHeightInches(int HeightInches)
{
	heightInches = HeightInches;
}
int medRec::getHeightInches()
{
	return heightInches;
}

void medRec::SetWeight(int Weight)
{
	weight = Weight;
}
int medRec::getWeight()
{
	return weight;
}

double medRec::totalBMI()
{
	double BMI = 703 * getWeight() / pow(getHeightInches(), 2);
	return BMI;
}

string medRec::to_string()
{
	return fName + " " + lName + "\nHeight in inches: " + std::to_string(heightInches) + "\nWeight: " + std::to_string(weight);
}