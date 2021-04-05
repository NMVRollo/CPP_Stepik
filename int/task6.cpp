#include <iostream>

int main() {
    int N;
    int sum = 0;

    std::cin >> N;

    while (N) {
        int digit = N % 10;

        sum += digit;
        N /= 10;
    }

    std::cout << sum;

    return 0;
}