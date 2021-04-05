#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    double a, b, c;
    double r1, r2;

    std::cin >> a >> b >> c;

    double discr = b * b - 4 * a * c;

    if (discr >= 0) {
        if (discr > 0) {
            r1 = (-b + sqrt(discr)) / (2 * a);
            r2 = (-b - sqrt(discr)) / (2 * a);

            std::cout << std::min(r1, r2) << ' ' << std::max(r1, r2);
        }
        else {
            r1 = -b / (2 * a);
            std::cout << r1;
        }
    }

    return 0;
}