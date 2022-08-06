class Solution {
public:
    int strStr(string haystack, string needle) {
        
//         int j=0;
        
//         for(int i=0;haystack[i];i++){
            
//             if(haystack[i]==needle[j]){
//                 int count=0;
//                 for(int k=0;needle[k];k++){
//                     if(i+k<haystack.size() && haystack[i+k]==needle[k]){
//                         count++;
//                     }
//                 }
//                 if(count==needle.size()){
//                     return i;
//                 }
//             }
//         }
        
        int ans=haystack.find(needle);
        
        return ans;
    }
};