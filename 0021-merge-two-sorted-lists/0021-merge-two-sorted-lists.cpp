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
    ListNode* head = NULL;
    void insertAtEnd(ListNode* &head, int val){
        ListNode* temp = new ListNode;
        temp->val = val;
        if(head == NULL){
            head = temp;
            temp->next = NULL;
            return;
        }
        ListNode* curr = head;
        while(curr->next != NULL) curr = curr->next;
        curr->next = temp;
        temp->next = NULL;
    }
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        while(l1 != NULL and l2 != NULL){
            if(l1->val < l2->val){
                insertAtEnd(head, l1->val);
                l1 = l1->next;
            }
            else if(l1->val > l2->val){
                insertAtEnd(head, l2->val);
                l2 = l2->next;
            }
            else{
                insertAtEnd(head, l1->val);
                insertAtEnd(head, l2->val);
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        while(l1 != NULL){
            insertAtEnd(head, l1->val);
            l1 = l1->next;
        }
        while(l2 != NULL){
            insertAtEnd(head, l2->val);
            l2 = l2->next;
        }
        return head;
    }
};