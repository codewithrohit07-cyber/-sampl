#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    if (rows <= 0) {
        std::cout << "Please enter a positive number of rows.\n";
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {
        for (int space = 0; space < rows - i; ++space) {
            std::cout << ' ';
        }

        for (int star = 0; star < 2 * i - 1; ++star) {
            std::cout << '*';
        }

        std::cout << '\n';
    }

    return 0;
}
