// Time: O(sum of node depths) O(nlogn) for balanced O(n^2) for skewed
// Space: O(h)

int check(TreeNode* root, int sum, int val){
    if(root == NULL) return 0;
    val += root->val;
    return (sum == val) + check(root->left, sum, val)
        + check(root->right, sum, val);
}
int pathSum(TreeNode* root, int sum) {
    if(root == NULL) return 0;
    return check(root, sum, 0) + 
        pathSum(root->left, sum) + pathSum(root->right, sum);
}
