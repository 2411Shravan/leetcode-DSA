class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inout(n+1, 0);
        
        for(auto t : trust){
            inout[t[0]]--; //outdegree of a node
            inout[t[1]]++; //indegree of a node
        }
        
        for(int i=0;i<inout.size();i++){
            cout<<inout[i]<<endl;
        }
        for(int i=1; i<n+1; i++){   //there are n people labelled from 1 to n
            if(inout[i]==n-1) return i;
        }
        return -1;
    }
};