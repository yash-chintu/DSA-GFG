class Solution
{
public:
    Node *deleteNode(Node *head_ref, int x)
    {
        Node *tmp = head_ref;
        if (tmp == NULL)
            return NULL;

        while (x > 1)
        {
            --x;
            tmp = tmp->next;
        }
        if (tmp == head_ref)
            head_ref = head_ref->next;
        else
            tmp->prev->next = tmp->next;
        return head_ref;
    }
};