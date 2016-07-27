/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int check(TreeNode *root, int &sum){
    if(root==NULL){
        return sum==0;
    }
    else{
        bool ans = 0;
        int subsum = sum - root->val;
        if ( subsum == 0 && root->left == NULL && root->right == NULL )
            return 1;
        if(root->left){
            ans = ans || check(root->left, subsum);
        }
        if(root->right){
            ans = ans || check(root->right, subsum);
        }
        return ans;
    }
    
}
int Solution::hasPathSum(TreeNode* A, int B) {
    return check(A,B);
}

