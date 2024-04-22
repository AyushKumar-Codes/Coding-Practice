#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    int arr1[5];
    for (int &height : arr1) {
        cin >> height;
    }

    sort(arr1, arr1 + 5, greater<int>());

    int arr2[10001];
    memset(arr2, -1, sizeof(arr2));
    arr2[0] = 0;

    for (int b = 1; b <= a; ++b) {
        for (int c : arr1) {
            if (b - c >= 0 && arr2[b - c] != -1) {
                arr2[b] = max(arr2[b], arr2[b - c] + 1);
            }
        }
    }

    if (arr2[a] == -1) {
        cout << "Impossible";
        return 0;
    }

    map<int, int> arr3;
    while (a > 0) {
        for (int c : arr1) {
            if (a - c >= 0 && arr2[a] == arr2[a - c] + 1) {
                arr3[c]++;
                a -= c;
                break;
            }
        }
    }

    vector<pair<int, int>> arr4(arr3.begin(), arr3.end());
    sort(arr4.begin(), arr4.end(), [](const pair<int, int>& d, const pair<int, int>& e) {
        return d.second == e.second ? d.first < e.first : d.second > e.second;
    });

    for (size_t i = 0; i < arr4.size(); ++i) {
        cout << arr4[i].first;
        if (i < arr4.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}
