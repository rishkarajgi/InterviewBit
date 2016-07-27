/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode *buildTreeTmp(
 vector<int>::iterator prel, 
 vector<int>::iterator prer, 
 vector<int>::iterator inl, 
 vector<int>::iterator inr){
            if (prel >= prer)
                return NULL;

            int val = *prel;
            TreeNode *root = new TreeNode(val);

            vector<int>::iterator rootIndex = find(inl, inr, val); 
            vector<int>::size_type lsize = rootIndex - inl;

            root->left = buildTreeTmp(prel + 1, prel + 1 + lsize, inl, rootIndex);
            root->right = buildTreeTmp(prel + 1 + lsize, prer, rootIndex + 1, inr);

            return root;
        }
TreeNode* Solution::buildTree(vector<int> &preorder, vector<int> &inorder) {
    
    return preorder.size() == 0 ? NULL : buildTreeTmp(preorder.begin(), preorder.end(), inorder.begin(), inorder.end());

}

