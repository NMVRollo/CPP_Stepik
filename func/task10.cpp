#include <iostream>

double fast_pow(double a, int n) {
    double res = 1;

    if (n != 0) {
        if (n % 2 == 0) {
            res = fast_pow(a * a, n / 2);
        }
        else {
            res = a;
            res *= fast_pow(a, n - 1);
        }
    }

    return res;
}

int main() {
    double a;
    int n;

    std::cin >> a >> n;
    std::cout << fast_pow(a, n);

    return 0;
}