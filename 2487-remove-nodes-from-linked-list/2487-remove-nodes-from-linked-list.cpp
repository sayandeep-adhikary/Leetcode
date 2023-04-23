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
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    void insertAtBeginning(ListNode* &head, int val){
        ListNode* temp = new ListNode(val);
        if(head == NULL){
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* ans = reverse(head);
        // while(ans != NULL){
        //     cout<<ans->val<<" ";
        //     ans = ans ->next;
        // }
        ListNode* ansHead = NULL;
        int maxi = INT_MIN;
        while(ans != NULL){
            if(ans->val >= maxi){
                insertAtBeginning(ansHead, ans->val);
                maxi = ans->val;
            }
            ans = ans->next;
        }
        return ansHead;
    }
};