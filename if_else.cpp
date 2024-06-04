#include <iostream>

int main(){
    // if condition
    if (true) {
        // its will runs anyways
        std::cout << 'c++ is good' << "\n";
    }
    else if (false) {
        // its will not run
        std::cout << 'c++ is bad' << "\n";
    }

    // usage

    // if (condition1) {
        // if condition is true this code will runs
    // } else if (condition2) {
        // if condition is false and condition2 is true its will runs
    // }
    // else {
        // if all conditions is false its will runs
    // }

    return 0;
}