#include <iostream>

int main() {
    // array its list of 1 type values
    // ofc array can be of std::string
    // std::string strings[10];
    // or anything else

    // but for example we will use int array
    int int_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // create array with length 10

    // numeration in array starts with 0
    int first_element = int_array[0];

    // print array
    // we will use foreach
    std::cout << "Starting array: " << std::endl;
    for (int i : int_array) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // fill the array
    for (int i = 0; i < 10; i++) {
        // we just will multiple by 10 all items
        int_array[i] *= 10;
    }

    // again print for sure
    std::cout << "Modificated array: " << std::endl;
    for (int i : int_array) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // 2d array its array of arrays
    // its will be matrix
    int size = 2;
    int array_2d[size][size] = {{1, 2}, {3, 4}};

    std::cout << "Matrix:" << std::endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << array_2d[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}