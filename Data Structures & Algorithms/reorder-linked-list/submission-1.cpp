class Solution {
public:
    void reorderList(ListNode* head) {

       if(!head || !head->next)return;
       
       ListNode* slow=head;
       ListNode* fast=head;

       while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
       }
       
       ListNode* temp1=slow->next;
       slow->next=nullptr;

       ListNode* previous=nullptr;
       ListNode* current=temp1;

       while(current){

        ListNode* next_Node=current->next;
        current->next=previous;
        previous=current;
        current=next_Node;
       }

       ListNode* first = head;
       ListNode* second = previous;

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