#include <iostream>

using namespace std;
typedef struct node{
    int data;
    node *next;
}node;
node *create(int val)
{
    node *ptr=new node;//dynamically allocating space
    ptr->data=val;
    ptr->next=NULL;
    return ptr;
}
void traverse(node *head)
{
    node *ptr=head;
    cout<<"the linked list is:"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
node *insertAtBeg(node *head,int val)
{
    node *ptr=new node;
    ptr->data=val;
    ptr->next=head;
    head=ptr;
    return head;
}
node *insertAtEnd(node *head,int val)
{
    node *ptr1=new node;
    ptr1=head;
    while(ptr1->next!=NULL)
     ptr1=ptr1->next;
    node *ptr2=new node;
    ptr2->data=val;
    ptr2->next=NULL;
    ptr1->next=ptr2;
    return head;
}
node *insertAtPos(node *head,int val,int pos)
{
    if(pos<1)
    {
        cout<<"invalid position";
        return head;
    }
    if(pos==1)
    return insertAtBeg(head,val);
    node *ptr1=new node;
    ptr1=head;
    node *ptr2=new node;
    ptr2->data=val;
    ptr2->next=NULL;
    
    while(--pos>1)
      ptr1=ptr1->next;
      
     ptr2->next=ptr1->next;
     ptr1->next=ptr2;
     return head;
}
node *deleteAtBeg(node *head)
{
    if(head==NULL)
    {
        cout<<"underflow!";
        return head;
    }
    node *ptr=new node;
    ptr=head;
    head=head->next;
    delete ptr;
    return head;
}
node *deleteAtEnd(node *head)
{
    if(head==NULL)
    {
        cout<<"underflow!";
        return NULL;
    
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    node *ptr1=new node;
    ptr1=head;
    while(ptr1->next->next!=NULL)
      ptr1=ptr1->next;
    node *ptr2=new node;
    ptr2=ptr1->next;
    delete ptr2;
    ptr1->next=NULL;
    return head;
}
node *deleteAtPos(node *head,int pos)
{
    if(head==NULL)
    {
        cout<<"underflow";
        return head;
    }
    if(pos<1)
    {
        cout<<"invalid position";
        return head;
    }
    if(pos==1)
      return deleteAtBeg(head);
    node *ptr1=new node;
    ptr1=head;
   pos--;
    while(pos>1)
    {
        ptr1=ptr1->next;
        pos--;
    }
    node *ptr2=new node;
    ptr2=ptr1->next;
    ptr1->next=ptr2->next;
    delete ptr2;
    return head;
}
int search(node *head,int ele)
{
    node *ptr=new node;
    ptr=head;
    int pos=0;
    while(ptr!=NULL)
    {
        pos++;
        if(ptr->data==ele)
          return pos;
        ptr=ptr->next;
    }
    return 0;
}
node *concatenate(node *head1,node *head2)
{
    node *ptr=new node;
    ptr=head1;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=head2;
    return head1;
}
void reverse(node *head)
{
    node *current=new node;
    node *prev=new node;
    node *next=new node;
    prev=NULL;
    next=NULL;
    current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        
    }
    head=prev;
    traverse(head);
}
int main()
{
    node *head=new node;
    head=create(81);
    traverse(head);
    head=insertAtBeg(head,45);
    traverse(head);
    head=insertAtEnd(head,50);
    traverse(head);
    head=insertAtPos(head,25,3);
    traverse(head);
    //head=deleteAtBeg(head);
    //traverse(head);
    //head=deleteAtEnd(head);
    //traverse(head);
   // head=deleteAtPos(head,2);
    //traverse(head);
    int pos=search(head,25);
    if(pos>0)
    cout<<"found at :"<<pos<<endl;
    else
    cout<<"not found"<<endl;
    reverse(head);
    return 0;
}