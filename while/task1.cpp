#include <iostream>

int main() {
    int n;
    int a = 1;
    int sq = a * a;

    std::cin >> n;

    while (sq <= n) {
        std::cout << sq << ' ';
        ++a;
        sq = a * a;
    }

    return 0;
}