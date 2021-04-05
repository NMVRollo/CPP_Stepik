#include <iostream>

int main() {
    int prev = -1;
    int cur = -1;

    bool prev_gr = false;
    int cnt = 0;

    while (std::cin >> cur && cur != 0) {
        if (prev != -1) {
            if (prev < cur && !prev_gr) {
                prev_gr = true;
            }
            else if (prev_gr) {
                if (cur < prev) {
                    ++cnt;
                    prev_gr = false;
                }
                else if (cur == prev) {
                    prev_gr = false;
                }
            }
            else {
                prev_gr = false;
            }
        }

        prev = cur;
    }
    /*
    if (std::cin >> prev && prev != 0) {
        if (cin >> cur && cur != 0) {
            int next;
            if (cin >> next) {
                while (next != 0) {
                    if (prev < cur && cur > next) {
                        ++cnt;
                    }
                    prev = cur;
                    cur = next;
                    cin >> next;
                }
            }
        }
    }*/

    std::cout << cnt;

    return 0;
}