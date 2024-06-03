#include <iostream>
#include <string>
#include <any>

int main() {
    int x; // create variable
    x = 4; // give value

    int y = 3; // just number
    double pi = 3.14; // number with decimal
    float e = 2.71828; // its number with decimal too

    bool student = true; // true or false (yes or no)

    char a = 'A'; // just 1 char
    std::string name = "yulai"; // normal string
    std::any name1 = ""; // anythink

    std::cout << name << "\n"; // out
    return 0;
}