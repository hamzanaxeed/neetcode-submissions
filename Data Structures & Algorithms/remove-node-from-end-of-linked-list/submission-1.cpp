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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        cout<<count<<endl;

        int to_Remove=count-n;

        if (to_Remove == 0) {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        count=0;
        ListNode* previous;
        temp=head;
        while(count!=to_Remove){
            count++;
            previous=temp;
            temp=temp->next;
        }

        if(previous)previous->next=temp->next;
        delete temp;

        return head;
    }
};
