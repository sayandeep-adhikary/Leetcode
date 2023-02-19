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
private:
    void insertAtEnd(ListNode* &head, int val){
        ListNode* temp = new ListNode;
        temp->val = val;
        if(head == NULL){
            head = temp;
            temp->next = NULL;
            return;
        }
        ListNode* curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = NULL;
    }
public:
    ListNode* removeElements(ListNode* Head, int val) {
        // vector<int>v;
        // ListNode* temp = Head;
        // while(temp != NULL){
        //     if(temp->val != val){
        //         v.push_back(temp->val);
        //     }
        //     temp = temp->next;
        // }
        // for(auto it : v){
        //     insertAtEnd(head, it);
        // }
        // return head;
        ListNode* temp = new ListNode;
        temp->next = Head;
        ListNode* curr = temp;
        while(curr->next != NULL){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            }
            else curr = curr->next;
        }
        return temp->next;
    }
};