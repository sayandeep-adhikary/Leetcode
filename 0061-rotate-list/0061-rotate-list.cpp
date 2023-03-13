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
    pair<ListNode*, ListNode*> lastNode(ListNode* &head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        return make_pair(prev, curr);
    }
    int getLength(ListNode* head){
        int l=0;
        ListNode* curr = head;
        while(curr != NULL){
            l++;
            curr = curr->next;
        }
        return l;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        else if(head->next == NULL) return head;
        int length = getLength(head);
        for(int i=0; i<k%length; i++){
            ListNode* prev = lastNode(head).first;
            ListNode* curr = lastNode(head).second;
            prev->next = NULL;
            curr->next = head;
            head = curr;
        }
        return head;
    }
};