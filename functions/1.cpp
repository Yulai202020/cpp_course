#include <iostream>

// functions can shotcut your code

void printf(std::string print) { // this function just print something like pyramid
    std::cout << print << "\n";
    std::cout << print << print << "\n";
    std::cout << print << print << print << "\n";
}

int main() {
    // this is calling function
    printf("hi");
    printf("hello");

    return 0;
}