#include <iostream>

int main() {
    int V, T;
    const int S = 109;

    std::cin >> V >> T;

    int stop = V * T % S;
    stop = (S + stop) % S;

    std::cout << stop;

    return 0;
}