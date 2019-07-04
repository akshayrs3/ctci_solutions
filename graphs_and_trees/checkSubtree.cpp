// Time: O(n * m) but average is O(n + m) because it exits as soon as a diff is found in subtrees.
// Space: O(h)

bool isSameTree(TreeNode* s, TreeNode* t){
    if(s == NULL && t == NULL) return true;
    if(s == NULL || t == NULL) return false;
    return s->val == t->val && isSameTree(s->left, t->left)
        && isSameTree(s->right, t->right);
}
bool isSubtree(TreeNode* s, TreeNode* t) {
    if(t == NULL) return true;
    if(s == NULL) return false;
    if(isSameTree(s, t))
        return true;
    return isSubtree(s->left, t)
        || isSubtree(s->right, t);
}
