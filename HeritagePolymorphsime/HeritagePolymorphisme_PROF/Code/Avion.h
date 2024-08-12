#pragma once
#include <string>

class Avion
{
private :
	std::string flightName;
	std::string captain;
	double latitude;
	double longitude;
protected:
	void updatePosition(double latitude, double longitude);
public : 
	Avion(std::string flightName, std::string captain);
	
	//PROF : Recette étape 1
	virtual std::string getFlightInfo() const;

	std::string getFlightName() const;
	std::string getCaptain() const;
	double getLatitude() const;
	double getLongitude() const;
};

