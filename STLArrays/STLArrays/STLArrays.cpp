// STLArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FoodItem.h"
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

array<int, 100> numbers;
array<string, 5> critters = { "dog", "deer", "cow", "pig", "elephant" };
array<FoodItem, 3> menu = { FoodItem("Cookies", 100, 3), FoodItem("Pizza", 300, 2), FoodItem("Apple", 5, 4) };

int main()
{
    sort(menu.begin(), menu.end());

    array<FoodItem, 3>::iterator foodItr;
    for (foodItr = menu.begin(); foodItr < menu.end(); foodItr++)
    {
        cout << foodItr->to_string() << endl;
    }

    //search by a property
    //find food calories < 200
    cout << "\nLess than 200 calories\n";
    for (foodItr = menu.begin(); foodItr < menu.end(); foodItr++) {
        if (foodItr->getCalories() < 200)
        {
            cout << foodItr->to_string() << endl;
            //do something
        }
    }

   /* cout << "Cool features of the STL arrays\n";

    cout << "Critters has " << critters.size() << endl;
    cout << "First critter " << critters.front() << endl;
    cout << "Last critter " << critters.back() << endl;
    cout << "Critter in third position " << critters[3] << " " << critters.at(3) << endl;


    //parse array with iterator
    array<string, 5>::iterator itr;
    sort(critters.begin(), critters.end());

    for (itr = critters.begin(); itr < critters.end(); itr++)
    {
        cout << *itr << " ";
    }



    //searching
    //brute force
    //input choice here
    string search = "deer";
    int found = -1;

   /* for (int x = 0; x < critters.size(); x++)
    {
        if (critters[x] == search)
        {
            //do something
            //find the location and quit
            found = x;
            break;//stop the loop
        }
    }
    cout << "\n\n";
    if (found > -1) {
        cout << search << " is in the loop at position " << found << endl;
    }
    else
    {
        cout << search << " is NOt in the loop" << endl;
    }
    

    //binary search technique
    //sort first 
    array<string, 5>::iterator foundItr;
    //see if it is there
    if (binary_search(critters.begin(), critters.end(), search)) {
        //found
        foundItr = lower_bound(critters.begin(), critters.end(), search);
       //foundItr = upper_bound(critters.begin(), critters.end(), search);
        //find index
        found = foundItr - critters.begin();
        cout << "\n" << search << " is in the list at position " << found << endl;
    }
    else
    {
        //not found
        cout << search << " is Not in the list" << endl;
    }
    */

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
