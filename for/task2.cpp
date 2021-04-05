#include <iostream>
#include <vector>
#include <iterator>

int main() {
    int q;
    std::vector<int> st;

    std::cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        std::cin >> tmp;

        if (tmp % 2 == 0) {
            st.push_back(tmp);
        }
    }

    copy(st.begin(), st.end(), std::ostream_iterator<int> {std::cout, " "});

    return 0;
}