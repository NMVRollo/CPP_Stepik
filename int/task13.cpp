#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int p1, p2;

    p1 = n / 100;
    p2 = n % 100;

    p2 = p2 % 10 * 10 + p2 / 10;

    std::cout << (p2 - p1) + 1;

    return 0;
}