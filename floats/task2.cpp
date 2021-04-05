#include <iostream>

int main() {
    double num;

    std::cin >> num;

    double frac = num - static_cast<int> (num);

    std::cout << static_cast<int> (frac * 10);

    return 0;
}