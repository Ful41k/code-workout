/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev;
        ListNode* curr;
        ListNode* nextT;

        prev = nullptr;
        curr = head;
        //nextT = curr->next;

        // 1 -> 2 -> 3 -> 4 -> 5

        while(curr != nullptr) {
            nextT = curr->next; // nextT = 2
            curr->next = prev; // 1 -> NULL
            prev = curr;
            curr = nextT;  // curr=2
        }
        return prev;
    }
};