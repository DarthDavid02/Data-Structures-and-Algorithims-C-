#pragma once
#include <iostream>
#include <string>
#include "Monster.h"
using namespace std;

class Boss : public Monster
{
public:
	Boss();
	Boss(double Shield, double SuperAttack, double CurrentShield);

	void SetShield(double Shield);
	double getShield();

	void SetCurrentShield(double CurrentShield);
	double getCurrentShield();

	void SetSuperAttack(double SuperAttack);
	double getSuperAttack();

private:

protected:
	double superAttack, shield, currentShield;
};

