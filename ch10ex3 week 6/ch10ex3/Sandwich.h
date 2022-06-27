#pragma once
#include <string>
using namespace std;

class Sandwich
{
public:
	Sandwich();
	Sandwich(string BreadType, string MeatType, string CheeseType, string Veg, string Sause, 
		double Cost, double BreadCost, double MeatCost, double CheeseCost);
	~Sandwich();

	void SetBreadType(string BreadType);
	string getBreadType();

	void SetBreadCost(double BreadCost);
	double getBreadCost();

	void SetMeatType(string MeatType);
	string getMeatType();

	void SetMeatCost(double MeatCost);
	double getMeatCost();

	void SetCheeseType(string CheeseType);
	string getCheeseType();

	void SetCheeseCost(double CheeseCost);
	double getCheeseCost();

	void SetVeg(string Veg);
	string getVeg();

	void SetSause(string Sause);
	string getSause();

	void SetCost(double Cost);
	int getCost();

	string to_string();

private:

protected:
	string breadType, meatType, cheeseType, veg, sause;
	double cost, breadCost, meatCost, cheeseCost;

};

