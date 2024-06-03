#include <iostream>

int main() {
    /*
    This program says hello to you
    */
    std::cout << "Input name: ";

    std::string name;
    std::cin >> name; // get name

    std::cout << "Hello " << name << std::endl; // its print hello name

    return 0;
}