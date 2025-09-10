#include <bits/stdc++.h>
#include <vector>
using namespace std;

// <Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  vector<int> ans;
  vector<int> postorderTraversal(TreeNode *root) {
    if (root == nullptr)
      return {};
    if (root->left != nullptr)
      postorderTraversal(root->left);
    if (root->right != nullptr)
      postorderTraversal(root->right);
    ans.emplace_back(root->val);

    return ans;
  }
};