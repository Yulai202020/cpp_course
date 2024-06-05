#include <iostream>

double square(double); // its like syntactic of functions

int main() {
    std::cout << "Enter number: ";
    double num;
    std::cin >> num;

    double squared = square(num);

    std::cout << num << "^2 = " << squared << std::endl;

    return 0;
}

double square(double num) { // this function squares number and return
    double result = num * num;
    return result;
}