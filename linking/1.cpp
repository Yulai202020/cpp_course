#include <iostream>

int main() {
    int a = 1;
    int& b = a; // create link

    b = 2; // change value of link

    std::cout << a << std::endl; ///2 cuz we setted link
}