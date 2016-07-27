/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    
    vector<int>val;
    if(A==NULL)return val;
    stack<TreeNode*>s;
    TreeNode* current = A;
    
    bool done = false;
    while(!done){
        if(current){
            s.push(current);
            current = current->left;
        }
        else{
            if(s.empty())done=true;
            else{
                current = s.top();
                s.pop();
                val.push_back(current->val);
                current = current->right;
            }
            
        }
    }
    return val;
}

