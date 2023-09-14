void insert(node* & h,int n){
    node* t;
    t=h;
    if(h==nullptr){
        h= new node;
        h->data=n;
        h->next=nullptr;
    }
    else{
    while(t->next!=nullptr){
        t=t->next;
    }
    node * insert=new node;
    insert->data=n;
    insert->next=nullptr;
    t->next=insert;
        
    }
}