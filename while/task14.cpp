#include <iostream>
#include <algorithm>

int main() {
    int prev, cur, next;
    int dist = 0;
    int cur_dist = 0;
    int min_dist = 0;

    if (std::cin >> prev && prev != 0) {
        if (std::cin >> cur && cur != 0) {
            if (std::cin >> next) {
                int pos = 2;
                while (next != 0) {
                    if (prev < cur && cur > next) {
                        if (dist != 0) {
                            cur_dist = pos - dist;
                            if (min_dist == 0) {
                                min_dist = cur_dist;
                            }
                            else {
                                min_dist = std::min(cur_dist, min_dist);
                            }
                        }

                        dist = pos;
                    }
                    ++pos;
                    prev = cur;
                    cur = next;
                    std::cin >> next;
                }
            }
        }
    }

    std::cout << min_dist;

    return 0;
}