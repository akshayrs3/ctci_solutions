// Time: O(m + n) assuming substring match is O(m)
// Space: O(max(m, n))

void preOrder(TreeNode *root, string &res){
    if(root == NULL){
        res += "null ";
        return;
    }
    res += to_string(root->val)+" ";
    preOrder(root->left, res);
    preOrder(root->right, res);
    return;
    }
bool isSubtree(TreeNode* s, TreeNode* t) {
    string str1 = "";
    string str2 = "";
    preOrder(s, str1);
    preOrder(t, str2);
    int n = str1.length();
    int m = str2.length();
    cout << str1 << endl << str2 << endl;
    for(int i=0;i<=n-m;i++){
        int j = 0;
        while(j < m && str2[j] == str1[i+j]) j++;
        if(j == m){
            if(i > 0 && str1[i-1] != ' ') return false;    
        return true;
        }
    }
    return false;
}
