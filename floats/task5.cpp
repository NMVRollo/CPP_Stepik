#include <iostream>

int main() {
    int p, x, y, k;
    constexpr double percent = 100;
    constexpr double coins_in_rub = 100;

    std::cin >> p >> x >> y >> k;

    double rate = p / percent;
    double deposit = x + y / coins_in_rub;

    while (k--) {
        deposit += deposit * rate;
        deposit = static_cast<int> (deposit * 100) / coins_in_rub;
    }

    int rub = static_cast<int> (deposit);
    int coins = static_cast<int> (deposit * 100) % 100;

    std::cout << rub << ' ' << coins;

    return 0;
}