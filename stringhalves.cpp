// You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

// Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

// Return true if a and b are alike. Otherwise, return false.

 

// Example 1:

// Input: s = "book"
// Output: true
// Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
// Example 2:

// Input: s = "textbook"
// Output: false
// Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
// Notice that the vowel o is counted twice.
// Example 3:

// Input: s = "MerryChristmas"
// Output: false
// Example 4:

// Input: s = "AbCdEfGh"
// Output: true
 

// Constraints:

// 2 <= s.length <= 1000
// s.length is even.
// s consists of uppercase and lowercase letters.

class Solution {
public:
    bool halvesAreAlike(string s) {
        int len=s.length();
        int op=len/2;
        int count1=0;
        int count2=0;
        string first="";
        string second="";
        for(int i=0;i<op;i++){
            first=first+s[i];
        }
        for(int i=op;i<len;i++){
            second=second+s[i];
            
        }
        for(int i=0;i<first.length();i++){
            if(first[i]=='a' || first[i]=='A'){
                count1++;
            }
            else if(first[i]=='e' || first[i]=='E'){
                count1++;
            }
            else if(first[i]=='i' || first[i]=='I'){
                count1++;
            }
            else if(first[i]=='o' || first[i]=='O'){
                count1++;
            }
            else if(first[i]=='u' || first[i]=='U'){
                count1++;
            }
        }
 
          for(int i=0;i<second.length();i++){
            if(second[i]=='a' || second[i]=='A'){
                count2++;
            }
            else if(second[i]=='e' || second[i]=='E'){
                count2++;
            }
            else if(second[i]=='i' || second[i]=='I'){
                count2++;
            }
            else if(second[i]=='o' || second[i]=='O'){
                count2++;
            }
            else if(second[i]=='u' || second[i]=='U'){
                count2++;
            }
        }
        cout<<count1<<" "<<count2;
       if(count1==count2){
           return true;
       }
        else{
            return false;
        }
    }
};