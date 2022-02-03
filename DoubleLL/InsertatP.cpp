int i = 0;
Node *temp = new Node(data);
Node *h = head;
if (head == NULL)
{
    head = temp;
}
while (i != pos)
{
    h = h->next;
    i++;
}
temp->next = h->next;
temp->prev = h;
h->next = temp;
return;