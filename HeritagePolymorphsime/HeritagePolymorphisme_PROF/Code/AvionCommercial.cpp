#include "stdafx.h"
#include "AvionCommercial.h"


AvionCommercial::AvionCommercial(std::string flightName, std::string captain, std::string destination, int numPassengers) 
	:	Avion(flightName, captain)
	, destination(destination)
	, numPassengers(numPassengers)
	, autoPilotOn(false)
{

}

void AvionCommercial::setAutoPilot(bool on)
{
	this->autoPilotOn = on;
}

std::string AvionCommercial::getFlightInfo() const
{	
	return "Flight : " + this->getFlightName() +
		"; Captain : " + this->getCaptain() +
		"; Latitude : " + std::to_string(this->getLatitude()) +
		"; Longitude : " + std::to_string(this->getLongitude()) +
		"; Destination : " + this->destination +
		"; NumPassengers : " + std::to_string(this->numPassengers) +
		"; Auto pilot : " + std::to_string(this->autoPilotOn);
}