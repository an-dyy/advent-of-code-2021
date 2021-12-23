#include <iostream>
#include <cctype>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>

#include "helper.hpp"

using namespace std;

vector<string> aoc::Helper::getLines(string path) {
    vector<string> lines;
    ifstream file(path);

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}


vector<int> aoc::Helper::intLines(string path) {
    vector<int> lines;
    ifstream file(path);

    string line;
    while (getline(file, line)) {
        lines.push_back(stoi(line));
    }

    file.close();
    return lines;
}

vector<string> aoc::Helper::splitLines(string line, char delimiter) {
    vector<string> tokens;
    istringstream stream(line);

    string token;
	while (getline(stream, token, delimiter)) {
        tokens.push_back(token);
	}

    return tokens;
}
