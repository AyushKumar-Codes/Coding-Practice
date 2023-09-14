#include<iostream>
#include<string>
using namespace std;
void reverseNumber (string n){
    char temp;
    for(int i=0;i<n.length()/2;i++){
        temp=n[i];
        n[i]=n[n.length()-i-1];
        n[n.length()-i-1]=temp;
    }
    cout<<stoi(n);
}
int main(){
    string num;
    cin>>num;
    reverseNumber(num);
    return 0;
}