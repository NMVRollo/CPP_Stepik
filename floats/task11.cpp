#include <iostream>

int main() {
    double a, b, c, d, e, f;
    double x, y;

    std::cin >> a >> b >> c >> d >> e >> f;

    double det = a * d - b * c;

    x = (e * d - b * f) / det;
    y = (a * f - e * c) / det;

    std::cout << x << ' ' << y;

    return 0;
}