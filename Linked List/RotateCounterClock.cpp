 Node* rotate(Node* head, int k)
    {
        // Your code here
        if(!head||!head->next)
        return head;
        int n=0;
        Node *temp=head;
        while(temp){
            temp=temp->next;
            n++;
        }
     //  cout<<n<<endl;
        if(k>n)
        return head;
        //k=n-k;
        Node *iter=head;
        while(iter->next){
            iter=iter->next;
        }
        iter->next=head;
        Node *pre =NULL;
     //   cout<<k<<endl;
        while(k>0){
            pre=head;
            head=head->next;
            k--;
        }
        pre->next=NULL;
        return head;
       
       
       
       
    }
