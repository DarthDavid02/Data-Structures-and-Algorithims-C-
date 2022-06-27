#pragma once
#include <string>
using namespace std;

class Monster
{
public:
	Monster();
	Monster(string Monster, string Human, string AttackType, int MaxHP, int CurrentHP, double AttackDamage);
	~Monster();

	void SetMonster(string Monster);
	string getMonster();

	void SetHuman(string Human);
	string getHuman();

	void SetMaxHP(int MaxHP);
	int getMaxHP();

	void SetCurrentHP(int CurrentHP);
	int getCurrentHP();

	void SetAttackType(string AttackType);
	string getAttackType();

	void SetAttackDamage(double AttackDamage);
	double getAttackDamage();

	string to_string();

private:
	string monster, human, attackType;
	int maxHP, currentHP;
	double attackDamage;
protected:

};

