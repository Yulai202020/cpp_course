#include <iostream>
#include <fstream>
#include <yaml-cpp/yaml.h>

int main() {
    try {
        // Open the YAML file for reading
        std::ifstream fin("data.yaml");
        
        // Attempt to parse the YAML file
        YAML::Node config = YAML::Load(fin);
        
        // Access elements in the YAML file
        std::string name = config["name"].as<std::string>();
        int age = config["age"].as<int>();
        
        // Output the parsed data
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    } catch (const YAML::Exception& e) {
        // Handle YAML parsing errors
        std::cerr << "YAML parsing error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}