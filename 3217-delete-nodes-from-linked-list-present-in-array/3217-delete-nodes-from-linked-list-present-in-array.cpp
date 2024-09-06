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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(auto it : nums) st.insert(it);
        ListNode* ansHead = new ListNode(-1);
        ListNode* temp = ansHead;
        while(head){
            if(st.count(head->val) == 0){
                temp->next = new ListNode(head->val);
                temp = temp->next;
            }
            head = head->next;
        }
        return ansHead->next;
    }
};