class Solution {
public:
    char findTheDifference(string s, string t) {
        // char c=' ';
        vector<int> first(26,0);
        vector<int> second(26,0);
        
        for(int i=0;i<s.size();i++){
            first[s[i]-'a']++;
        }
        
        for(int j=0;j<t.size();j++){
            second[t[j]-'a']++;
        }
        for(int k=0;k<26;k++){
            if(first[k]==second[k]){
                continue;
            }
            else{
                return 'a'+(k);
            }
        }
        return ' ';
    }
};