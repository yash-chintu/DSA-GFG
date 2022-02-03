
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node * iter=head->next;
    int n=1;
    while(iter!=head){
        n++;
        iter=iter->next;
    }
    Node *iter1 =head;
    Node *pred=NULL;
    int i=n/2;
    if(n%2)
    i++;
    while(i){
        pred=iter1;
        iter1=iter1->next;
        i--;
    }
    *head1_ref=iter;
    pred->next=*head1_ref;
    *head2_ref=iter1;
    while(iter1->next!=head){
        iter1=iter1->next;
    }
    iter1->next=*head2_ref;
    return ;  
}