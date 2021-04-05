#include <iostream>
#include <map>
#include <vector>
#include <string>

std::vector<std::string> get_translate() {
    const char delim = ',';
    std::vector<std::string> v;
    std::string tr;
    int prev_pos = 0, pos = 0;

    std::getline(std::cin, tr);
    while ((pos = tr.find(delim, prev_pos)) != std::string::npos) {
        v.push_back(tr.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 2;
    }

    v.push_back(tr.substr(prev_pos, tr.size() - prev_pos));

    return v;
}

std::map<std::string, std::vector<std::string>>& fill_map(std::map<std::string, std::vector<std::string>>& m, int n) {
    std::string s;
    char delim;

    for (int i = 0; i < n; ++i) {
        std::cin >> s >> delim;
        std::cin.get();
        m[s] = get_translate();
    }

    return m;
}

std::map<std::string, std::vector<std::string>> eng_to_lat(const std::map<std::string, std::vector<std::string>>& m) {
    std::map<std::string, std::vector<std::string>> tmp;

    for (std::map<std::string, std::vector<std::string>>::const_iterator it = m.begin(); it != m.end(); ++it) {
        for (int i = 0; i < it->second.size(); ++i) {
            tmp[it->second[i]].push_back(it->first);
        }
    }

    return tmp;
}

int main() {
    int n;
    std::map<std::string, std::vector<std::string>> eng_lat;
    std::map<std::string, std::vector<std::string>> lat_eng;

    std::cin >> n;
    eng_lat = fill_map(eng_lat, n);
    lat_eng = eng_to_lat(eng_lat);

    std::cout << lat_eng.size() << std::endl;
    for (std::map<std::string, std::vector<std::string>>::const_iterator it = lat_eng.begin(); it != lat_eng.end(); ++it) {
        std::cout << it->first << " - ";
        for (int i = 0; i < it->second.size(); ++i) {
            std::cout << it->second[i];
            if (i + 1 < it->second.size()) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}