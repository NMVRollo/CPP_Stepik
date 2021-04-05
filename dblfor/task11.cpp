#include <iostream>
#include <iomanip>

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    std::cin >> n >> m;

    int num = 1;

    for (int i = 0; i < m; ++i) {
        for (int j = i, k = 0; j >= 0 && k < n; --j, ++k) {
            arr[k][j] = num++;
        }
    }

    for (int i = 1; i < n; ++i) {
        for (int j = m - 1, k = i; j >= 0 && k < n; --j, ++k) {
            arr[k][j] = num++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << std::setw(4) << arr[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}