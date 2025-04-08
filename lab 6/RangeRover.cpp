
#include "RangeRover.h"

RangeRover::RangeRover()
{
	fuelCapacity = 90;
	fuelConsumption = 15;
	speedSunny = 180;
	speedRain = 120;
	speedSnow = 80;

}
double RangeRover::getSpeed(Weather weather) const
{
	if (weather == Weather::Sunny)
		return speedSunny;
	else
		if (weather == Weather::Rain)
			return speedRain;
		else
			return speedSnow;

}

double RangeRover::getFuelCapacity() const
{
	return fuelCapacity;
}

double RangeRover::getFuelConsumption()const
{
	return fuelConsumption;
}
const char* RangeRover::getName()const
{
	return "RangeRover";
}
