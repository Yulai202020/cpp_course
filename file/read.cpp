#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string path = "test.txt";
    std::string output;

    // open file
    std::ifstream file(path);

    // if error
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
    }

    // get content
    std::string line;
    while (std::getline(file, line)) {
        // append line
        output += line;
    } 
  
    // close file
    file.close();

    std::cout << output << std::endl;
}