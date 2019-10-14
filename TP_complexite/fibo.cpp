#include <functional>
#include <iostream>
#include <vector>

using namespace std;

uint64_t NB_ADDS;

int naiveFibo(int n) {
    if (n<2) {
        return n;
    }
    else {
        NB_ADDS++;
        return naiveFibo(n-1) + naiveFibo(n-2);
    }
}

int optimFibo(int) {
    // TODO
    return 0;
}

int main(int argc, char ** argv) {

    if (argc != 5) {
        cout << "usage: " << argv[0] << " <n0> <n1> <step> <naive|optim>" << endl;
        exit(-1);
    }
    const int N0 = atoi(argv[1]);
    const int N1 = atoi(argv[2]);
    const int STEP = atoi(argv[3]);
    const string ALGO(argv[4]);

    function<int(int)> f;
    if (ALGO == "naive")
        f = naiveFibo;
    else if (ALGO == "optim")
        f = optimFibo;
    else {
        cout << "invalid algo" << endl;
        exit(-1);
    }

    for (int n=N0; n<=N1; n+=STEP) {
        NB_ADDS = 0;
        const int r = f(n);
        cout << n << '\t' << NB_ADDS << '\t' << r << endl;
    }
    cout << endl;

    return 0;
}

