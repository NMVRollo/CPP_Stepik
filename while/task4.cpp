#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int t = 1;

    while (t != n && t <= n) {
        t *= 2;
    }

    if (t == n) {
       std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}