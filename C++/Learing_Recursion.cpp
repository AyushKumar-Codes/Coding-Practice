#include<iostream>
using namespace std;
void recum (int a){
    if(a>10||a==8){
        return;
    }
    cout<<a<<"\n";
    recum(a+1);
}
int main(){
    int a;
    cin>>a;
    recum(a);
    return 0;
}
