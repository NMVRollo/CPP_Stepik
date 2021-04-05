#include <iostream>
#include <cmath>

int main() {
    int p, x, y;
    std::cin >> p >> x >> y;

    double rate = p / 100.0;
    double coins = x * 100 + y;
    int k_dep = coins + coins * rate;

    std::cout << k_dep / 100 << ' ' << k_dep % 100;

    return 0;
}