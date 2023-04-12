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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        a--;
        b++;
        ListNode* tail = list2;
        while(tail->next != NULL){
            tail = tail->next;
        }
        ListNode* h1 = list1;
        ListNode* t1 = list1;
        while(a--) h1 = h1->next;
        while(b--) t1 = t1->next;
        h1->next = list2;
        tail->next = t1;
        return list1;
    }
};