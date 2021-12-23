#pragma once

#include <iostream>
#include <fstream>
#include <vector>

namespace aoc {
    class Helper {
        public:
            std::vector<std::string> getLines(std::string path);
            std::vector<int> intLines(std::string path);
    };
}
