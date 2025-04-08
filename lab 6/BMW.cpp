
#include "Seat.h"
#include "BMW.h"

BMW::BMW()
{
	fuelCapacity = 60;
	fuelConsumption = 14;
	speedSunny = 240;
	speedRain = 200;
	speedSnow = 80;

}
double BMW::getSpeed(Weather weather) const
{
	if (weather == Weather::Sunny)
		return speedSunny;
	else
		if (weather == Weather::Rain)
			return speedRain;
		else
			return speedSnow;

}

double BMW::getFuelCapacity() const
{
	return fuelCapacity;
}

double BMW::getFuelConsumption()const
{
	return fuelConsumption;
}
const char* BMW::getName()const
{
	return "BMW";
}
