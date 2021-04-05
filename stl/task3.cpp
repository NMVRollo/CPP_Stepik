#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

void fill_vector_pair(std::vector<std::pair<int, int>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        int id, pts;

        std::cin >> id >> pts;
        v.push_back(std::make_pair(id, pts));
    }
}

void print_vector_pair(const std::vector<std::pair<int, int>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].first << ' ' << v[i].second << std::endl;
    }
}

bool comp_pair(const std::pair<int, int> &f, const std::pair<int, int> &s) {
    bool first_gr_second = false;

    if (f.second != s.second) {
        first_gr_second = f.second > s.second;
    }
    else {
        first_gr_second = f.first < s.first;
    }

    return first_gr_second;
}

int main() {
    int n;
    std::vector<std::pair<int, int>> participant;

    std::cin >> n;
    fill_vector_pair(participant, n);
    sort(participant.begin(), participant.end(), comp_pair);
    print_vector_pair(participant);

    return 0;
}
