#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <random>
#include <vector>

#include "utils.hpp"

using namespace std;

bool naiveSearch(const vector<int> & v, int x) {
    return find(v.begin(), v.end(), x) != v.end();
}

double optimSearch(const vector<int> & v, int x) {
    // TODO use std::binary_search
    const bool nimpe1 = find(v.begin(), v.end(), x) != v.end();
    const bool nimpe2 = find(v.begin(), v.end(), x) != v.end();
    return nimpe1 and nimpe2;
}

int main(int argc, char ** argv) {

    if (argc != 7) {
        cout << "usage: " << argv[0] << " <n0> <n1> <step> <naive|optim> <seed> <nbruns>" << endl;
        exit(-1);
    }
    const int N0 = atoi(argv[1]);
    const int N1 = atoi(argv[2]);
    const int STEP = atoi(argv[3]);
    const string ALGO(argv[4]);
    const int SEED = atoi(argv[5]);
    const int NBRUNS = atoi(argv[6]);

    function<bool(const vector<int>&, int)> f;
    if (ALGO == "naive")
        f = naiveSearch;
    else if (ALGO == "optim")
        f = optimSearch;
    else {
        cout << "invalid algo" << endl;
        exit(-1);
    }

    mt19937 gen(SEED);

    for (int n=N0; n<=N1; n+=STEP) {
        uniform_int_distribution<int> dist(1, 2*n);
        vector<int> v(n);
        iota(v.begin(), v.end(), 1);

        // warm-up
        {
            int nb_found = 0;
            for (int i=0; i<NBRUNS; i++) {
                const int x = dist(gen);
                if (f(v, x))
                    nb_found++;
            }
        }

        // run
        const auto t0 = now();
        int nb_found = 0;
        for (int i=0; i<NBRUNS; i++) {
            const int x = dist(gen);
            if (f(v, x))
                nb_found++;
        }
        const auto t1 = now();
        const double r = nb_found / double(NBRUNS);
        cout << n << '\t' << duration(t0, t1) << '\t' << r << endl;
    }
    cout << endl;

    return 0;
}

