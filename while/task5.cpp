#include <iostream>

int main() {
    int n = 0;
    int tmp;

    while (std::cin >> tmp && tmp != 0) {
        ++n;
    }

    std::cout << n;

    return 0;
}