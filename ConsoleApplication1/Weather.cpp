#include "Weather.h"

Weather::Weather(std::string City, double LON, double LAT, double Temperature, std::string Weather, double WindSpeed, int Clouds)
{
	city = City;
	lon = LON;
	lat = LAT; 
	temperature = Temperature;
	weather = Weather;
	windSpeed = WindSpeed;
	clouds = Clouds;
}