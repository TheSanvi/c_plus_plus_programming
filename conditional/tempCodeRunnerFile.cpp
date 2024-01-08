#include <iostream>

int main() {
    int score;
    std::cout << "Enter the score: ";
    std::cin >> score;

    if (score < 300) {
        std::cout << "India wins" << std::endl;
    }

    return 0;
}
