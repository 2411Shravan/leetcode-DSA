class Solution {
public:
    char repeatedCharacter(string s) {
        
        int mp[26]={0};
        
        for(int i=0;i<s.size();i++){
            if(mp[s[i]-'a']!=0){
                return s[i];
            }
            else{
                mp[s[i]-'a']++;
                }
        }
        return 'z';
    }
};