#include "Report.h"

namespace WeatherSpace
{
    string Report(const IWeatherSensor& sensor)
    {
        int precipitation = sensor.Precipitation();
        // precipitation < 20 is a sunny day
        string report = "Sunny Day";

        if (sensor.TemperatureInC() > 25)
        {
            if (precipitation >= 20 && precipitation < 60)
            {
                report = "Partly Cloudy";
            }
            else if (sensor.WindSpeedKMPH() > 50)
            {
                report = "Alert, Stormy with heavy rain";
            }
        }
        return report;
    }

}
