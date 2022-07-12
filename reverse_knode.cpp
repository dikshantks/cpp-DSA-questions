#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    };
};

void insert_attail(node *head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = n;
    }
}

void display(node *head)
{
    if (head == NULL)
    {
    }
}

int main()
{

    node *head = NULL;

    insert_attail(head, 2);
    insert_attail(head, 2);
    insert_attail(head, 2);
    insert_attail(head, 2);
    insert_attail(head, 2);
    insert_attail(head, 2);
    insert_attail(head, 2);
    insert_attail(head, 2);

    return 0;
}