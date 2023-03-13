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
private:
    int getLength(ListNode* head){
        int l = 0;
        while(head != NULL){
            l++;
            head = head->next;
        }
        return l;
    }
    ListNode* deleteNode(ListNode* head, int n){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(n--){
            prev = curr;
            curr = curr->next;
        }
        if(prev == NULL){
            head = curr->next;
            curr->next = NULL;
            delete curr;
        }
        else{
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
        return head;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = getLength(head);
        if(l == 1) return NULL;
        return deleteNode(head, l-n);
    }
};