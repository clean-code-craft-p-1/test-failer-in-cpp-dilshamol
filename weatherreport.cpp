#include <iostream>
#include"IWeatherSensor.h"
#include"Test.h"

int main() 
{
    WeatherSpace::TestRainy();
    WeatherSpace::TestHighPrecipitation();
    cout << "All is well (maybe)\n";
    return 0;
}
