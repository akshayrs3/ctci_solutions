// Time: O(m+n)
// Space: O(1)

int length(ListNode* head){
    int n = 0;
    ListNode* temp = head;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int m = length(headA);
    int n = length(headB);
    ListNode* temp1 = headA;
    ListNode* temp2 = headB;
    while(m > n){
        temp1 = temp1->next;
        m--;
    }
    while(n > m){
        temp2 = temp2->next;
        n--;
    }
    while(temp1 && temp2){
        if(temp1 == temp2) return temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return NULL;
}
