// Time: O(n)
// Space: O(1)
// Maintains relative order of nodes.

ListNode* partition(ListNode* head, int x) {
    ListNode left(0);
    ListNode right(0);
    ListNode* l = &left;
    ListNode* r = &right;
    while(head){
        if(head->val < x){
            l->next = head;
            l = l->next;
        }else{
            r->next = head;
            r = r->next;
        }
        head = head->next;
    }
    l->next = right.next;
    r->next = NULL;
    return left.next;
}
