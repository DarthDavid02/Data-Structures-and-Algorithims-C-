#include "Hoagie.h"
#include <iostream>
#include <string>
using namespace std;

Hoagie::Hoagie()
{
	lengthInFeet = 0;
	baked = "";
}
Hoagie::Hoagie(int LengthInFeet, string Baked)
{
	lengthInFeet = LengthInFeet;
	baked = Baked;
}

void Hoagie::SetLengthInFeet(int LengthInFeet)
{
	lengthInFeet = LengthInFeet;
}
int Hoagie::getLengthInFeet()
{
	return lengthInFeet;
}

void Hoagie::SetBaked(string Baked)
{
	baked = Baked;
}
string Hoagie::getBaked()
{
	return baked;
}

/*void Hoagie::totalCost()
{
	double bakedCost = 0;
	double cost = breadCost + meatCost + cheeseCost;
	double totalCost = cost * getLengthInFeet()* bakedCost;
	if (getBaked() == "Yes" || "yes" || "YES") 
	{
		double bakedCost = 0.75;
	}
	else
	{
		double bakedCost = 0;
	}
	cout << "The sandwich made costs: $" << totalCost << "." << endl;
}*/