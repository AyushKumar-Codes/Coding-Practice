#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string a,b;
    cout<<"Give input to check Palindrome ";
    getline(cin,a);
    // cin>>a;
    b=a;
    reverse(a.begin(),a.end());
    cout<<"Reverse: "<<a<<endl;
    if (a==b){
        cout << b << " is palindrome";
    }
    else{
        cout << b << " not  palindrome";
    }

}