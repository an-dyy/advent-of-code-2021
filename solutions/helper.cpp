#include <iostream>
#include <cctype>
#include <vector>
#include <fstream>

#include "helper.hpp"


std::vector<std::string> aoc::Helper::getLines(std::string path) {
    std::vector<std::string> lines;
    std::ifstream file(path);

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}


std::vector<int> aoc::Helper::intLines(std::string path) {
    std::vector<int> lines;
    std::ifstream file(path);

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(std::stoi(line));
    }

    file.close();
    return lines;
}
