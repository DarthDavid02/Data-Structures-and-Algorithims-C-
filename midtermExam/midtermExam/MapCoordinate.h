#pragma once
#include <string>
using namespace std;
class MapCoordinate
{
public:
	MapCoordinate();
	MapCoordinate(string Name, double Latitude, double Longitude);

	void setName(string Name);
	string getName();

	void setLatitude(double Latitude);
	double getLatitude();

	void setLongitude(double Longitude);
	double getLongitude();

	string to_string();

private:
	string name;
	double latitude;
	double longitude;
protected:

};

