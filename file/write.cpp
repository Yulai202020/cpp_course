#include <iostream>
#include <fstream>

int main() {
    std::string path = "test.txt";
    std::string input = "hi yulai";

    // open file
    std::ofstream file(path);

    // if error
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
    }

    file << input;

    // close file
    file.close();

    std::cout << "File was updated." << std::endl;
}