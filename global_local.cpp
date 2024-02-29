#include <iostream>

// make global variable
int age = 14;

int main(){
    // make local variable (in function main)

    int age = 7;

    // use local and global

    std::cout << "Global variable " << ::age << "\n";
    std::cout << "Local variable " << age << "\n";

    return 0;
}

int plus_global_variable(int input) {
    // if age is not initilizaded in function c++ will use global variable
    return input + age;
}