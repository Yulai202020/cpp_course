#include <iostream>

struct Person {
    int age;
    std::string name;
};

int main() {

    int age;
    std::string name;

    std::cout << "Enter your name : ";
    std::cin >> name;

    std::cout << "Enter your age : ";
    std::cin >> age;

    Person person;
    person.age = age;
    person.name = name;

    return 0;
}