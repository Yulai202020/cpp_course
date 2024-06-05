#include <iostream>
#include <vector>

int main() {
    std::vector<int> list = {1, 2}; // "infinity" array but max size is 4611686018427387903 2^62 but its anyway pretty many
    list.push_back(3); // push value on end of list
    list.push_back(5);

    // get size
    int size = list.size();

    // print values
    for (int i = 0; i < size; i++) {
        std::cout << list[i] << std::endl;
    }

    return 0;
}