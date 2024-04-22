// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of char: ";
//     cin>>n;
//     char arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[n];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

void print(vector<char> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void combinations(vector<char> v, int x, int start, vector<char> result) {
    if (x == 0) {
        print(result);
        return;
    }
    for (int i = start; i <= v.size() - x; i++) {
        result.push_back(v[i]);
        combinations(v, x - 1, i + 1, result);
        result.pop_back();
    }
}

int main() {
    int n, x;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> x;
    vector<char> result;
    combinations(v, x, 0, result);
    return 0;
}

