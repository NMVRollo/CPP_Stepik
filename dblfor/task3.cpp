#include <iostream>

int main() {
    const int size = 100;
    int arr[size][size];
    int n;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                arr[i][j] = 0;
            }
            else if (i < j) {
                arr[i][j] = j - i;
            }
            else {
                arr[i][j] = i - j;
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