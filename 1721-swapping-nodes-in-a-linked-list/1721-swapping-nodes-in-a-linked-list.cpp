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
    int getLength(ListNode* head){
        int count = 0;
        ListNode* curr = head;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        return count;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        //T.C = O(n), S.C = O(n);
        // vector<int>v;
        // ListNode* curr = head;
        // ListNode* ansHead = NULL;
        // ListNode* tail = NULL;
        // while(curr != NULL){
        //     v.push_back(curr->val);
        //     curr = curr->next;
        // }
        // swap(v[k-1], v[v.size() - k]);
        // cout<<endl;
        // for(auto it : v){
        //     createList(ansHead, it, tail);
        // }
        // return ansHead;
        //***********************************
        //T.C = O(n), S.C = O(1);
        int l = getLength(head);
        ListNode* first = head;
        ListNode* second = head;
        for(int i=1; i<k; i++) first = first->next;
        for(int i=1; i<l-k+1; i++) second = second->next;
        int temp1 = first->val;
        int temp2 = second->val;
        first->val = temp2;
        second->val = temp1;
        return head;
    }
};