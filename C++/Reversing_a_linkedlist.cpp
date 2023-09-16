#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void print(node* h){
    while(h!=nullptr){
        cout<<h->data<<" ";
        h=h->next;
    }
}
node* reverse(node* h){
node* prev=nullptr,*cur=h,*next=h;
while(next!=nullptr){
    next=next->next;
    cur->next=prev;
    prev=cur;
    cur=next;
}
h=prev;
return h;
}
int main(){
    int n;
    cin>>n;
    node* head,*temp;
    if(!n){
        head=nullptr;;
    }
    else{
        head=new node;
        cin>>head->data;
        head->next=nullptr;
        temp=head;
        for(int i=1;i<n;i++){
            node* nnode=new node;
            cin>>nnode->data;
            nnode->next=nullptr;
            temp->next=nnode;
            temp=temp->next;
        }
    }
    cout<<"Current LinkedList: ";
    print(head);
    cout<<endl;
    cout<<"Reversed Lnkdelist: ";
    print(reverse(head));
    return 0;
}