#include <iostream>

int main(){
    bool not_guessed = true;
    int random_number = rand() % 100 - 1;

    while (not_guessed) {
        std::cout << "Guess number from 1 to 100 : ";
        int entered_nuber;
        std::cin >> entered_nuber;

        if (entered_nuber > random_number) {
            std::cout << "Very many." << "\n";
        } else if (entered_nuber < random_number) {
            std::cout << "Very small." << "\n";
        } else {
            std::cout << "Thats right, you guess right!" << "\n";
            not_guessed = false;
        }
    }
    return 0;
}