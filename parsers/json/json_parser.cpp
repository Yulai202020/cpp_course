#include <iostream>
#include <fstream>
// You need to install them
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    json j;

    // read file
    std::ifstream file("data.json");

    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
    }

    file >> j;
    file.close();

    for (const auto& item : j) {
        std::cout << item << std::endl;
    }
    
    return 0;
}