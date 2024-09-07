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
    void insertAtEnd(ListNode* &head, ListNode* &tail, int data){
        ListNode* node = new ListNode(data);
        if(head == NULL){
            head = tail = node;
            return;
        }
        tail->next = node;
        tail = node;
    }
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* ansHead = NULL;
        ListNode* tail = NULL;
        ListNode* odd = head;
        ListNode* even = head->next;
        while(odd != NULL){
            insertAtEnd(ansHead, tail, odd->val);
            if(odd->next)
            odd = odd->next->next ? odd->next->next : NULL;
            else odd = NULL;
        }
        while(even != NULL){
            insertAtEnd(ansHead, tail, even->val);
            if(even->next)
            even = even->next->next ? even->next->next : NULL;
            else even = NULL;
        }
        return ansHead;
    }
};