#pragma once
#include <string>
#include "CarInfo.h"
using namespace std;
class Hybrid :public CarInfo
{
public:
	Hybrid();
	Hybrid(string BatteryType, string BatterySize, int BatteryChargePercentage);

	void SetBatteryType(string BatteryType);
	string getBatteryType();

	void SetBatterySize(string BatterySize);
	string getBatterySize();

	void SetBatteryChargePercentage(int BatteryChargePercentage);
	int getBatteryChargePercentage();

	string BatteryCharger(string batteryCharge);

	double RangeOfHybrid(double Range);

private:

protected:
	string batteryType, batterySize;
	int batteryChargePercentage;
};

