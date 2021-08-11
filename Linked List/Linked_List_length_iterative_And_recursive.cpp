int getCount(struct Node* head)
    {
        int count=0;
     while(head)
     {
         count++;
         head=head->next;
     }
     return count;
    }

int getCount(struct Node* head)
    {
      if(head->next==NULL){
          return 1;
      }
      return 1+getCount(head->next);
      
    }
