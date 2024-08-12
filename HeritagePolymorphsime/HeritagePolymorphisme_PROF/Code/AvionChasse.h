#include <string>
#include "Avion.h"

#pragma once
class AvionChasse : public Avion
{
private:
	std::string missileType;
	std::string missionCode;
	bool missileLaunched;
public:
	AvionChasse(std::string flightName, std::string captain, std::string missileType, std::string missionCode);
	void launchMissile();
	std::string getFlightInfo() const override;
};

