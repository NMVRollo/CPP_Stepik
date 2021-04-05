#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    if (a > b) {
        std::cout << 1;
    }
    else if (a < b) {
        std::cout << 2;
    }
    else {
        std::cout << 0;
    }

    return 0;
}