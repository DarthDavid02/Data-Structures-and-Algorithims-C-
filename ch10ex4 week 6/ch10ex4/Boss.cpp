#include "Boss.h"
#include <iostream>
#include <string>
using namespace std;

Boss::Boss()
{
	shield = 100;
	currentShield = 100;
	superAttack = 0;
}
Boss::Boss(double Shield, double SuperAttack, double CurrentShield)
{
	shield = Shield;
	currentShield = CurrentShield;
	superAttack = SuperAttack;
}

void Boss::SetShield(double Shield)
{
	shield = Shield;
}
double Boss::getShield()
{
	return shield;
}

void Boss::SetCurrentShield(double CurrentShield)
{
	currentShield = CurrentShield;
}
double Boss::getCurrentShield()
{
	return currentShield;
}

void Boss::SetSuperAttack(double SuperAttack)
{
	superAttack = SuperAttack;
}
double Boss::getSuperAttack()
{
	return superAttack;
}