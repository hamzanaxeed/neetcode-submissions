class Solution {
public:
    void reorderList(ListNode* head) {

        if (!head || !head->next)
            return;

        // Step 1: Find the middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Split the list
        ListNode* second = slow->next;
        slow->next = nullptr;

        // Step 3: Reverse the second half
        ListNode* prev = nullptr;
        while (second) {
            ListNode* nextNode = second->next;
            second->next = prev;
            prev = second;
            second = nextNode;
        }

        // prev is the head of the reversed second half

        // Step 4: Merge the two halves
        ListNode* first = head;
        second = prev;

        while (second) {
            ListNode* next1 = first->next;
            ListNode* next2 = second->next;

            first->next = second;
            second->next = next1;

            first = next1;
            second = next2;
        }
    }
};