#include "FoodItem.h"
FoodItem::FoodItem()
{
	name = "No name";
	calories = 0;
	cost = 0;
}

FoodItem::FoodItem(string Name, int Calories, double Cost)
{
	name = Name;
	calories = Calories;
	cost = Cost;
}

FoodItem::~FoodItem()
{

}

void FoodItem::SetName(string Name)
{
	name = Name;
}
string FoodItem::getName() 
{
	return name;
}

void FoodItem::SetCalories(int Calories)
{
	calories = Calories;
}
int FoodItem::getCalories()
{
	return calories;
}

void FoodItem::SetCost(double Cost)
{
	cost = Cost;
}
double FoodItem::getCost()
{
	return cost;
}

string FoodItem::to_string() 
{
	return name + " calories " + std::to_string(calories) + 
		" costs " + std::to_string(cost);
}

double FoodItem::perCalorieCost()
{
	return cost / calories;
}
//:: is the scope resolution operator
