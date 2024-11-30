#include <iostream>
#include <ctime>
#include <cmath>
#include <chrono>

void function_for_test(){
    for (int i = 0; i < 1000000; i++) {}
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    function_for_test();

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed =  end - start;

    long int nanoseconds = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();

    std::cout << "Elapsed time: " << nanoseconds << "ns" << std::endl;

    return 0;
}
