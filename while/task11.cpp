#include <iostream>

int main() {
    int a;
    int n = 1;
    int f_0 = 0;
    int f_1 = 1;

    std::cin >> a;

    while (f_1 < a) {
        int tmp = f_1;

        ++n;
        f_1 += f_0;
        f_0 = tmp;
    }

    if (f_1 == a) {
        std::cout << n;
    }
    else {
        std::cout << -1;
    }

    return 0;
}