#include <iostream>
#include <iomanip>

int main() {
    const int size = 20;
    int arr[size][size];
    int n, m;

    std::cin >> n >> m;

    int num = 1;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                arr[i][j] = num++;
            }
        }
        else {
            for (int j = m - 1; j >= 0; --j) {
                arr[i][j] = num++;
            }
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