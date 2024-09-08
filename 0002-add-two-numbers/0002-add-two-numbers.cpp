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
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0;
        while(first != NULL or second != NULL){
            int sum = 0;
            if(first) sum += first->val;
            if(second) sum += second->val;
            sum += carry;
            ListNode* temp = new ListNode(sum%10);
            curr->next = temp;
            curr = temp;
            carry = sum/10;
            if(first) first = first->next;
            if(second) second = second->next;
        }
        if(carry == 1) curr->next = new ListNode(1);
        return dummy->next;
    }
};