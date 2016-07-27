/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool risBalanced(struct TreeNode *root, int* height)
{
  /* lh --> Height of left subtree 
     rh --> Height of right subtree */   
  int lh = 0, rh = 0;  
 
  /* l will be true if left subtree is balanced 
    and r will be true if right subtree is balanced */
  int l = 0, r = 0;
     
  if(root == NULL)
  {
    *height = 0;
     return 1;
  }
 
  /* Get the heights of left and right subtrees in lh and rh 
    And store the returned values in l and r */   
  l = risBalanced(root->left, &lh);
  r = risBalanced(root->right,&rh);
 
  /* Height of current node is max of heights of left and 
     right subtrees plus 1*/   
      *height = (lh > rh? lh: rh) + 1;
     
  /* If difference between heights of left and right 
     subtrees is more than 2 then this node is not balanced
     so return 0 */
  if((lh - rh >= 2) || (rh - lh >= 2))
    return 0;
     
  /* If this node is balanced and left and right subtrees 
    are balanced then return true */
  else return l&&r;
}
int Solution::isBalanced(TreeNode* A) {
    int h=0;
    return risBalanced(A,&h);
    
}

