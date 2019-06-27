// Time: O(1)
// Space: O(1)

void deleteNode(Node* node){
    Node* next = node->next;
    node->val = next->val;
    node->next = next->next;
    free(next);
}
