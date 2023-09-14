#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
int main(){
    int n;
    cin>>n;
    node *head = new node,*temp;
    if (!n) {
        head= nullptr; 
    }
    //Head Creation.
    else{
    cin>>head->data;
    head->next=nullptr;
    temp=head;//This temp is used for linking
    for(int i=1;i<n;i++){
        node* new_node = new node;//New node creation basically next nodes to head
        cin >>new_node ->data ;  //inputting the value of each node in a list.
        new_node->next=NULL;
        temp->next=new_node;//this will link the nodes to each other first it links head
        temp=temp->next;
    }
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}