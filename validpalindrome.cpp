// Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
 

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.
// Accepted
// 1,010,323
// Submissions
// 2,534,880

class Solution {
public:
    bool isPalindrome(string s) {
        
        string g="";
        int i=0;
        while(s[i]!='\0' ){
            if(isalnum(s[i])){
                g+=s[i];
            }
            i++;
        }
        cout<<g<<endl;
       transform(g.begin(), g.end(), g.begin(), ::tolower);
      
    
        for(int j=0;j<g.size();j++){
            if(g[j]==g[g.size()-j-1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};