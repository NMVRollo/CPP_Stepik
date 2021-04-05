#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    double a, b, c;
    double r1, r2;
    const int one_root = 1;
    const int two_roots = 2;
    const int inf_roots = 3;
    const int no_roots = 0;

    std::cin >> a >> b >> c;

    if (a != 0) {
        double discr = b * b - 4 * a * c;
        if (discr > 0) {
            r1 = (-b - sqrt(discr)) / (2 * a);
            r2 = (-b + sqrt(discr)) / (2 * a);
            std::cout << two_roots << ' ' << std::min(r1, r2) << ' ' << std::max(r1, r2);
        }
        else if (discr == 0) {
            r1 = -b / (2 * a);
            std::cout << one_root << ' ' << r1;
        }
        else {
            std::cout << no_roots;
        }
    }
    else {
        if (b == 0 && c == 0) {
            std::cout << inf_roots;
        }
        else if (b != 0) {
            r1 = -c / b;
            std::cout << one_root << ' ' << r1;
        }
        else {
            std::cout << no_roots;
        }
    }

    return 0;
}