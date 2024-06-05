#include <iostream>

double square(double num) { // this function return squared number
    double result = num * num;
    return result;
}

int main() {
    std::cout << "Enter number: ";
    double num;
    std::cin >> num;

    double squared = square(num);

    std::cout << num << "^2 = " << squared << std::endl;

    return 0;
}