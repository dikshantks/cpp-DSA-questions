#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int minDepth(TreeNode *root)
{

    if (root == NULL)
    {
        return 0; // we are calculating depth from the leaf nodes
    }

    int left = minDepth(root->left);
    int right = minDepth(root->right);

    if (root->left != NULL && root->right != NULL)
    {
        return min(left + 1, right + 1);
    }

    return max(left + 1, right + 1);
}

int main()
{
    return 0;
}