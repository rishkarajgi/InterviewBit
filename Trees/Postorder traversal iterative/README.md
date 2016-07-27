/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int>vals;
    if(A==NULL)return vals;
    
    stack<TreeNode*>s;
    stack<TreeNode*>output;
    TreeNode* current = A;
    s.push(A);
    while(!s.empty()){
        current = s.top();
        output.push(current);
        s.pop();
        if(current->left){s.push(current->left);}
        if(current->right){s.push(current->right);}
    }
    while(!output.empty()){
        current = output.top();
        vals.push_back(current->val);
        output.pop();
    }
    return vals;
}

