#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *nextptr;

    node(int val)
    {
        data = val;
        nextptr = NULL;
    }
};

void insert_athead(node *&head, int val)
{

    node *n = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        n->nextptr = n;
        head = n;
        return;
    }

    while (temp->nextptr != head)
    {
        temp = temp->nextptr;
    }
    temp->nextptr = n;
    n->nextptr = head;

    head = n;
}

void insert_attail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        insert_athead(head, val);
        return;
    }

    node *temp = head;

    while (temp->nextptr != head)
    {
        temp = temp->nextptr;
    }

    temp->nextptr = n;

    n->nextptr = head;
}
void display(node *head)
{
    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->nextptr;
    } while (temp != head);

    cout << "NULL" << endl;
}

void delete_it(node *&head, int pos)
{
    node *temp = head;

    int count = 1;

    if (head == NULL)
    {
        return;
        /* code */
    }

    if (head->nextptr == NULL)

    {
        delete head;
        return;
    }

    while (temp->nextptr != NULL && count != pos)
    {
        temp = temp->nextptr;
        count++;
    }

    node *to_delete = temp->nextptr;
    node *prevptr = temp;
    prevptr->nextptr = temp->nextptr->nextptr;

    delete to_delete;
}

int main()
{

    node *head = NULL;

    insert_attail(head, 1);
    insert_attail(head, 2);
    insert_attail(head, 3);
    insert_attail(head, 4);
    insert_attail(head, 5);
    insert_attail(head, 6);
    insert_attail(head, 8);

    display(head);

    // insert_athead(head, 78);

    delete_it(head, 3);
    display(head);

    return 0;
}
