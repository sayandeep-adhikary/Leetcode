/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // map<ListNode*, bool>m;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     if(m[temp] == true){
        //         return true;
        //     }
        //     m[temp] = true;
        //     temp = temp->next;
        // }
        // return false;
        // if(head == NULL) return false;
        ListNode* slow = head;
        // ListNode* fast = head;
        // while(slow!=NULL and fast != NULL){
        //     fast = fast->next;
        //     if(fast!= NULL){
        //         fast = fast->next;
        //     }
        //     slow = slow->next;
        //     if(slow == fast)return true;
        // }
        // return false;
        if(head == NULL) return false;
        ListNode *fast = head;
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                return true;
        }
        return false;
    }
};