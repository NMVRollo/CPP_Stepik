#include <iostream>

int main() {
    int A, B, N;
    int k_sum;
    int r_sum;
    std::cin >> A >> B >> N;

    k_sum = B * N;
    r_sum = A * N + k_sum / 100;
    k_sum %= 100;

    std::cout << r_sum << ' ' << k_sum;

    return 0;
}