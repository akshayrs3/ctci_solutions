// Time: O(n)
// Space: O(n)

Node *removeDups(Node *head)
{
    unordered_map<int, int> map;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(map[temp->data]){
            prev->next = temp->next;
            free(temp);
            temp = prev->next;
            continue;
        }else{
            map[temp->data]++;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


// Time: O(n^2)
// Space: O(1)

Node *removeDuplicates(Node *root)
{
    Node* temp = root;
    Node* prev = NULL;
    Node* next = NULL;
    while(temp != NULL){
        next = temp->next;
        prev = temp;
        while(next != NULL){
            if(next->data == temp->data){
                prev->next = next->next;
                free(next);
                next = prev->next;
                continue;
            }
            prev = next;
            next = next->next;
        }
        temp = temp->next;
    }
    return root;
}
