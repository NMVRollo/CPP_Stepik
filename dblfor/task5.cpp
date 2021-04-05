#include <iostream>

int main() {
    const int size = 10;
    int arr[size][size];
    int n;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }

    bool sym = true;

    for (int i = 0; i < n && sym; ++i) {
        for (int j = 1; j < n && sym; ++j) {
            if (arr[i][j] != arr[j][i]) {
                sym = false;
            }
        }
    }

    if (sym) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}