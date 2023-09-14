#include<iostream>
using namespace std;
class node{
    public:
    static int a;
};
int node::a=10;
int main(){
    int a=9;
    cout<<node::a;
    return 0;
}