// Time: O(n)
// Spac: O(n)

bool isPalindrome(ListNode* head) {
    stack<int> st;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* temp = head;
    while(temp != slow){
        st.push(temp->val);
        temp = temp->next;
    }
    if(fast)
        slow = slow->next;
    while(slow){
        if(slow->val != st.top()){
            return false;
        }
        st.pop();
        slow = slow->next;
    }
    return true;
}

// Time: O(n)
// Space: O(1)

ListNode* reverse(ListNode *head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        ListNode* first = NULL;
        ListNode* second = NULL;
        if(fast){
            second = slow->next;
        }else{
            second = slow;
        }
        prev->next = NULL;
        first = head;
        first = reverse(first);
        while(first != NULL){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
