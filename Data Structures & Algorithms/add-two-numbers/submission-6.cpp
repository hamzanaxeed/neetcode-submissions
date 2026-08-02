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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        int carry=0;
        int hund=1;

        while(l1 && l2){
            
            // cout<<l1->val<<"  "<<l2->val<<endl;
            temp->next=new ListNode(((carry+l1->val + l2->val) %10));
            carry =((carry+l1->val + l2->val)/10);
            l1=l1->next;
            l2=l2->next;
            temp=temp->next;
        }

        while(l1){
            // cout<<"l1"<<l1->val<<"  "<<carry<<endl;
            temp->next=new ListNode(((carry+l1->val)%10));
            carry=(carry+l1->val) /10; 
            l1=l1->next;
            temp=temp->next;
        }
        while(l2){
            // cout<<"l2"<<l2->val<<endl;
            temp->next=new ListNode(((carry+l2->val) %10));
            carry=(carry+l2->val) /10; 
            l2=l2->next;
            temp=temp->next;
        }
        
        if(carry){
            temp->next=new ListNode(carry);
        }

        return dummy->next;
    }
};
