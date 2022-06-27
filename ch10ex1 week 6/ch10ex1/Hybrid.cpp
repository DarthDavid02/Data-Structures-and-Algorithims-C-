#include "Hybrid.h"
#include <string>
#include <iostream>
using namespace std;
Hybrid::Hybrid()
{
	batteryType = "";
	batterySize = "";
	batteryChargePercentage = 0;
}

Hybrid::Hybrid(string BatteryType, string BatterySize, int BatteryChargePercentage)
{
	batteryType = BatteryType;
	batterySize = BatterySize;
	batteryChargePercentage = BatteryChargePercentage;
}

void Hybrid::SetBatteryType(string BatteryType)
{
	batteryType = BatteryType;
}
string Hybrid::getBatteryType()
{
	return batteryType;
}

void Hybrid::SetBatterySize(string BatterySize)
{
	batterySize = BatterySize;
}
string Hybrid::getBatterySize()
{
	return batterySize;
}

void Hybrid::SetBatteryChargePercentage(int BatteryChargePercentage)
{
	batteryChargePercentage = BatteryChargePercentage;
}

int Hybrid::getBatteryChargePercentage()
{
	return batteryChargePercentage;
}
string Hybrid::BatteryCharger(string batteryCharge)
{
	return batteryCharge;
}

double Hybrid::RangeOfHybrid(double Range)
{
	return 10 * getBatteryChargePercentage();
}