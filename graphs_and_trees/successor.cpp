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

// Time: O(h)
// Space: O(1)
// Without parent links
Node * inOrderSuccessor(Node *root, Node *x)
{
    Node* inOrder = NULL;
    if(x->right){
        inOrder = leftMost(x->right);
    }else{
        while(root){
            if(root->data > x->data){
                inOrder = root;
                root = root->left;
            }else if(root->data < x->data){
                root = root->right;
            }else{
                return inOrder;
            }
        }
    }
    return inOrder;
}
