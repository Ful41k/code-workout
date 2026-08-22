class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev;
        ListNode* curr;
        ListNode* nextT;

        prev = nullptr;
        curr = head;

        while(curr != nullptr) {
            nextT = curr->next; 
            curr->next = prev; 
            prev = curr;
            curr = nextT; 
        }
        return prev;
    }
};