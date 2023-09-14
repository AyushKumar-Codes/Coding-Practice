#include<iostream>
using namespace std;
void sum(){
    int a=14;
    int b=45;
    cout<<"Sum of a and b is : "<<a+b<<endl;
}
void sum(int a ,int b){
    cout<<"Sum of a and b is : "<<a+b<<endl;
}
void sum(float a, float b){
    cout<<"Sum of a and b is : "<<a+b<<endl;
}
void sum(float a, int b){
    cout<<"Sum of a and b is : "<<a+b<<endl;
}
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    sum();
    sum(x,y);
    sum(x,y);
    sum(x,y);
}
