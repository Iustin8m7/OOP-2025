
#include "Fiat.h"

Fiat::Fiat()
{
	fuelCapacity = 50;
	fuelConsumption = 6;
	speedSunny = 150;
	speedRain = 100;
	speedSnow = 80;

}
double Fiat::getSpeed(Weather weather) const
{
	if (weather == Weather::Sunny)
		return speedSunny;
	else
		if (weather == Weather::Rain)
			return speedRain;
		else
			return speedSnow;

}

double Fiat::getFuelCapacity() const
{
	return fuelCapacity;
}

double Fiat::getFuelConsumption()const
{
	return fuelConsumption;
}
const char* Fiat::getName()const
{
	return "Fiat";
}
