#include <iostream>
#include <iomanip>
#include <string>

#include "FoodItem.h"
using namespace std;


int main()
{
    FoodItem cookies("Oreo", 100, 2);
    FoodItem milk("Milk", 150, 1);

    //cout << cookies.to_string() << endl;
    //cin >> cookies;
    cout << cookies << " " << milk << endl;

    if (cookies < milk)
    {
        cout << cookies << " is smaller" << endl;
    }

    FoodItem dessert = cookies + milk;
    cout << dessert << endl;

    return 0;
}