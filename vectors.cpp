#include <iostream>
#include <vector>

int main() {
    // vector can be of string all anything else
    std::vector<int> list = {1, 2}; // "infinity" array but max size is 4611686018427387903 2^62 but its anyway pretty many
    std::vector<std::string> list_strings = {"hello", "world"}; // example of string vector and push_back you can just with string

    list.push_back(3); // push value on end of list
    list.push_back(5);

    // get size
    int size = list.size();

    // print values
    for (int i : list) {
        std::cout << i << std::endl;
    }

    return 0;
}