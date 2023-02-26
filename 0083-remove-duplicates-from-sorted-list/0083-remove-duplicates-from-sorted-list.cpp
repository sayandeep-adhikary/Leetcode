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
    ListNode* ans = NULL;
    ListNode* curr = NULL;
private:
    void insert(int d){
        ListNode* temp = new ListNode;
        temp->val = d;
        if(ans == NULL){
            ans = temp;
            temp->next = NULL;
            curr = temp;
            return;
        }
        ListNode* Curr = ans;
        while(Curr->next  != NULL) Curr = Curr->next;
        Curr->next = temp;
        temp->next = NULL;
        curr = temp;
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp != NULL){
            if(ans == NULL or curr->val < temp->val){
                insert(temp->val);
            }
            temp = temp->next;
        }
        return ans;
    }
};