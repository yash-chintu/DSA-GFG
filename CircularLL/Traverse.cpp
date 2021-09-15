void printList(struct Node *head)
{
  // code here
  Node* temp=head;
  while(temp->next!=head){
      cout<<temp->data<<" ";
      temp=temp->next;
  }
 cout<<temp->data<<" ";
  return;
}
