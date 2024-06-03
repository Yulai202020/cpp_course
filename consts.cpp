#include <iostream>

int main() {
    // const is same variable but with fixed value
    const std::string name = "yulai";
    // name = "azamat"; // Here will be error

    const float PI = 3.141592;
    std::cout << PI << std::endl;
}