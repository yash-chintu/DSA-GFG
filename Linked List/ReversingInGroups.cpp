    struct node *reverse (struct node *head, int k)
    { 
     if(!head)
     return NULL;
     node *curr=head;
     node *prev=NULL;
     node *nxt=NULL;
     int count=0;
     while(count<k&&curr){
         nxt=curr->next;
         curr->next=prev;
         prev=curr;
         curr=nxt;
         count++;
     }
     if(nxt!=NULL)
     head->next=reverse(nxt,k);
     return prev;
     
    }
