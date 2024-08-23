#include <iostream>

void add(int& num, int add) {
    num += add;
}

int main() {
    // * pointers
    int a = 1;

    int* ptr_a = &a;
    *ptr_a = 10;

    std::cout << a << "\n"; // 10

    // & reference
    a = 1;

    int& refr_a = a; // its like copy of variable not pointer
    refr_a = 10;

    std::cout << a << "\n"; // 10

    // references and pointers works same but value of pointers is link in ram (some number like id), value of reference is value of variable which you linked

    // code example
    int num = 10;

    add(num, 100);

    std::cout << num << "\n"; // 110
    return 0;
}