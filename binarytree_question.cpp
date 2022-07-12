#include <iostream>
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

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);

    if (left != NULL && right != NULL)
    {
        return root;
    }
    if (left == NULL && right == NULL)
    {
        return NULL;
    }
}

int distacne_between_node(Node *root, int n1, int n2)
{

    Node *lca = LCA(root, n1, n2);

    int d1 = find_dist(lca, n1, 0);
    int d2 = find_dist(lca, n2, 0);
}

int find_dist(Node *lca, int n1, int n2)
{
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return 0;
}