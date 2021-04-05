#include <iostream>

int main() {
    int n, m, k;

    std::cin >> n >> m >> k;

    int square = n * m;
    bool enough = k <= square;
    int rem = square - k;

    if (enough && (rem % n == 0 || rem % m == 0)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}