#include <iostream>

int main() {
    char c;

    std::cin >> c;

    if (islower(c)) {
        c = toupper(c);
    }

    std::cout << c;

    return 0;
}