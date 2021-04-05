#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>

double dist_calc(double x, double y) {
    return sqrt(x * x + y * y);
}

void fill_vector_pair(std::vector<std::pair<std::pair<double, double>, double>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        double x, y;

        std::cin >> x >> y;
        v.push_back(std::make_pair(std::make_pair(x, y), dist_calc(x, y)));
    }
}

bool cmp_dist(const std::pair<std::pair<double, double>, double> &f, const std::pair<std::pair<double, double>, double>& s) {
    return f.second < s.second;
}

void print_vector_pair(const std::vector<std::pair<std::pair<double, double>, double>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].first.first << ' ' << v[i].first.second << std::endl;
    }
}

int main() {
    int n;
    std::vector<std::pair<std::pair<double, double>, double>> v;

    std::cin >> n;
    fill_vector_pair(v, n);
    stable_sort(v.begin(), v.end(), cmp_dist);
    print_vector_pair(v);

    return 0;
}