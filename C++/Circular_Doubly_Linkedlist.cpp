#include<iostream>
using namespace std;
class node{
    public:
    node* prev;
    int data;
    node* next;
};
void printprev(node* h){
    node* temp=h->prev;
    while(temp!=h){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}
void printnext(node* h){
    node* temp=h->next;
    while(temp!=h){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n;
    cin>>n;
    node* head,*temp,*prev;
    if(!n){
        head=nullptr;
    }
    else{
        head=new node;//This is called sentinal node or dummy node which is used to find the head or completion of a iteration
        prev=head;
        temp=head;
        for(int i=0;i<n;i++){
            node* nnode=new node;
            cin>>nnode->data;
            nnode->next=head;
            nnode->prev=prev;
            prev=nnode;
            temp->next=nnode;
            temp=temp->next;
        }
        head->prev=prev;
    }
    cout<<"Linked List: ";
    printnext(head);
    cout<<endl;
    cout<<"Reverse Linkedlist: ";
    printprev(head);
    cout<<endl;
    return 0;
}