#include <iostream>
#include <cmath>

bool IsPrime(int n) {
    int div = 2;

    while (div < sqrt(n) && n % div != 0) {
        ++div;
    }

    return (n % div != 0 || n == div);
}

int main() {
    int n;

    std::cin >> n;

    if (IsPrime(n)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}