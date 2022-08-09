class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<char,int> firstS;
        unordered_map<char,int> secondT;
        
        for(int i=0;i<s.size();i++){
            if(firstS.find(s[i])!=firstS.end()){
                firstS[s[i]]=firstS[s[i]]+1;
            }
            else{
                firstS[s[i]]=1;
            }
        }
        
        for(int j=0;j<t.size();j++){
            if(secondT.find(t[j])!=secondT.end()){
                secondT[t[j]]=secondT[t[j]]+1;
            }
            else{
                secondT[t[j]]=1;
            }
        }
        
        int i=0;
        for(auto it:firstS){
            cout<<it.first<<"->"<<it.second<<endl;
        }
          cout<<"------"<<endl;
        
        for(auto its:secondT){
            cout<<its.first<<"->"<<its.second<<endl;
        }
        
        int flag=1;
        // for(auto it: firstS){
        //     if((secondT.find(it.first)!=secondT.end()) && (it.second != secondT[it.first])){
        //         continue;
        //     }
        //     else{
        //         flag=0;
        //         return false;
        //     }
        //     // i++;
        // }
        // if(flag){
        //     cout<<"found all"<<endl;
        // }
        unordered_map<char,int>::iterator ti;
        
        for(ti=firstS.begin();ti!=firstS.end();++ti){
           if(ti->second==secondT[ti->first]){
               continue;
           }
            else{
                return false;
            }
        }
        
        return true;
    }
};