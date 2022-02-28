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
void insert_attail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->nextptr != NULL)
    {
        temp = temp->nextptr;
    }

    temp->nextptr = n;
}
void display(node *head)
{
    // node *temp = head;
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->nextptr;
    }
    cout << endl;
}
void delete_athead(node *&head)
{
    node *todelete = head;
    head = head->nextptr;

    delete todelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        cout << " empty lol";
        return;
    }
    if (head->nextptr == NULL)
    {
        delete_athead(head);
        return;
    }

    node *temp = head;
    while (temp->nextptr->data != val)
    {
        temp = temp->nextptr;
    }
    node *to_delet = temp->nextptr;
    temp->nextptr = temp->nextptr->nextptr;

    delete to_delet;
}

int main()
{

    node *head = NULL;

    insert_attail(head, 1);
    insert_attail(head, 2);
    insert_attail(head, 3);
    insert_attail(head, 4);
    display(head);

    deletion(head, 3);
    display(head);

    delete_athead(head);
    display(head);

    return 0;
}