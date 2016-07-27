/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int>vals;
    if(A==NULL)return vals;
    stack<TreeNode*>s;
    TreeNode* current=A;
    s.push(current);
    while(!s.empty()){
        current=s.top();
        vals.push_back(current->val);
        s.pop();
        if(current->right){s.push(current->right);}
        if(current->left){s.push(current->left);}
    }
    return vals;
}

