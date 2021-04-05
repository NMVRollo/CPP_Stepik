#include <iostream>

int main() {
    int n;
    int max = -1;

    while (std::cin >> n && n != 0) {
        if (max < n) {
            max = n;
        }
    }

    std::cout << max;

    return 0;
}