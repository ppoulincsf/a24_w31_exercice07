#include "stdafx.h"
#include "Avion.h"

Avion::Avion(std::string flightName, std::string captain) 
	: latitude(0)
	, longitude(0)
	, flightName(flightName)
	, captain(captain)
{
}

void Avion::updatePosition(double latitude, double longitude)
{
	this->latitude = latitude;
	this->longitude = longitude;
}

std::string Avion::getFlightInfo() const
{
	return "Flight : " + this->flightName + "; Captain : " + this->captain + "; Latitude : " + std::to_string(this->latitude) + "; Longitude : " + std::to_string(this->longitude);
}

std::string Avion::getFlightName() const
{
	return this->flightName;
}

std::string Avion::getCaptain() const
{
	return this->captain;
}


double Avion::getLatitude() const
{
	return this->longitude;
}

double Avion::getLongitude() const
{
	return this->latitude;
}