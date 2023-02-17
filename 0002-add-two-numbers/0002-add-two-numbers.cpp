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
    ListNode* head = NULL;
private:
    void insertAtEnd(ListNode* &head, int d){
        ListNode* temp = new ListNode;
        temp->val = d;
        if(head == NULL){
            head = temp;
            temp->next = NULL;
        }
        else{
            ListNode* curr = head;
            while(curr->next != NULL){
                curr = curr->next;
            }
            curr->next = temp;
            temp->next = NULL;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // long long int num1 = 0;
        // long long int num2 = 0;
        // ListNode* temp1 = l1;
        // ListNode* temp2 = l2;
        // int i = 0, j = 0;
        // while(temp1 != NULL){
        //     int digit = temp1->val;
        //     num1 += (digit * (pow(10, i++)));
        //     temp1 = temp1->next;
        // }
        // while(temp2 != NULL){
        //     int digit = temp2->val;
        //     num2 += (digit * pow(10, j++));
        //     temp2 = temp2->next;
        // }
        // cout<<"Num1 = "<<num1<<" num2 = "<<num2<<endl;
        // long long int sum = num1 + num2;
        // cout<<"Sum = "<<sum<<endl;
        // return ans(head, sum);
        int carry = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while(l1 != NULL and l2 != NULL){
            int digit = l1->val + l2->val + carry;
            if(digit >= 10){
                digit = digit % 10;
                carry = 1;
            }
            else carry = 0;
            insertAtEnd(head, digit);
            l1 = l1->next;
            l2 = l2->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1 != NULL){
            while(temp1 != NULL){
                int digit = temp1->val + carry;
                if(digit >= 10){
                digit = digit % 10;
                carry = 1;
                }
                else carry = 0;
                insertAtEnd(head, digit);
                temp1 = temp1->next;
            }
        }
        if(temp2 != NULL){
            while(temp2 != NULL){
                int digit = temp2->val + carry;
                if(digit >= 10){
                digit = digit % 10;
                carry = 1;
                }
                else carry = 0;
                insertAtEnd(head, digit);
                temp2 = temp2->next;
            }
        }
        if(carry == 1){
            insertAtEnd(head, 1);
        }
        return head;
    }
};