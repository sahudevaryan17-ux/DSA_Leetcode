/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    //conditions - 1.koi bhi node ho sakta hai
    //2. no head
    //3.vo dle ho jaye ya na ho bus uski val nhi honi chahiye 
    //node null na ho aue node ke age null na ho 
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = NULL;
        while(node != NULL && node -> next != NULL ){
            node -> val = node -> next -> val;
            prev = node;
            node = node -> next; 
        }
        prev -> next = NULL;
        delete(node);
    }
};
