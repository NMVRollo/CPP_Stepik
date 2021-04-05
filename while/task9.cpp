#include <iostream>

int main() {
    int n;
    int max = -1;
    int s_max = -1;

    while (std::cin >> n && n != 0) {
        if (max <= n) {
            s_max = max;
            max = n;
        }
        else if (s_max < n) {
            s_max = n;
        }
    }

    std::cout << s_max;

    return 0;
}