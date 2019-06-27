// Time: O(max(m, n))
// Space:O(max(m, n))


ListNode* createNode(int x){
    ListNode* node = new ListNode(x);
    return node;
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode res(0);
    ListNode* fin = &res;
    int sum = 0;
    int carry = 0;
    while(l1 || l2){
        if(l1){
            sum += l1->val;
            l1 = l1->next;
        } 
        if(l2){
            sum += l2->val;
            l2 = l2->next;
        }
        sum = sum + carry;
        fin->next = createNode(sum % 10);
        fin = fin->next;
        carry = sum / 10;
        sum = 0;
    }
    if(carry){
        fin->next = createNode(carry);
        fin = fin->next;
    }
    return res.next;
}
