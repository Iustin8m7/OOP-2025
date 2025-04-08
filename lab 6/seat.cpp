
#include "Seat.h"

Seat::Seat()
{
	fuelCapacity = 50;
	fuelConsumption = 6;
	speedSunny = 200;
	speedRain = 120;
	speedSnow = 75;

}
double Seat::getSpeed(Weather weather) const
{
	if (weather == Weather::Sunny)
		return speedSunny;
	else
		if (weather == Weather::Rain)
			return speedRain;
		else
			return speedSnow;

}

double Seat::getFuelCapacity() const
{
	return fuelCapacity;
}

double Seat::getFuelConsumption()const
{
	return fuelConsumption;
}
const char* Seat::getName()const
{
	return "Seat";
}
