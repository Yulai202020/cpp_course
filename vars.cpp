#include <iostream>
#include <any>
#include <string>

int main(){
    int x = 3; // just number
    double pi = 3.14; // number with decimal
    bool student = true; // or false
    std::string name = "yulai" // normal string
    std::any name1 = ""; // anythink
    char a = "A"; // just 1 char

    std::cout << name << "\n"; // out
    return 0;
}