#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node
{
public:
    int data;

    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
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
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
};

int sumATk(Node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    if (k == 0)
    {
        return root->data;
    }

    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    vector<int> nodes;
    int sum = 0;

    int level = 0;

    while (!q.empty())
    {
        Node *node = q.front();

        q.pop();

        if (node != NULL)
        {
            if (level == k)
            {

                sum += node->data;
            }
            if (node->left)
            {
                q.push(node->left);
            }

            if (node->right)
            {
                q.push(node->right);
            }
        }

        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }

    return sum;
};

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return count_nodes(root->left) + count_nodes(root->right) + 1;
};

int SUM_OFnodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return SUM_OFnodes(root->left) + SUM_OFnodes(root->right) + root->data;
}

int clachieght(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = clachieght(root->left);
    int rheight = clachieght(root->right);

    return max(lheight, rheight) + 1;
}

// DIAMETER  = NUMBER OF NODES BETWEE NANY 2 LEAVES

int calcdiameter(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int lheight = clachieght(root->left);
    int rheight = clachieght(root->right);

    int currdiameter = lheight + rheight + 1;

    int ldiameter = calcdiameter(root->left);
    int rdiameter = calcdiameter(root->right);

    return max(currdiameter, max(lheight, rheight));
}

int optimize_diameter(Node *root, int *height)
{

    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int lh, rh = 0;
    int ldiameter = optimize_diameter(root->left, &lh);
    int rdiameter = optimize_diameter(root->right, &rh);
    int currdiameter = lh + rh + 1;

    *height = max(lh, rh) + 1;

    return max(currdiameter, max(ldiameter, rdiameter));
}
//////////////////////////////////////////////tf

////////// BAL;A;NCED HEGIHT TREE : ABSOLUTE DIFFRENCE B/W HEIGHT OF LEFT AND RIGHT SUBTREE LESS THAN ONE
// / MODULAS OF  NO OF (LEFT SUBTREE - RIGHT SUBTREE)

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right))
    {
        return false;
    }

    int lh = clachieght(root->left);
    int rh = clachieght(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void right_view(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (i == n - 1)
            {
                cout << curr->data << "-> ";
            }
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
    }
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
    cout << sumATk(root, 0) << endl;
    cout << clachieght(root) << endl;

    int height = 0;

    cout << optimize_diameter(root, &height) << endl;

    if (isBalanced(root))
    {
        cout << " balanced";
    }
    else
    {
        cout << " not balanced   " << endl;
    }

    return 0;
}