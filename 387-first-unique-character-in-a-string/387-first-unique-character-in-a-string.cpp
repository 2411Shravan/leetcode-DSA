class Solution {
public:
    int firstUniqChar(string s) {
        int le=s.length();
        int retarr[26];
        for(int i=0;i<26;i++){
            retarr[i]=0;
        }
        for(int i=0;i<le;i++){
            retarr[s[i]-'a']++;
        }
        for(int i=0;i<le;i++){
            if(retarr[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};