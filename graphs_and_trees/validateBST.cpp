// Time: O(n)
// Space: O(h)

bool isBST(TreeNode* root, int min, int max){
  if(root == NULL) return true;
  if(root->val <= min || root->val > max) return false;
  return isBST(root->left, min, root->val) && isBST(root->right, root->val, max);
}

bool validateBST(TreeNode* root){
  return isBST(root, INT_MIN, INT_MAX);
}
