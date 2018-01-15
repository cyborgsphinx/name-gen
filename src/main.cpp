#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <string>

#include "phonemes.h"

using std::cout;
using std::endl;
using std::max;
using std::stoi;
using std::string;

void usage(const string& name) {
    cout << "Usage: " << name << " [# phonemes]" << endl;
}

int main(int argc, char** argv) {
    if (argc > 2) {
        usage(argv[0]);
        return 1;
    }
    unsigned num = 3;
    if (argc == 2) {
        num = max(2, stoi(argv[1]));
    }
    string out;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine rand {seed};
    for (int i = 0; i < num; i++) {
        out += phonemes::get_part(rand());
    }
    cout << out << endl;
    return 0;
}
