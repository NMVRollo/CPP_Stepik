#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <numeric>
#include <algorithm>

double calc_mean_pts() {
    constexpr int marks = 3;
    std::vector<int> m;
    double init = 0;

    for (int i = 0; i < marks; ++i) {
        int num;

        std::cin >> num;
        m.push_back(num);
    }

    return accumulate(m.begin(), m.end(), init) / marks;
}

void fill_vector_pair(std::vector<std::pair<std::pair<std::string, std::string>, double>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        std::string name, surname;
        double mean_pts;

        std::cin >> surname >> name;
        v.push_back(make_pair(make_pair(surname, name), calc_mean_pts()));
    }
}

bool cmp_pts(const std::pair<std::pair<std::string, std::string>, double>& f, const std::pair<std::pair<std::string, std::string>, double>& s) {
    return f.second > s.second;
}

void print_vector_pair(const std::vector<std::pair<std::pair<std::string, std::string>, double>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].first.first << ' ' << v[i].first.second << std::endl;
    }
}

int main() {
    int n;
    std::vector<std::pair<std::pair<std::string, std::string>, double>> v;

    std::cin >> n;
    fill_vector_pair(v, n);
    stable_sort(v.begin(), v.end(), cmp_pts);
    print_vector_pair(v);

    return 0;
}