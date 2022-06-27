#include "Monster.h"
#include "Boss.h"
Monster::Monster()
{
	monster = " ";
	human = " ";
	attackType = " ";
	maxHP = 150;
	currentHP = 0;
	attackDamage = 0;
}

Monster::Monster(string Monster, string Human, string AttackType,
	int MaxHP, int CurrentHP, double AttackDamage)
{
	monster = Monster;
	human = Human;
	attackType = AttackType;
	maxHP = MaxHP;
	currentHP = CurrentHP;
	attackDamage = AttackDamage;
}

Monster::~Monster()
{

}

void Monster::SetMonster(string Monster)
{
	monster = Monster;
}
string Monster::getMonster()
{
	return monster;
}

void Monster::SetHuman(string Human)
{
	human = Human;
}
string Monster::getHuman()
{
	return human;
}

void Monster::SetMaxHP(int MaxHP)
{
	maxHP = MaxHP;
}
int Monster::getMaxHP()
{
	return maxHP;
}

void Monster::SetCurrentHP(int CurrentHP)
{
	currentHP = CurrentHP;
}
int Monster::getCurrentHP()
{
	return currentHP;
}

void Monster::SetAttackType(string AttackType)
{
	attackType = AttackType;
}
string Monster::getAttackType()
{
	return attackType;
}

void Monster::SetAttackDamage(double AttackDamage)
{
	attackDamage = AttackDamage;
}
double Monster::getAttackDamage()
{
	return attackDamage;
}

string Monster::to_string()
{
	return "\nHP: " + std::to_string(maxHP)
		+ "\n" + human + "\nHP: "+ std::to_string(maxHP);
}