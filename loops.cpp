#include <iostream>

int main() {
    int day;

    std::cout << "Enter day number : ";
    std::cin >> day;

    switch (day) {
        case 1:
            std::cout << "Monday" << "\n";
            break;
        case 2:
            std::cout << "Tuesday" << "\n";
            break;
        case 3:
            std::cout << "Wednesday" << "\n";
            break;
        case 4:
            std::cout << "Thursday" << "\n";
            break;
        case 5:
            std::cout << "Friday" << "\n";
            break;
        case 6:
            std::cout << "Saturday" << "\n";
            break;
        case 7:
            std::cout << "Sunday" << "\n";
    }

    return 0;
}
