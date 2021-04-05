#include <iostream>

int main() {
    int n;
    double x;
    double res = 0;
    double coef;

    std::cin >> n >> x;

    while (n--) {
        std::cin >> coef;
        res += coef;
        res *= x;
    }

    std::cin >> coef;
    res += coef;
    std::cout << res;

    return 0;
}