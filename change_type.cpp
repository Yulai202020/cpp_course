#include <iostream>

int main() {
    int y = 3.14; // its will change to 3 cuz 3.14 is not int
    double x = (int) 3.14; // we change 3.14 to 3 cuz its int
    char name = 100; // its will change to some symbol by some table
    bool student = 0; // 0 - false, 1 - true but its outs 1 or 0

    std::cout << student << "\n";

    return 0;
}