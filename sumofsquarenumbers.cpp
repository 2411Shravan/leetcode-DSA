// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 

// Example 1:

// Input: c = 5
// Output: true
// Explanation: 1 * 1 + 2 * 2 = 5
// Example 2:

// Input: c = 3
// Output: false
// Example 3:

// Input: c = 4
// Output: true
// Example 4:

// Input: c = 2
// Output: true
// Example 5:

// Input: c = 1
// Output: true
 

// Constraints:

// 0 <= c <= 231 - 1
// Accepted
// 120,387
// Submissions
// 347,570




class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0;
        int j=sqrt(c);
        while(i<=j)
        {
            if((pow(i,2)+pow(j,2)==c)){
                return true;
            }
               else if((pow(i,2)+pow(j,2))<c){
                   i++;
               }
               else{
                   j--;
               }
        }
        return false;
    }
};