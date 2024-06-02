#include <iostream>

int main(){
    // standart get line from console
    // std::string uinput;
    // std::cin >> uinput;
    
    // std::cout << "You entered : " << uinput << "\n";

    // get line with escape
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << ", nice to meet you.\n";

    // std::cout << "You entered (within escapes) : " << line << "\n";

    return 0;
}