----------------------->>>>>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<<<<<<---------------------------


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
    
    int getLength(ListNode* head){
        ListNode* temp = head;
        int length = 0 ; 
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return NULL;
        int length = getLength(head);
        int mid = length / 2;
        ListNode* temp = head;
        for (int i = 1; i < mid; i++) {
            temp = temp->next;
        }

        // Deleting the middle node
        temp->next = temp->next->next;

        return head;
    }
};


------------------->>>>>>>>>>>>>>>>>>> Approach-2 <<<<<<<<<<<<<<<<<<<<<<<<------------------------

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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;

        if(head->next ==NULL){ 
            head = NULL;
            return head;
        }

        while(fast!=NULL && fast->next !=NULL){
            temp = slow;
            slow = slow->next;
            fast= fast->next->next;
        }
        temp->next = slow->next;
        slow = NULL;
        return head;
    }
};