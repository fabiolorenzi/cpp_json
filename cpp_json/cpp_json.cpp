#include <iostream>
#include <fstream>
#include <string>
#include <json/value.h>
#include <json/json.h>

int main()
{
    std::ifstream file("test.json");
    Json::Value actualJson;
    Json::Reader reader;

    reader.parse(file, actualJson);

    // The code below is to get all the json
    // std::cout << actualJson << std::endl;

    // The code below is to get a specific key from the json
    // std::cout << "Name: " << actualJson["name"] << std::endl;

    // The code below is to manage an array of objects
    std::cout << actualJson["data"][0] << std::endl;

    return 0;
}