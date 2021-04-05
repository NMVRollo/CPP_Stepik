#include <iostream>
#include <cstdlib>
#include <algorithm>

int main() {
    int n, m, x, y;

    std::cin >> n >> m >> x >> y;

    int dist_l, dist_s;

    if (n > m) {
        dist_l = std::min(abs(n - y), y);
        dist_s = std::min(abs(m - x), x);
    }
    else {
        dist_l = std::min(abs(m - y), y);
        dist_s = std::min(abs(n - x), x);
    }

    if (dist_l < dist_s) {
        std::cout << dist_l;
    }
    else {
        std::cout << dist_s;
    }

    return 0;
}