#include "../helper.hpp"

using namespace std;
aoc::Helper helper;


int solveInput(vector<string> lines, int start, int back) {
    int increased = 0;
    
    for (int idx = start; idx < lines.size(); ++idx) {
        if (stoi(lines[idx]) > stoi(lines[idx - back])) {
            ++increased;
        }
    }

    return increased;
}


int main() {
    vector<string> lines = helper.getLines("./input.txt");

    printf("Part 1: %i\n", solveInput(lines, 1, 1));
    printf("Part 2: %i\n", solveInput(lines, 3, 3));

    return 0;
}
