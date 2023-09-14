#include <iostream>
using namespace std;

class money {
    int ru, pa;

public:
    money(int x, int y) {
        ru = x;
        pa = y;
    }

    double rupee() {
        return ((ru * 100.0) + pa) / 100.0;
    }
};

int main() {
    int r, p, r1, p1;
    cin >> r >> p >> r1 >> p1;

    money m1(r, p);

    money m2(r1, p1);

    cout << m1.rupee() + m2.rupee();
    return 0;
}
