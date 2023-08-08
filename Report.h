#pragma once
#include<string>
#include "IWeatherSensor.h"
using namespace std;

namespace WeatherSpace
{
	string Report(const IWeatherSensor& sensor);
}
