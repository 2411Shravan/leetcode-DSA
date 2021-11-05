// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

// Return the decimal value of the number in the linked list.

 

// Example 1:


// Input: head = [1,0,1]
// Output: 5
// Explanation: (101) in base 2 = (5) in base 10
// Example 2:

// Input: head = [0]
// Output: 0
// Example 3:

// Input: head = [1]
// Output: 1
// Example 4:

// Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
// Output: 18880
// Example 5:

// Input: head = [0,0]
// Output: 0
 

// Constraints:

// The Linked List is not empty.
// Number of nodes will not exceed 30.
// Each node's value is either 0 or 1.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){

    int sum=0;
    int ans=0;
    
    int i=0;
    struct ListNode *pre,*ptr,*next;
	
	
	pre=NULL;
	ptr=head;
	
	while(ptr!=NULL){
		next=ptr->next;
		ptr->next=pre;
		pre=ptr;
		ptr=next;
	}
	
	head=pre;
    struct ListNode *p;
    p=head;
    while(p!=NULL){
        sum=sum+p->val;
        ans+=(p->val)*pow(2,i);
        printf("%d",ans);
        p=p->next;
        i++;
    }

    
    
    
    return ans;
}