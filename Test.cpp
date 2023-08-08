#include"Test.h"

namespace WeatherSpace
{
    void TestRainy()
    {
        SensorStubStormy sensor;
        string report = Report(sensor);
        cout << report << endl;
        assert(report.find("rain") != string::npos);
    }

    void TestHighPrecipitation()
    {
        // This instance of stub needs to be different-
        // to give high precipitation (>60) and low wind-speed (<50)
        SensorStubRainy sensor;

        // strengthen the assert to expose the bug
        // (function returns Sunny day, it should predict rain)
        string report = Report(sensor);
        cout << report << endl;
        assert(report.find("rain") != string::npos);
        assert(report.length() > 0);
    }
}