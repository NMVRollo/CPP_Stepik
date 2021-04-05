#include <iostream>
#include <cmath>

int MinDivisor(int n) {
    int div = 2;

    for (; div < sqrt(n) && n % div != 0; ++div) {
    }

    if (n % div != 0) {
        div = n;
    }

    return div;
}

int main() {
    int n;

    std::cin >> n;
    std::cout << MinDivisor(n);

    return 0;
}