#include <iostream>
#include <iomanip>

int main() {
    int cnt = 0;
    int num, seq = 0;

    while (std::cin >> num && num != 0) {
        seq += num;
        ++cnt;
    }

    std::cout << std::setprecision(11);
    std::cout << static_cast<double> (seq) / cnt;

    return 0;
}