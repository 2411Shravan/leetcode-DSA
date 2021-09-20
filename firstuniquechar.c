// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

// Example 1:

// Input: s = "leetcode"
// Output: 0
// Example 2:

// Input: s = "loveleetcode"
// Output: 2
// Example 3:

// Input: s = "aabb"
// Output: -1
 

// Constraints:

// 1 <= s.length <= 105
// s consists of only lowercase English letters.
int firstUniqChar(char * s){
    int len=strlen(s);
int i;
    int retarr[26];
    
    for( i=0;i<26;i++){
        retarr[i]=0;
    }
    for( i=0;i<len;i++){
        retarr[s[i]-'a']++;
    }
    for( i=0;i<len;i++){
        if(retarr[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
}