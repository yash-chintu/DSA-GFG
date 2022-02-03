class Solution
{
public:
    Node *sortedInsert(Node *head, int data)
    {
        Node *new_node = new Node(data);
        if (!head)
        {
            new_node->next = new_node;
            return new_node;
        }
        Node *iter;
        if (data < head->data)
        {
            iter = head;
            while (iter->next != head)
            {
                iter = iter->next;
            }
            iter->next = new_node;
            new_node->next = head;
            return new_node;
        }
        iter = head->next;
        Node *pred = head;
        while (data > iter->data && iter != head)
        {
            pred = iter;
            iter = iter->next;
        }
        pred->next = new_node;
        new_node->next = iter;
        return head;
    }
};