#include <iostream>
class Person {
    public:
        int age;
        std::string name;

        int get_age() {
            return age;
        }

        std::string get_name() {
            return name;
        }

    private: // You cant do person.grade cuz its privat but you can use them in function in this class
        int grade;
        std::string class_name; // like A, B, C
};

int main() {

    Person person;

    person.name = "Yulai";
    person.age = 14;

    std::cout << person.get_age() << "\n";
    std::cout << person.get_name() << "\n";

    return 0;
}