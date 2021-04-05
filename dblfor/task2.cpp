#include <iostream>

int main() {
    const int size = 15;
    char arr[size][size];
    int n;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = '.';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i == n / 2 || j == n / 2 || i == n - j - 1 || j == n - i - 1) {
                arr[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j];
            if (j != n - 1) {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}