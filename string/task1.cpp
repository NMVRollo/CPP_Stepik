#include <iostream>

int main() {
    char c;

    std::cin >> c;

    if (isdigit(c)) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }

    return 0;
}