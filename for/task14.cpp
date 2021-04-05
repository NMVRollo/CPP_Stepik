#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::vector<int> keg;
    std::vector<int> throws;

    std::cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        keg.push_back(0);
    }

    for (int i = 0; i < k; ++i) {
        int f, l;

        std::cin >> f >> l;
        throws.push_back(f);
        throws.push_back(l);
    }

    for (int i = 0; i < throws.size(); i += 2) {
        for (int j = throws[i] - 1; j < throws[i + 1]; ++j) {
            keg[j] = 1;
        }
    }

    for (int i = 0; i < keg.size(); ++i) {
        if (!keg[i]) {
            std::cout << 'I';
        }
        else {
            std::cout << '.';
        }
    }

    return 0;
}