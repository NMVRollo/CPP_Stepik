#include <iostream>

int main() {
    int n, count = 0;
    int max = -1;

    while (std::cin >> n && n != 0) {
        if (max < n) {
            count = 1;
            max = n;
        }
        else if (n == max) {
            ++count;
        }
    }

    std::cout << count;

    return 0;
}