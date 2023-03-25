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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* temp1;
        ListNode* temp2;
        ListNode* dummy;
        temp1 = head;
        temp2 = head->next;
        dummy = temp2;
        while(temp2 != NULL and temp2->next != NULL){
            temp1->next = temp2->next;
            temp1 = temp1->next;
            temp2->next = temp1->next;
            temp2 = temp2->next;
        }
        temp1->next = dummy;
        return head;;
    }
};