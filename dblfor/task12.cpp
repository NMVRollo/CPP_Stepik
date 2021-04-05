#include <iostream>
#include <iomanip>

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    std::cin >> n >> m;

    int num = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i + j) % 2 == 0) {
                arr[i][j] = num++;
            }
            else {
                arr[i][j] = 0;
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