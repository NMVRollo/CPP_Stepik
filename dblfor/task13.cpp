#include <iostream>
#include <iomanip>

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    std::cin >> n >> m;

    int num = 1;
    int k = 0;
    int numbers = n * m;
    int x_max = m, y_max = n;
    int x_min = 0, y_min = 0;
    int x = 0, y = 0;

    while (k < numbers) {
        for (; x < x_max && k < numbers; ++x, ++k) {
            arr[y][x] = num++;
        }

        --x;
        ++y;
        --x_max;

        for (; y < y_max && k < numbers; ++y, ++k) {
            arr[y][x] = num++;
        }

        --y;
        --x;
        ++y_min;

        for (; x >= x_min && k < numbers; --x, ++k) {
            arr[y][x] = num++;
        }

        ++x;
        --y;
        ++x_min;

        for (; y >= y_min && k < numbers; --y, ++k) {
            arr[y][x] = num++;
        }

        ++y;
        ++x;
        --y_max;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << std::setw(4) << arr[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}