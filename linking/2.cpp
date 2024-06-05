#include <iostream>

void add(int& num, int n) { // this function just add n BUT DOESNT RETURN and its works, int& means its GOTTA BE lvalue (variable not just number)
    num += n;
}

int main() {
    int number = 0;
    
    add(number, 10);

    std::cout << number << std::endl;
}