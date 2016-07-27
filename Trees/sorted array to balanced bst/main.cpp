/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* toBST(const vector<int> &A, int start, int end){
    if(start>end)return NULL;
    int mid = (start+end)/2;
    TreeNode * root = new TreeNode(A[mid]);
    root->left = toBST(A,start,mid-1);
    root->right = toBST(A,mid+1,end);
    return root;
    
    
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    
    int size = A.size();
    return toBST(A,0,size-1);
}

