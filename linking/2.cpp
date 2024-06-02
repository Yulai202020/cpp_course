#include <iostream>

void increment(int& num, int n) { // this function just add n BUT DOESNT RETURN and its works, int& means its GOTTA BE lvalue (variable not just number)
    num += n;
}

int main() {
    int a = 0;
    
    increment(a, 10);

    std::cout << a << std::endl;
}