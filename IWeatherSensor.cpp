#include "IWeatherSensor.h"

int WeatherSpace::SensorStubStormy::Humidity() const
{
	return 72;
}

int WeatherSpace::SensorStubStormy::Precipitation() const
{
	return 70;
}

double WeatherSpace::SensorStubStormy::TemperatureInC() const
{
	return 26;
}

int WeatherSpace::SensorStubStormy::WindSpeedKMPH() const
{
	return 52;
}

int WeatherSpace::SensorStubRainy::Humidity() const
{
	return 72;
}

int WeatherSpace::SensorStubRainy::Precipitation() const
{
	return 80;
}

double WeatherSpace::SensorStubRainy::TemperatureInC() const
{
	return 26;
}

int WeatherSpace::SensorStubRainy::WindSpeedKMPH() const
{
	return 45;
}
