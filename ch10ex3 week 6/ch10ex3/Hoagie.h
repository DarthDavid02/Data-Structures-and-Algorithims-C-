#pragma once
#include <iostream>
#include <string>
#include "Sandwich.h"
using namespace std;

class Hoagie : public Sandwich
{
public:
	Hoagie();
	Hoagie(int LengthInFeet, string Baked);

	void SetLengthInFeet(int LengthInFeet);
	int getLengthInFeet();

	void SetBaked(string Baked);
	string getBaked();

	void totalCost();
private:

protected:
	int lengthInFeet;
	string baked;
};

