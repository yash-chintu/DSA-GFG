    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
    struct Node* temp=new Node(x);
	//temp= new Node();
	//temp->data=x;
	temp->next=head;
	return temp;
       // Your code here
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
    Node *temp=new Node(x);
    temp->next=NULL;
    if(head==NULL){
        return temp;
    }
    Node *head_=head;
    while(head->next)
    head=head->next;
    head->next=temp;
    return head_;
    }
