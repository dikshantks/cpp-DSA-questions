#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node *root)
{

    // PRINT AND GO TO LEFT IF NULL THEN PRING THE RIGHT ONE AND GO BACK

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " > ";

    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);

    postorder(root->right);
    cout << root->data << " ";
}
//////////////////\/\//\/\\/\/\/\/\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\//\/
/////////////////\/\//\/\\/\/\/\/\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\/\/

int search(
    int inorder[], int start, int end, int curr)
{
    for (int i = start; i < end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }

    return -1;
};

Node *build_treePREORDER(int preorder[], int inorder[], int start, int end)
{

    if (start > end)
    {
        return NULL;
    }

    static int idx = 0;

    int curr = preorder[idx];

    idx++;

    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    int pos = search(inorder, start, end, curr);

    node->left = build_treePREORDER(preorder, inorder, start, pos - 1);

    node->right = build_treePREORDER(preorder, inorder, pos + 1, end);

    return node;
};

void pronit_levelorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *node = q.front();

        q.pop();
        if (node != NULL)
        {
            cout << node->data << " ";
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right); /* code */
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
};

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorder(root);
    cout << endl;

    inorder(root);

    cout << endl;
    postorder(root);

    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    cout << endl;
    pronit_levelorder(root);

    cout << endl;

    return 0;
}
