#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void append(node* & h, int d){
    if (h == NULL) {
        h=new node(d);
    }
    else{
        node* temp=h;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        node* nnode=new node(d);
        temp->next=nnode;
    }
}
void display(node* h){
    while(h!=nullptr){
        cout<<h->data<<" ";
        h=h->next;
    }
}
int main(){
    int n,n1;
    cin>>n;
    node* head=NULL;
    for(int i=0;i<n;i++){
        cin>>n1;
        for(int j=0;j<n1;j++){
            int num;
            cin>>num;
            append(head,num);
        }
    }
    display(head);
}