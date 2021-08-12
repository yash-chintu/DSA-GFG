    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        bool loop=false;
        Node *slow=head;
        Node *fast=head;
        while(slow&&fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                loop=true;
                break;
            }
        }
        if(!loop){
            return ;
        }
        Node *ptr1=slow;
        Node *ptr2=slow;
        int k=1,i;
        while(ptr1->next!=ptr2){
            ptr1=ptr1->next;
            k++;
        }
        ptr1=ptr2=head;
        for(i=0;i<k;i++){
            ptr2=ptr2->next;
        }
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        while(ptr2->next!=ptr1){
            ptr2=ptr2->next;
        }
        ptr2->next=NULL;
        return;
    }
