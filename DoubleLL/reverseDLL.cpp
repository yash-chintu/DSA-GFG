Node *reverseDLL(Node *head)
{
    if (!head)
        return NULL;
    Node *iter = head;
    Node *pred;
    while (iter)
    {
        pred = iter;
        iter = iter->next;
        pred->next = pred->prev;
        pred->prev = iter;
    }

    return pred;
}