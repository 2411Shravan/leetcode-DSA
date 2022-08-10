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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* convertListIntoBST(vector<int>& sortedArray, int left, int right){
        if(left>right){
            return NULL;
        }
        int mid=(left+right)/2;
        TreeNode* node= new TreeNode(sortedArray[mid]);
        node->left=convertListIntoBST(sortedArray,left,mid-1);
        node->right=convertListIntoBST(sortedArray,mid+1,right);
        return node;
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp=head;
        vector<int> sortedArray;
        while(temp!=NULL){
            sortedArray.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<sortedArray.size();i++){
            cout<<sortedArray[i]<<endl;
        }
        return convertListIntoBST(sortedArray,0,sortedArray.size()-1);
    }
};