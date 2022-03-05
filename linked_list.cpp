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
    cout << "NULL" << endl;
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

node *reverse(node *&head)
{

    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->nextptr;

        currentptr->nextptr = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
    }

    return prevptr;
}

node *REC_reverse(node *&head)
{
    if (head->nextptr == NULL || head == NULL)
    {
        return head;
    }

    node *newhead = REC_reverse(head->nextptr);
    head->nextptr->nextptr = head;
    head->nextptr = NULL;
    return newhead;
}

node *reverse_Knode(node *&head, int k)
{

    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;
    int counter = 0;

    while (currentptr != 0 && counter < k)
    {
        nextptr = currentptr->nextptr;
        currentptr->nextptr = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
        counter++;
    }
    if (nextptr != NULL)
    {
        head->nextptr = reverse_Knode(nextptr, k);
    }

    return prevptr;
}

void make_cylce(node *&head, int n)
{

    node *temp = head;
    node *startnode;

    int count = 1;
    while (temp->nextptr != NULL)
    {
        if (count == n)
        {
            startnode = temp;
        }
        temp = temp->nextptr;
        count++;
    }

    temp->nextptr = startnode;
}

bool floyd_detect(node *&head)
{

    node *slowptr = head;
    node *fastptr = head;

    bool is_cycle = false;

    while (fastptr != NULL)
    {
        slowptr = slowptr->nextptr;
        fastptr = fastptr->nextptr->nextptr;
        if (fastptr == slowptr)
        {
            is_cycle = true;
            return is_cycle;
        }
        is_cycle = false;
    }

    return is_cycle;
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

    insert_attail(head, 5);
    insert_attail(head, 7);
    insert_attail(head, 4);
    display(head);

    make_cylce(head, 3);

    cout << floyd_detect(head);

    return 0;
}