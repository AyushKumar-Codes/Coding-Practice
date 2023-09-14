#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node * next;
};
int main(){
    int n;
    node obj;
    obj.data=9;
    node* ptr= new node;
    ptr->data=0;
    cout<<obj.data;
    cout<<ptr->data;

}