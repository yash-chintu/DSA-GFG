Node* sortedMerge(Node* a, Node* b)  
{  
    // code here
    Node *head=NULL;
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    if(a->data<b->data){
        head=new Node(a->data);
        head->next=NULL;
        a=a->next;
    }
    else{
        head=new Node(b->data);
        head->next=NULL;
        b=b->next;
    }
     Node*iter=head;
     while(a&&b){
         if(a->data<b->data){
             Node*temp=new Node(a->data);
             temp->next=NULL;
             iter->next=temp;
             iter=iter->next;
             a=a->next;
         }
         else{
             Node*temp=new Node(b->data);
             temp->next=NULL;
             iter->next=temp;
             iter=iter->next;
             b=b->next;
         }
     }
     if(a){
         iter->next=a;
     }
     if(b){
         iter->next=b;
     }
     return head;
}  
