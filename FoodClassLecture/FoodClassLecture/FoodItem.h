#ifndef FOODITEM_H
#define FOODITEM_H
#pragma once
#include <string>
using namespace std;

class FoodItem
{
public:
	//methods
	FoodItem();//default constructor, no parameters
	FoodItem(string Name, int Calories, double Cost);//paramaterized constructor
	~FoodItem();//destructor

	void SetName(string Name);
	string getName();

	void SetCalories(int Calories);
	int getCalories();

	void SetCost(double Cost);
	double getCost();

	string to_string();

	//functionality
	double perCalorieCost();

private:
	//variables
	string name;//or std::string name;
	int calories;
	double cost;

protected:

};

#endif
