#include <iostream>

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    std::cin >> n;
    std::cout << fib(n);

    return 0;
}