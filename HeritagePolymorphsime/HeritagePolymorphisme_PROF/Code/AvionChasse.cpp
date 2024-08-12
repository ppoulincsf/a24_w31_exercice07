#include "stdafx.h"
#include "AvionChasse.h"


AvionChasse::AvionChasse(std::string flightName, std::string captain, std::string missileType, std::string missionCode)
	: Avion(flightName, captain)
	, missileType(missileType)
	, missionCode(missionCode)
	, missileLaunched(false)
{
}

void AvionChasse::launchMissile()
{
	this->missileLaunched = true;
}

std::string AvionChasse::getFlightInfo() const
{
	return "Flight : " + this->getFlightName() +
		"; Captain : " + this->getCaptain() +
		"; Latitude : " + std::to_string(this->getLatitude()) +
		"; Longitude : " + std::to_string(this->getLongitude()) +
		"; MissileType : " + this->missileType +
		"; MissileLauched : " + std::to_string(this->missileLaunched);
}