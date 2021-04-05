#include <iostream>

int main() {
    const int size = 100;
    int arr[size][size];
    int n, k;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }

    std::cin >> k;

    int i_k = 0, j_k = 0;

    if (k > 0) {
        i_k += k;
    }
    else if (k < 0) {
        j_k -= k;
    }

    for (int i = i_k, j = j_k; i < n && j < n; ++i, ++j) {
        std::cout << arr[i][j] << ' ';
    }

    return 0;
}