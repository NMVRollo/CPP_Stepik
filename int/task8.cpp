#include <iostream>

int value(int st) {
    static const int p_t = 2;

    return (st + p_t - 1) / 2;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << value(a) + value(b) + value(c) << std::endl;
    return 0;
}