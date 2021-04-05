#include <iostream>

int main() {
    int a, b, h;
    int d;

    std::cin >> h >> a >> b;

    const int step = a - b;
    d = 1 + (h - a) / step + ((h - a) % step + step - 1) / step;

    std::cout << d;

    return 0;
}