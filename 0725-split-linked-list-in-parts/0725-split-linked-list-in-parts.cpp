class Solution {
private:
    // Function to get the length of the linked list
    int getLength(ListNode* head){
        int l = 0;
        ListNode* temp = head;
        while(temp != NULL){
            l++;
            temp = temp->next;
        }
        return l;
    }
    // function to insert a node at the end of a linked list
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
        vector<ListNode*>ans; // ans to be returned
        int l = getLength(head); // length stored in l
        ListNode* temp = head; // dummy node pointing on the head
        int b=l%k; // no of lists which will have one extra element
        for(int i=1; i<=k; i++){ // the ans vector always has k elements so loop will run k times
            ListNode* ansHead = NULL; // head of each linked list in the ans vector
            ListNode* tail = NULL;
            int t = l/k; // no of elements each linked list will have 
            if(i<=b) t++; // as the first b lists will have one extra node
            while(t--){
                insertAtEnd(temp->val, ansHead, tail); // inserting nodes at the end
                temp = temp->next;
            }
            ans.push_back(ansHead); // push back each linked list to the ans vector
        }
        return ans;
    }
};