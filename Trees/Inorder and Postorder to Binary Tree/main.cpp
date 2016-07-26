/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode * rbuildTree(vector<int> &inorder, int inStart, int inEnd,
		vector<int> &postorder, int postStart, int postEnd) {
	if (inStart > inEnd || postStart > postEnd)
		return NULL;
 
	int rootValue = postorder[postEnd];
	TreeNode *root = new TreeNode(rootValue);
 
	int k = 0;
	for (int i = 0; i < inorder.size(); i++) {
		if (inorder[i] == rootValue) {
			k = i;
			break;
		}
	}
 
	root->left = rbuildTree(inorder, inStart, k - 1, postorder, postStart,
			postStart + k - (inStart + 1));
	// Becuase k is not the length, it it need to -(inStart+1) to get the length
	root->right = rbuildTree(inorder, k + 1, inEnd, postorder, postStart + k- inStart, postEnd - 1);
	// postStart+k-inStart = postStart+k-(inStart+1) +1
 
	return root;
}
TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &postorder) {
    
    int inStart = 0;
	int inEnd = inorder.size() - 1;
	int postStart = 0;
	int postEnd = postorder.size() - 1;
 
	return rbuildTree(inorder, inStart, inEnd, postorder, postStart, postEnd);
    
}

