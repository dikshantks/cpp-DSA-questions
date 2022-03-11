#include <iostream>

#include <vector>
#include <algorithm>

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
int length_of_LL(node *head)
{
    node *temp = head;
    int count = 0;

    if (head == NULL)
    {

        return count;
    }

    while (temp != NULL)
    {

        temp = temp->nextptr;
        count++;
    }

    return count;
}
int intersect(node *&head1, node *&head2)
{

    int l1 = length_of_LL(head1);
    int l2 = length_of_LL(head2);
    int diff = 0;

    node *ptr1;
    node *ptr2;
    if (l1 >= l2)
    {
        diff = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        ptr1 = head2;
        ptr2 = head1;
        diff - l2 - l1;
    }
    for (int i = diff; i > 0; i--)
    {
        return 1;
    }
}

vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{

    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);

        swap(a[i], a[idx]);
    }
    return;
}
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int m;

        cin >> m;
        a.push_back(m);
    }

    cout << endl;

    permute(a, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}