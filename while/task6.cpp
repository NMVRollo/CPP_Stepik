#include <iostream>

int main() {
    int sum = 0;
    int n;

    while (std::cin >> n && n != 0) {
        sum += n;
    }

    std::cout << sum;

    return 0;
}