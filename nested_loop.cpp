#include <iostream>
#include <vector>

int main() {
    // nested loop its loop in loop
    // its uses if you need to print the matrix
    // or fill matrix

    int size = 5; // we need it to limit matrix size
    std::vector<std::vector<int>> matrix;

    // fill matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i].push_back(size*i + j + 1);
        }
    }

    // print matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}