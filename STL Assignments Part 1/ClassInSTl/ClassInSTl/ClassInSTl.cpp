// ClassInSTl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <istream>
#include "FoodItem.h"
#include <iomanip>
#include <string>
#include <array>
#include <forward_list>
#include <algorithm>
#include <iterator>
using namespace std;
void menu();
void showList(forward_list<FoodItem> theList);
void addItem();
//void searchItem();
void deleteItem();
int answer;

//declaring forward list named list1, hard coding the list
forward_list<FoodItem> list1 =
{ FoodItem("Cookies", 100, 3),
   FoodItem("Pizza", 300, 2),
   FoodItem("Apple", 5, 4),
   FoodItem("Fruit Salad", 250, 5),
   FoodItem("Honey BBQ Wings", 450, 8)
};

int main()
{
    menu();

}

void menu()
{
    do 
    {
        forward_list<FoodItem> list;
        cout << "Enter 0 if you want to see the list.\nEnter 1 to add an Item to the list.\nEnter 2 to search for an item.\n" <<
            "Enter 3 to delete an item\nEnter 999 to quit\n";
        cin >> answer;

        showList(list);
        addItem();
        //searchItem();
        deleteItem();
    } while (answer != 999);
}

void showList(forward_list<FoodItem> theList)
{
    if (answer == 0)
    {
        for (FoodItem item : list1)
            cout << item << " " << "\n";
    }
}

void addItem()
{
    string food;
    int calories;
    double cost;
    if (answer == 1)
    {
        cout << "What is the food item you want to enter?" << endl;
        cin >> food;
        cout << "What is the amount of calories " << food << " has?" << endl;
        cin >> calories;
        cout << "What is the cost of the " << food << "?" << endl;
        cin >> cost;
        list1.push_front(FoodItem(food, calories, cost));
        cout << "Your food item has been added to the list.\n" << endl;

    }
}

/*void searchItem()
{
    //Getting a C2679 error: binary '==': no operator found which takes a right-hand operand of type 'const_Ty' (or there is no acceptable conversion)
    // Don't understand how to fix this error
    if (answer == 2)
    {
        string itemNeedingSearched;
        string info = itemNeedingSearched;
        cout << "Enter the food item you want to find." << endl;
        cin >> itemNeedingSearched;
        forward_list<FoodItem>::iterator Itr;
        Itr = find(begin(list1), end(list1), info);
            if (find(begin(list1), end(list1), info) != end(list1))
            {
                cout << itemNeedingSearched << " exists in the list." << endl;
            }       
            else
            {
                cout << itemNeedingSearched << " does NOT exist in the list." << endl;
            }
    }
}*/

void deleteItem()
{
    if (answer == 3)
    {
        string itemName;
        int itemCalories;
        double itemCost;
        cout << "What item do you want removed from the list?" << endl;
        cin >> itemName;
        cout << "Enter the calories of " << itemName << endl;;
        cin >> itemCalories;
        cout << "Enter the cost of " << itemName << endl;
        cin >> itemCost;
        list1.remove(FoodItem(itemName, itemCalories, itemCost));
        cout << "Item has been removed from the list" << endl;
    }
}