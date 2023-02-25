/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* detectloop(ListNode *&head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow!=NULL and fast!=NULL)
        {
            fast = fast->next;
            if(fast!=NULL)fast = fast->next;
            slow = slow->next;
            if(fast == slow){
                return slow;
            }
        }
        return NULL;
    }
    ListNode* loopNode(ListNode *head){
        ListNode* fast = detectloop(head);
        if(fast == NULL) return NULL;
        ListNode* slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        return loopNode(head);
    }
};