/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int isSymTree(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL){
        return 1;
    }
    else if(A!=NULL && B!=NULL){
        return A->val==B->val && 
        isSymTree(A->left,B->right)&&
        isSymTree(A->right,B->left);
    }
    else return 0;
}

int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL)return 1;
    
    return isSymTree(A->left, A->right);
}

