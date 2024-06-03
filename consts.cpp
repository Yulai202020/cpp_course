#include <iostream>

int main() {
    // const is same variable but with fixed value
    const std::string name = "yulai";
    const int pi = 3.141592;

    // name = "azamat"; // Here will be error
    std::cout << name << std::endl;
}