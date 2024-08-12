#include "stdafx.h"
#include "Transponder.h"


Transponder::Transponder()
{
}

std::string Transponder::transpond(const Avion &avion)
{
	return avion.getFlightInfo();
}