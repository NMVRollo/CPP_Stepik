#include <iostream>

int main() {
    int n;
    int f_0 = 0;
    int f_1 = 1;

    std::cin >> n;

    while (--n) {
        int tmp = f_1;

        f_1 += f_0;
        f_0 = tmp;
    }

    std::cout << f_1;

    return 0;
}