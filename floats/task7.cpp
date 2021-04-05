#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int num;
    int cnt = 0;
    int sum = 0;
    int double_x = 0;
    double mean;
    double st_dev;

    while (std::cin >> num && num != 0) {
        ++cnt;
        double_x += num * num;
        sum += num;
    }

    mean = static_cast<double> (sum) / cnt;

    st_dev = sqrt((double_x - 2 * mean * sum + cnt * mean * mean) / (cnt - 1));

    std::cout << std::setprecision(11);
    std::cout << st_dev;

    return 0;
}