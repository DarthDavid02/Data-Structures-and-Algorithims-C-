#include "MapCoordinate.h"

MapCoordinate::MapCoordinate()
{
	name = " ";
	latitude = 0.0;
	longitude = 0.0;
}
MapCoordinate::MapCoordinate(string Name, double Latitude, double Longitude)
{
	name = Name;
	latitude = Latitude;
	longitude = Longitude;
}

//setters and getters
void MapCoordinate::setName(string Name)
{
	name = Name;
}
string MapCoordinate::getName()
{
	return name;
}

void MapCoordinate::setLatitude(double Latitude)
{
	latitude = Latitude;
}
double MapCoordinate::getLatitude()
{
	return latitude;
}

void MapCoordinate::setLongitude(double Longitude)
{
	longitude = Longitude;
}
double MapCoordinate::getLongitude()
{
	return longitude;
}

string MapCoordinate::to_string()
{
	return "The map array";
}