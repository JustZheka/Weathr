#include "JsonService.h"

Weather JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw std::exception("error");

    json j;
    j = json::parse(fin);
    std::string city = j["name"]; //  Киров
    double lon = j["coord"]["lon"]; // 49.6601
    double lat = j["coord"]["lot"]; // 58.5966  
    double temperature = j["temperature "]; // 5.69
    std::string weather = j["weather"]; // дождь
    double windSpeed = j["windSpeed"]; // 4.27
    int clouds = j["clouds"]["all"]; // 100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
