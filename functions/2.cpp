#include <iostream>

void birthday(std::string name){ // this function has a paramerts but returns nothing
    std::cout << "Happy birthday to you." << std::endl;
    std::cout << "Happy birthday, " << name << "." << std::endl;
}

int main() {
    std::string name;
    printf("Enter your name: ");
    std::getline(std::cin, name);

    birthday(name);
    birthday(name);
    birthday(name);

    return 0;
}