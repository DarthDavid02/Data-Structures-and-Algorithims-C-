#ifndef CARINFO_H
#define CARINFO_H
#pragma once
#include <string>
using namespace std;

class CarInfo
{
public:
	CarInfo();
	CarInfo(string Make, string Model, int Year, int Miles, int Gallons, int MPG);
	~CarInfo();

	void SetMake(string Make);
	string getMake();

	void SetModel(string Model);
	string getModel();

	void SetYear(int Year);
	int getYear();

	void SetMiles(int Miles);
	int getMiles();

	void SetGallons(int Gallons);
	int getGallons();

	void SetMPG(int MPG);
	int getMPG();

	string to_string();

	double costPerMile();

	double distance();

private:
	string make;
	string model;
	int year, miles, gallons, mpg;
protected:

};

#endif