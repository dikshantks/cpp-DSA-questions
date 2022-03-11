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

    if (head != NULL)
    {
        head->prevptr = n;
    }

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

void display(node *&head)
{
    if (head == NULL)
    {
        return;
        /* code */
    }
    node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << "->";

        temp = temp->nextptr;
        /* code */
    }
    cout << " NULL" << endl;
}

void delete_it(node *&head, int pos)
{

    node *temp = head;
    int count = 1;

    if (head == NULL)
    {
        return;
    }

    while (temp != NULL && count != pos)
    {
        temp = temp->nextptr;
        count++;
    }

    node *to_delete = temp;

    temp->prevptr->nextptr = temp->nextptr;
    temp->nextptr->prevptr = temp->prevptr;

    delete to_delete;
}

node *append_k(node *&head, int k)
{
}

int main()
{

    node *head = NULL;

    insert_at_tail(head, 3);
    insert_at_head(head, 5);
    insert_at_tail(head, 4);
    insert_at_tail(head, 7);
    insert_at_tail(head, 8);
    display(head);

    delete_it(head, 3);

    display(head);
    return 0;
}