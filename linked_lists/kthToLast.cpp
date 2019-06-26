// Time: O(n)
// Space: O(1)

node* kthToLast(node* head, int k){
    node* temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    } 
    k = n - k;
    temp = head;
    while(--k){
        temp = temp->next;
    }
    return temp;
}


//Optimal
// Time: O(n) one pass
// Space: O(1)

node* kthFromLast(Node *head, int k)
{
    Node *slow = head;
    Node *fast = head;
    int i=1;
    while((i < k) && (fast->next != NULL)){
        i++;
        fast = fast->next;
    }
    if(i < k){
        return NULL;
    }
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
