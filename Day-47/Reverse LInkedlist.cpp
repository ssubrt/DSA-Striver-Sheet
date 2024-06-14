----------------->>>>>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<------------------------


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
     

ListNode *reverseusingRecursion(ListNode *&prev, ListNode *&curr) {
              // base case
          if (curr == NULL) {
                return prev;
           }

  ListNode *temp = curr->next;
  curr->next = prev;
  prev = curr;
  curr = temp;

  // recursion dekh lega
  return reverseusingRecursion(prev, curr);
}
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        return reverseusingRecursion(prev,curr);
    }
};







----------->>>>>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<-------------------------



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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!=NULL){
             ListNode* forward = curr->next;
             curr->next = prev;
             prev = curr;
            curr = forward;
        }
        return prev;
    }
};