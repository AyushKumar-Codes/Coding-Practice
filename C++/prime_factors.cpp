#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> pr;

    for (int i = 2; i < 200; i++) {
        int c = 0;
        for (int j = 2; j <i; j++) {
            if (i % j == 0) {
                c++;
                break; 
            }
        }
        if (c == 0) {
            pr.push_back(i);
        }
    }

    for (int i = 0; i < n; i++) {
        int num = v[i];
        cout << num << " = ";
        for (int j : pr) {
            while (num % j == 0) {
                cout << j << " ";
                num /= j;
            }
        }
        if (num > 1) {
            cout << num << " "; // If num is still greater than 1, it's a prime factor itself
        }
        cout << endl;
    }

    return 0;
}
