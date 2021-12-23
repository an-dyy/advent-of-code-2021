#include "../helper.hpp"

using namespace std;
aoc::Helper helper;


int solveInput1(vector<string> lines) {
    int horizontal = 0, depth = 0;

    for (string command : lines) {
        vector<string> data = helper.splitLines(command, ' ');
        string direction = data[0]; int amount = stoi(data[1]);
        
        if (direction == "forward") {
            horizontal += amount;
        }

        else if (direction == "down") {
            depth += amount;
        }

        else {
            depth -= amount;
        }
    }

    return horizontal * depth;
}

int solveInput2(vector<string> lines) {
    int horizontal = 0, depth = 0, aim = 0;

    for (string command : lines) {
        vector<string> data = helper.splitLines(command, ' ');
        string direction = data[0]; int amount = stoi(data[1]);
        
        if (direction == "forward") {
            horizontal += amount;
            depth += aim * amount;
        }

        else if (direction == "down") {
            aim += amount;
        }

        else {
            aim -= amount;
        }
    }

    return horizontal * depth;
}


int main() {
    vector<string> lines = helper.getLines("./input.txt");

    printf("Part 1: %i\n", solveInput1(lines));
    printf("Part 2: %i\n", solveInput2(lines));

    return 0;
}
