#include "../helper.hpp"

using namespace std;
aoc::Helper helper;


int solveInput(vector<int> lines, int start, int back) {
    int increased = 0;
    
    for (int idx = start; idx < lines.size(); ++idx) {
        if (lines[idx] > lines[idx - back]) {
            ++increased;
        }
    }

    return increased;
}


int main() {
    vector<int> lines = helper.intLines("./input.txt");

    printf("Part 1: %i\n", solveInput(lines, 1, 1));
    printf("Part 2: %i\n", solveInput(lines, 3, 3));

    return 0;
}
