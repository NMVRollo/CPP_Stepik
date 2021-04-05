#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int div = 2;
    while (n % div != 0) {
        ++div;
    }

    std::cout << div;

    return 0;
}