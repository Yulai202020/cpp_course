#include <iostream>

int main(){
    // if condition
    int age;

    std::cout << "Enter your age: ";

    if (age >= 18){
        std::cout << "You are an aldut." << std::endl;
    } else if (age <= 12) {
        std::cout << "You are teenager." << std::endl;
    } else {
        std::cout << "You are baby." << std::endl;
    }

    // use:
    // if (condition1) {
    //     // do smth
    // } else if (condition2) {
    //     // do smth else
    // } else {
    //     // if condition1 and condition2 is not true
    // }

    return 0;
}