// Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.
 

// Constraints:

// 1 <= s.length <= 104
// s consists of only English letters and spaces ' '.
// There will be at least one word in s.
/**
 * @param {string} s
 * @return {number}
 */
 var lengthOfLastWord = function(s) {
    let len=s.length-1;
    let decision=0;
    let count=0;
    while(len>=0){
          if(s[len]!=' '){
             count++;
             }
          else if(count>0){
                  return count;
                  }
        len--;
          }
    
    return count;
};