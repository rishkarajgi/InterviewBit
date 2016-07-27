/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode *getTree(vector<int>::iterator instart,
vector<int>::iterator inend)
{
    if(instart>=inend)return NULL;
    auto largest = max_element(instart,inend);
    TreeNode *node = new TreeNode(*largest);
    //vector<int>::size_type lsize = largest - instart;
    node->left = getTree(instart,largest);
    node->right = getTree(largest+1,inend);
    return node;
}
TreeNode* Solution::buildTree(vector<int> &A) {

    return getTree(A.begin(),A.end());    
}

