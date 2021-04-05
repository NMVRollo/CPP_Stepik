#include <iostream>

int main() {
    double num;

    std::cin >> num;

    std::cout << num - static_cast<int> (num);

    return 0;
}