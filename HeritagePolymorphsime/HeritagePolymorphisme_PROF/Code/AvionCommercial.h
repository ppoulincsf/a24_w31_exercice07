#pragma once
#include <string>
#include "Avion.h"

class AvionCommercial : public Avion
{
private:
	std::string destination;
	int numPassengers;
	bool autoPilotOn;
public:
	AvionCommercial(std::string flightName, std::string captain, std::string destination, int numPassengers);
	void setAutoPilot(bool on);
	std::string getFlightInfo() const override;
};