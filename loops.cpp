#include <iostream>

int main() {

    // normal for

    int count = 3; // or how many u want

    for (int i = 0 ; i < count; i++) {
        std::cout << "Happy Birthday !!!" << "\n";
    }

    // for each

    int list[3] = {1,2,3};

    for (int i : list) {
        std::cout << i << "\n";
    }

    // while

    std::string a;

    while (a != "q") {
        std::cout << "Enter q for exit : ";
        std::cin >> a;
    }

    // do while

    int i = 0;

    do {
        std::cout << i << "\n";
        i++;
    }
    while (i < 5);

    return 0;
    
}
