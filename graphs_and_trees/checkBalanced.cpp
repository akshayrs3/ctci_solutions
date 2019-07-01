// Time avg O(nlogn) worst O(n^2)
// Space O(n)

int height(TreeNode* root){
    if(root == NULL)
        return -1;
    int left = height(root->left);
    int right = height(root->right);
    if(left > right)
        return 1+left;
    else
        return 1+right;
}
bool isBalanced(TreeNode* root) {
    if(root == NULL)
        return true;
    int left = height(root->left);
    int right = height(root->right);
    if(abs(left-right) > 1){
        return false;
    return isBalanced(root->left) && isBalanced(root->right);
}


// Time: O(n)
// Space: O(h)

int height(TreeNode* root){
    if(!root) return -1;
    int left = height(root->left);
    if(left == INT_MIN) return INT_MIN;
    int right = height(root->right);
    if(right == INT_MIN) return INT_MIN;
    if (abs(left-right) > 1)
        return INT_MIN;
    if(left > right)
        return 1+left;
    return 1+right;
}
bool isBalanced(TreeNode* root) {
    return height(root) != INT_MIN;
}
