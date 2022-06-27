#include "FoodItem.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
FoodItem::FoodItem()
{
    name = "no name";
    calories = 0;
    cost = 0;
}

FoodItem::FoodItem(string Name, int Calories, double Cost) {
    name = Name;
    calories = Calories;
    this->cost = Cost;
}

FoodItem::~FoodItem()
{

}

//setters and getters

void FoodItem::setName(string Name) {
    this->name = Name;
}
string FoodItem::getName() {
    return name;
}
void FoodItem::setCalories(int Calories) {
    calories = Calories;
}
int FoodItem::getCalories() {
    return calories;
}
void FoodItem::setCost(double Cost) {
    cost = Cost;
}
double FoodItem::getCost() {
    return cost;
}

string FoodItem::to_string() {
    return name + " calories " + std::to_string(calories)
        + " costs " + std::to_string(cost);
}

double FoodItem::perCalorieCost() {
    return cost / calories;
}

ostream& operator<<(ostream& out, const FoodItem& item)
{
    out << item.name << " costs " << fixed << setprecision(2) << item.cost;
    return out;
}

istream& operator>>(istream& in, FoodItem& item)
{
    cout << "Enter the food name ";
    in >> item.name;

    cout << "Enter " << item.name << " cost ";
    in >> item.cost;

    cout << "Enter " << item.name << " calories ";
    in >> item.calories;
    return in;
}

bool operator<(const FoodItem& lhs, const FoodItem& rhs)
{
    return lhs.calories < rhs.calories;
}

bool operator>(const FoodItem& lhs, const FoodItem& rhs)
{
    return lhs.calories > rhs.calories;
}

FoodItem FoodItem::operator+(FoodItem& rhs)
{
    FoodItem sum;

    sum.name = this->name + " and " + rhs.name;
    sum.calories = this->calories + rhs.calories;
    sum.cost = this->cost + rhs.cost;

    return sum;
}