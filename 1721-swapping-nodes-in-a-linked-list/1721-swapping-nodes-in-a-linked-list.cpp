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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* curr = head;
        ListNode* ansHead = NULL;
        ListNode* tail = NULL;
        while(curr != NULL){
            v.push_back(curr->val);
            curr = curr->next;
        }
        swap(v[k-1], v[v.size() - k]);
        cout<<endl;
        for(auto it : v){
            createList(ansHead, it, tail);
        }
        return ansHead;
    }
};