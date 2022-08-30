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
    ListNode* swapPairs(ListNode* head) {
        if(!head){
            return NULL;
        }
        if(head->next==nullptr){
            return head;
        }
        ListNode* temp1=head;
         ListNode* te=head->next;
        int temp=temp1->val;
        temp1->val=te->val;
        te->val=temp;
        
        swapPairs(head->next->next);
        return head;
    }
};