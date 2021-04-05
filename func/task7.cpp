#include <iostream>

double power(double x, int n) {
    double res = 1;

    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    while (--n >= 0) {
        res *= x;
    }

    return res;
}

int main() {
    double a;
    int n;

    std::cin >> a >> n;

    std::cout << power(a, n) << std::endl;

    return 0;
}