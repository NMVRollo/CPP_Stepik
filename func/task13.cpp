#include <iostream>
#include <algorithm>

int ball_fall(int eggs, int floors) {
    if (eggs == 1)
        return floors;

    if (floors <= 2)
        return floors;

    int min_drops = -1;
    for (int floor = 1; floor < floors; ++floor) {
        int max_drop_below = ball_fall(eggs - 1, floor - 1);
        int max_drop_above = ball_fall(eggs, floors - floor);
        int max_k = std::max(max_drop_below, max_drop_above);

        if (min_drops == -1 || min_drops > max_k) {
            min_drops = max_k;
        }
    }

    return min_drops + 1;
}

int main() {
    const int balls = 2;
    int n;

    std::cin >> n;
    std::cout << ball_fall(balls, n - 1) << std::endl;

    return 0;
}