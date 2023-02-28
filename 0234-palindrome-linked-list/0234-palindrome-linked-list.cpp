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
    bool isPalindrome(vector<int> arr){
        int i = 0;
        int j = arr.size()-1;
        while(i<=j){
            if(arr[i] != arr[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    ListNode* mid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL and fast->next != NULL){
            fast = fast -> next -> next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* &head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        // vector<int>arr;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }
        // return isPalindrome(arr);
        //*************************************
        if(head ->next == NULL) return true;
        ListNode* middle = mid(head);
        ListNode* curr = middle->next;
        middle->next = reverse(curr);
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        while(head2 != NULL){
            if(head1->val != head2->val) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};