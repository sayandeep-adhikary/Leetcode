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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* temp = head;
        while(temp != NULL and temp->next != NULL){
            int a = temp->val;
            int b = temp->next->val;
            ListNode* fwd = temp->next;
            ListNode* node = new ListNode(__gcd(a, b));
            temp->next = node;
            node->next = fwd;
            temp = fwd;
        }
        return head;
    }
};