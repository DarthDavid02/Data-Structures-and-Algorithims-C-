#include "CarInfo.h"
CarInfo::CarInfo()
{
	make = " ";
	model = " ";
	year = 0;
	miles = 0;
	gallons = 0;
	mpg = 0;
}

CarInfo::CarInfo(string Make, string Model, int Year, int Miles, int Gallons, int MPG)
{
	make = Make;
	model = Model;
	year = Year;
	miles = Miles;
	gallons = Gallons;
	mpg = MPG;
}

CarInfo::~CarInfo()
{

}

void CarInfo::SetMake(string Make)
{
	make = Make;
}
string CarInfo::getMake()
{
	return make;
}

void CarInfo::SetModel(string Model)
{
	model = Model;
}
string CarInfo::getModel()
{
	return model;
}

void CarInfo::SetYear(int Year)
{
	year = Year;
}
int CarInfo::getYear()
{
	return year;
}

void CarInfo::SetMiles(int Miles)
{
	miles = Miles;
}

int CarInfo::getMiles()
{
	return miles;
}

void CarInfo::SetGallons(int Gallons)
{
	gallons = Gallons;
}
int CarInfo::getGallons()
{
	return gallons;
}

void CarInfo::SetMPG(int MPG)
{
	mpg = MPG;
}
int CarInfo::getMPG()
{
	return mpg;
}

string CarInfo::to_string()
{
	return std::to_string(year)+ " " + make + " " + model + "\n"
		+ "Miles: " + std::to_string(miles) + "\n" 
		+ "Gallons: " + std::to_string(gallons) + "\n"
		+ "Miles Per Gallon: " + std::to_string(mpg);
}

double CarInfo::costPerMile()
{
	return 3.09 / (mpg * gallons);
}

double CarInfo::distance()
{
	return mpg * gallons;
}