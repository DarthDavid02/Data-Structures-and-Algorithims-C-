// ch10ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Monster.h"
using namespace std;

int main()
{
    string attack;

    Monster character;
    character.SetMonster("Monster");
    character.SetHuman("Human");
    character.SetMaxHP(100);
    character.SetCurrentHP(100);
    character.SetAttackDamage(5);
    character.SetAttackType(attack);

    cout << character.to_string() << endl;

    cout << "Attack the monster!" << endl;
    cin >> attack;
    if (character.getAttackType() == "attack")
    {
        attack = 5;
    }
    else
    {
        attack = 10;
    }

    character.SetCurrentHP(100 - character.getAttackDamage());

    cout << "The Monster's HP is at: " << character.getCurrentHP() << endl;
    cout << "The Monster attacks you the human and your current HP is at: " << character.getCurrentHP() << endl;

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
