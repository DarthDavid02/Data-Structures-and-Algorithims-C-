#include <iostream>
#include <iomanip>
#include <string>
#include "Monster.h"
#include "Boss.h"
using namespace std;

int main()
{
    string attack;
    double currentShield;

    Monster character;
    character.SetMonster("Monster");
    character.SetHuman("Human");
    character.SetMaxHP(150);
    character.SetCurrentHP(150);
    character.SetAttackDamage(5);
    character.SetAttackType(attack);

    Boss enemy;
    enemy.SetShield(100);
    enemy.SetCurrentShield(100);
    enemy.SetSuperAttack(7.5);

    cout << "Boss\n" <<"Shield: " << enemy.getShield();
    cout << character.to_string() << endl;

    cout << "Attack the Boss!" << endl;
    cout << "Choose between an Attack or Special" << endl;
    cin >> attack;
    if (attack == "Attack")
    {
        if (enemy.getShield() > 0) {
            enemy.SetCurrentShield(enemy.getShield() - character.getAttackDamage());
        }
        else if (enemy.getShield() <= 0)
        {
            character.SetCurrentHP(150 - character.getAttackDamage());
        }
    }
    else if(attack == "Special")
    {
        if (enemy.getShield() > 0) {
            enemy.SetCurrentShield(enemy.getShield() - enemy.getSuperAttack());
        }
        else if (enemy.getShield() <= 0)
        {
            character.SetCurrentHP(150 - character.getAttackDamage());
        }
    }

    cout << "The Boss's shield is at: " << enemy.getCurrentShield() << endl;
    cout << "The Boss's HP is at: " << character.getCurrentHP() << endl;
    cout << "The Boss attacks you the human with a Super Attack!\nYour current HP is at: " << character.getCurrentHP() 
        - enemy.getSuperAttack() << endl;

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
