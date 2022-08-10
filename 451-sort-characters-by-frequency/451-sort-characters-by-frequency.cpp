class Solution {
public:
    static bool cmp(pair<char,int>&a, pair<char,int>&b){
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        // sort(s.begin(),s.end());
        // return s;
        unordered_map<char,int> um;
        for(int i=0;i<s.size();i++){
            um[s[i]]++;
        }
        
        vector<pair<char,int>> me;
        for(auto it:um){
            me.push_back(make_pair(it.first,it.second));
        }
         sort(me.begin(),me.end(),cmp);
        string ret="";
        for(auto i: me){
            while(i.second>0){
                ret+=i.first;
                i.second--;
            }
        }
        
        return ret;
    }
};