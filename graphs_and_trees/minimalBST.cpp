// Time: O(n)
// Space: O(logn)

TreeNode* createBST(vector<int> &nums, int start, int end){
    if(start > end) return NULL;
    int mid = (start+end)/2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = createBST(nums, start, mid-1);
    root->right = createBST(nums, mid+1, end);
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
    int n = nums.size();
    int start = 0;
    int end = n-1;
    return createBST(nums, start, end);
}
