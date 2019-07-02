// Time: O(h)
// Space: O(1)
// With parent links

Node* inOrderSuccessor(Node* root, int x){
    Node* temp = root;
    while(temp && temp->val != x){
        if(temp->val > x) temp = temp->right;
        else temp = temp->left;
    }
    if(temp == NULL) return temp;
    // temp is the node who's successor needs to be found
    if(!temp->right){
        Node* inorder = temp->parent;
        while(inOrder && inorder < temp){
            inOrder = inOrder->parent;
        }
    }
    else{
        inOrder = temp->right;
        while(inOrder->left){
            inOrder = inOrder->left;
        }
    return inOrder;
}
