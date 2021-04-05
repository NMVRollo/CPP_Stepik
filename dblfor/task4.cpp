#include <iostream>

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    std::cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> arr[i][j];
        }
    }

    int i_s, j_s;

    std::cin >> i_s >> j_s;

    for (int i = 0; i < n; ++i) {
        std::swap(arr[i][i_s], arr[i][j_s]);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr[i][j];
            if (j != m - 1) {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}