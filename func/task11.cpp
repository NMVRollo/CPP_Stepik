#include <iostream>

int sum_seq() {
    int num;

    std::cin >> num;

    return num == 0 ? num : num + sum_seq();
}

int main() {
    std::cout << sum_seq();

    return 0;
}