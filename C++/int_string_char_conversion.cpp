#include<iostream>
#include<string>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void create(node*& head,int n){
    node* temp;
    if(!n){
        head=nullptr;
    }
    else{
    cin>>head->data;
    head->next=nullptr;
    temp=head;
    for(int i=1;i<n;i++){
        node* nnode = new node;
        cin>>nnode->data;
        nnode->next=nullptr;
        temp->next=nnode;
        temp=temp->next;
    }
    }
}
void print(node* head){
    if(head==nullptr){
        cout<<"Empty List!";
        return;
    }
    else{
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    }
}

string conv(node* head){
    if(head==nullptr){
        return "0";
    }
    else{
    string num="";
    while(head!=nullptr){
        num+=to_string(head->data);
        head=head->next;
    }
    return num;
    }
}
int main(){
    int n,n1;
    cin>>n;
    node* l1=new node;
    create(l1,n);
    cin>>n1;
    node* l2=new node;
    create(l2,n1);
    cout<<"First linked list: ";
    print(l1);
    cout<<"Second linked list: ";
    print(l2);
    string num1=conv(l1);
    string num2=conv(l2);
    cout<<"Total Sales: ";
    string sum=to_string(stoi(num1)+stoi(num2));
    for(int i=0;i<sum.length();i++){
        cout<<sum[i]<<" ";
    }
    return 0;
}