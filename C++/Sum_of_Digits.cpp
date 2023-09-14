#include<iostream>
#include<string>
using namespace std;
int sumOfDigits(int num);
int main(){
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
    return 0;
}
int sumOfDigits(int num){
    string n=to_string(num);
    int sum=0;
    for(char c:n){
        sum += c-'0';
    }
    return 0;
}