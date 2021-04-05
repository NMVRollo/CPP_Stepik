#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;

    double square = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << square;

    return 0;
}