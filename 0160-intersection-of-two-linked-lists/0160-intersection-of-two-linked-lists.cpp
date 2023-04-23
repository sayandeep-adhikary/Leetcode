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
    int getLength(ListNode* head){
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        int l1 = getLength(headA);
        int l2 = getLength(headB);
        if(l1 >= l2){
            int diff = l1 - l2;
            for(int i=0; i<diff; i++) t1 = t1->next;
        }
        else{
            int diff = l2 - l1;
            for(int i=0; i<diff; i++) t2 = t2->next;
        }
        while(t1 != NULL and t2 != NULL){
            if(t1 == t2){
                return t1;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        return NULL;
    }
};