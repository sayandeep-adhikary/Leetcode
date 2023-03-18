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
    void createList(ListNode* &ansHead, int d, ListNode* &tail){
        ListNode* temp = new ListNode();
        temp->val = d;
        if(ansHead == NULL){
            ansHead = temp;
            temp->next = NULL;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
        temp->next = NULL;
    }
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int>v;
        ListNode* ansHead = NULL;
        ListNode* tail = NULL;
        ListNode* curr = head->next;
        int sum = 0;
        while(curr != NULL){
            if(curr->val != 0){
                sum += curr->val;
            }
            else{
                v.push_back(sum);
                sum = 0;
            }
            curr = curr->next;
        }
        for(auto it : v){
            createList(ansHead, it, tail);
        }
        return ansHead;
    }
};