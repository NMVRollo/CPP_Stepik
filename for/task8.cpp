#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> st;

    std::cin >> q;

    for (int i = 0; std::cin >> q; ++i) {
        st.push_back(q);
    }

    int cnt = 1;
    for (int i = 1; i < st.size(); ++i) {
        if (st[i - 1] != st[i]) {
            ++cnt;
        }
    }

    std::cout << cnt;

    return 0;
}