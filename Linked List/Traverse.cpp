class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
      while(head){
          cout<<head->data<<" ";
          head=head->next;
      }
      return;
    }
};
