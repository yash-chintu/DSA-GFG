  struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL||head->next==NULL)
        return head;
        Node *curr=head;
        Node *prev=NULL;
        Node *nxt=head->next;
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt)
            nxt=nxt->next;
        }
        return prev;
    }
