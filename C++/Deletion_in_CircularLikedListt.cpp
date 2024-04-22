#include<iostream>
using namespace std;
class node{
    public:
    int pr;
    string pa;
    node* next;
};
void insert(node*& h,int pri,string pa){
    if(h==nullptr){
        h = new node;
        h->pr=pri;
        h->pa=pa;
        h->next=h;
    }
    else{
        node* temp=h;
        while(temp->next!=h){
            temp=temp->next;
        }
        node* nn =new node;
        nn->pr=pri;
        nn->pa=pa;
        nn->next=h;
        temp->next=nn;
    }
}
int minum(node* h){
    int m=h->pr;
    node* temp=h->next;
    while(temp!=h){
        if(m>temp->pr){
            m=temp->pr;
        }
        temp=temp->next;
    }
    return m;
}
void pop(node*& h,node* t){
    if(h==t){
        if(h->next==h){
            delete h;
        }
        else{
            node* temp = h;
            while(temp->next != h){
                temp = temp->next;
            }
            temp->next = h->next;
            delete h;
            h = temp->next;
        }
    }
    else{
    node* temp=h;
    while(temp->next!=t){
        temp=temp->next;
    }
    temp->next=t->next;
    delete t;
    }
}
int main(){
    int size;
    cin>>size;
    int n;
    cin>>n;
    cin.ignore();
    int pr;
    string pack;
    node* head=nullptr,*temp;
    for(int i=0;i<n;i++){
        cin>>pr;
        cin.ignore();
        getline(cin,pack);
        insert(head,pr,pack);
    }
    cout<<"Processing packets based on priority:\n";
    int mi;
    int c=0;
    temp=head;
    while(c<n){
        mi=minum(head);
        if(mi==temp->pr){
        cout<<"Processing packet with priority "<<mi<<" and data: "<<temp->pa<<endl;
        c++;
        node* del=temp;
        temp=temp->next;
        pop(head,del);
        }
        else{
        temp=temp->next;
        }
    }
    return 0;
}