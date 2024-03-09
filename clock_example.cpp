#include <iostream>
#include <ctime>
#include <cmath>
#include <chrono>

void function_for_test(){
    return;
}

int main() {

    // first method
    clock_t time_req;

	time_req = clock();

    // function
    function_for_test();

   	time_req = clock() - time_req;

    std::cout << "Elapsed time: " << (float)time_req/CLOCKS_PER_SEC << "s" << std::endl;

    // second method

    auto start = std::chrono::high_resolution_clock::now();

    function_for_test();

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed =  end - start;

    long int nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();

    std::cout << "Elapsed time: " << nanoseconds  << "ns" << std::endl;

    return 0;
}
