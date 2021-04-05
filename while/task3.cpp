#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int t = 1;

    while (t <= n) {
        std::cout << t << ' ';
        t *= 2;
    }

    return 0;
}