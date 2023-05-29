#pragma once
#include "WeatherService.h"
#include "json.hpp"

#include <fstream>

using nlohmann::json;

class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};



