#include <iostream>

int main () {
    v1 = rand() % 100;         // v1 in the range 0 to 99
    v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
    v3 = rand() % 30 + 1985;   // v3 in the range 1984 2014

    std::cout << v1 << " (random number from 0 to 99)" << "\n";
    std::cout << v2 << " (random number from 1 to 100)" << "\n";
    std::cout << v3 << " (random number from 1984 to 2014)" << "\n";

    // usage

    // n =  rand() % range + start // n will be in the range from start to range + start
}