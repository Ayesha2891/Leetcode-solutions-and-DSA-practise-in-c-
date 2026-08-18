// leetcode 206: Reverse linked list. 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* newHead = reverseList(head->next);
        
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
}; 