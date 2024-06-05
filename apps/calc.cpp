#include <iostream>

int main() {
    std::string oper;
    std::cout << "Enter operator (*, /, +, -): ";
    std::cin >> oper;

    float a, b;
    std::cout << "Enter operator number 1: ";
    std::cin >> a;

    std::cout << "Enter operator number 2: ";
    std::cin >> b;

    if (oper == "*") {
        std::cout << "Result = " << a*b << std::endl;
    } else if (oper == "/") {
        std::cout << "Result = " << a/b << std::endl;
    } else if (oper == "+") {
        std::cout << "Result = " << a+b << std::endl;
    } else if (oper == "-") {
        std::cout << "Result = " << a-b << std::endl;
    } else {
        std::cout << "Unknown operator." << std::endl;
    }

    return 0;
}