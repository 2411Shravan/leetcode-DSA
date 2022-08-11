class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26],b[26];
        
        for(int i=0;i<26;i++){
            a[i]=b[i]=0;
        }
        
        for(int i=0;i<ransomNote.size();i++){
            a[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++){
             b[magazine[i]-'a']++;
        }
        
        for(int i=0;i<ransomNote.size();i++){
            if(b[ransomNote[i]-'a']>=a[ransomNote[i]-'a']){
                continue;
            }
            else{
                return false;
            }
            // a[ransomNote[i]]++;
        }
        return true;
    }
};