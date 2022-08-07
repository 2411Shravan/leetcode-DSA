class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>umap;
        
        for(int i=0;i<s.size();i++){
            if(umap.find(s[i])==umap.end()){
                for(auto it:umap){
                    if(it.second==t[i]){
                        return false;
                    }
                }
                umap[s[i]]=t[i];
            }
            else{
                if(umap[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};