#include <iostream>
#include <chrono>
#include <vector>
#include <array>

void test_vector() {
    std::vector<int> test;

    for (int i = 0; i < 100000; i++){
        test.push_back(i);
    }
}

void test_array() {
    int test[100000];

    for (int i = 0; i < 100000; i++){
        test[i] = i;
    }
}

void test_std_array() {
    std::array<int, 100000> test;

    for (int i = 0; i < 100000; i++){
        test[i] = i;
    }
}


std::chrono::duration<double> test_function(void fn()) {
    auto start = std::chrono::high_resolution_clock::now();

    fn();

    auto end = std::chrono::high_resolution_clock::now();
    return end - start;

}


int main() {
    std::chrono::duration<double> elapsed = test_function(test_std_array);

    long int nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();

    std::cout << "Elapsed time: " << nanoseconds << std::endl;

    return 0;
}
