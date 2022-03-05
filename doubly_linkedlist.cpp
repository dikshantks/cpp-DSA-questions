#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *nextptr = NULL;
    node *prevptr = NULL;

    node(int val)
    {

        data = val;
        nextptr = NULL;
        prevptr = NULL;
    }
};

void insert_at_head(node *&head, int val)
{

    node *n = new node(val);

    n->nextptr = head;
    head->prevptr = n;
    head = n;
}

void insert_at_tail(node *&head, int val)

{
    node *temp = head;
    node *n = new node(val);

    if (head == NULL)
    {
        insert_at_head(head, val);
        return;
    }

    while (temp->nextptr != NULL)
    {
        temp = temp->nextptr;
    }
    temp->nextptr = n;
    n->prevptr = temp;
}

int main()
{

    node *head = NULL;

    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    return 0;
}