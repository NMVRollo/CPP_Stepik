#include <iostream>
#include <iomanip>

int main() {
    int n_sec;
    int h, m, s;

    std::cin >> n_sec;

    s = n_sec % 60;
    m = n_sec / 60 % 60;
    h = n_sec / 3600 % 24;

    std::cout << h << ':' << std::setfill('0') << std::setw(2) << m << ':' << std::setfill('0') << std::setw(2) << s;

    return 0;
}