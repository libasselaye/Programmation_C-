#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

#include "utils.hpp"

using namespace std;

int main() { 

    const int N1 = 1e5;
    const int NBRUNS = 1e3;

    {
        timePoint_t t0 = now();
        for (int n=0; n<NBRUNS; n++) {
            vector<int> v;
            v.reserve(N1);
            for (int i=0; i<N1; i++)
                v.push_back(i);
        }
        timePoint_t t1 = now();
        cout << "with reserve: " << duration(t0, t1) << endl;
    }

    {
        timePoint_t t0 = now();
        for (int n=0; n<NBRUNS; n++) {
            vector<int> v;
            for (int i=0; i<N1; i++)
                v.push_back(i);
        }
        timePoint_t t1 = now();
        cout << "w/o reserve: " << duration(t0, t1) << endl;
    }

    return 0;
}

