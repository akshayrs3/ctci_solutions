// Time: O(n)
// Space: O(level with max nodes)

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int> > res;
    if(!root){
        return res;
    }
    queue<TreeNode*> q;
    TreeNode* temp;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> nodes(n);
        for(int i=0;i<n;i++){
            temp = q.front();
            nodes[i] = temp->val;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            q.pop();
        }
        res.push_back(nodes);
    }

    return res;
}
