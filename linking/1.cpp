#include <iostream>

int main() {
    int num = 1;
    int* ptr = &num; // create pointer

    *ptr = 2; // change value of pointer
    // if you will print b you will get link in memory (ram)

    std::cout << num << std::endl; // 2 cuz we value of pointer
    std::cout << ptr << std::endl; // link to ram
}