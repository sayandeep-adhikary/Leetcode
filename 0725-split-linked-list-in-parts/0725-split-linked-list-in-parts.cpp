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
        ListNode* temp = head;
        while(temp != NULL){
            l++;
            temp = temp->next;
        }
        return l;
    }
    void insertAtEnd(int data, ListNode* &head, ListNode* &tail){
        ListNode* temp = new ListNode(data);
        if(head == NULL){
            head = tail = temp;
            temp->next = NULL;
            return;
        }
        tail->next = temp;
        temp->next = NULL;
        tail = temp;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        int l = getLength(head);
        ListNode* temp = head;
        int b=l%k;
        for(int i=1; i<=k; i++){
            ListNode* ansHead = NULL;
            ListNode* tail = NULL;
            int t = l/k;
            if(i<=b) t++;
            while(t--){
                insertAtEnd(temp->val, ansHead, tail);
                temp = temp->next;
            }
            ans.push_back(ansHead);
        }
        return ans;
    }
};