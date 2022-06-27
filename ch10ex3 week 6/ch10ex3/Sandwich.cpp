#include "Sandwich.h"
#include <iostream>
Sandwich::Sandwich()
{
	breadType = " ";
	meatType = " ";
	cheeseType = " ";
	veg = " ";
	sause = " ";
	cost = 0.0;
	breadCost = 0.0;
	meatCost = 0.0;
	cheeseCost = 0.0;
}

Sandwich::Sandwich(string BreadType, string MeatType, string CheeseType, string Veg, string Sause, 
	double Cost, double BreadCost, double MeatCost, double CheeseCost)
{
	breadType = BreadType;
	meatType = MeatType;
	cheeseType = CheeseType;
	veg = Veg;
	sause = Sause;
	cost = Cost;
	breadCost = BreadCost;
	meatCost = MeatCost;
	cheeseCost = CheeseCost;
}

Sandwich::~Sandwich()
{

}

void Sandwich::SetBreadType(string BreadType)
{
	breadType = BreadType;
}
string Sandwich::getBreadType()
{
	return breadType;
}

void Sandwich::SetBreadCost(double BreadCost)
{
	breadCost = BreadCost;
}
double Sandwich::getBreadCost()
{
	return breadCost;
}

void Sandwich::SetMeatType(string MeatType)
{
	meatType = MeatType;
}
string Sandwich::getMeatType()
{
	return meatType;
}

void Sandwich::SetMeatCost(double MeatCost)
{
	meatCost = MeatCost;
}
double Sandwich::getMeatCost()
{
	return meatCost;
}

void Sandwich::SetCheeseType(string CheeseType)
{
	cheeseType = CheeseType;
}
string Sandwich::getCheeseType()
{
	return cheeseType;
}

void Sandwich::SetCheeseCost(double CheeseCost)
{
	cheeseCost = CheeseCost;
}
double Sandwich::getCheeseCost()
{
	return cheeseCost;
}

void Sandwich::SetVeg(string Veg)
{
	veg = Veg;
}
string Sandwich::getVeg()
{
	return veg;
}

void Sandwich::SetSause(string Sause)
{
	sause = Sause;
}
string Sandwich::getSause()
{
	return sause;
}

void Sandwich::SetCost(double Cost)
{
	cost = Cost;
}
int Sandwich::getCost()
{
	return cost;
}

string Sandwich::to_string() 
{
	return "Bread: " + breadType + "\nMeat: " + meatType + "\nCheese " + cheeseType + "\nVegetable: " + veg + "\nCondiment: " + sause;
}