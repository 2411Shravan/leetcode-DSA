class Solution {
public:
    int romanToInt(string s) {
       map<char,int> res_map;
        res_map.insert(make_pair('I',1));
        res_map.insert(make_pair('V',5));
        res_map.insert(make_pair('X',10));
        res_map.insert(make_pair('L',50));
        res_map.insert(make_pair('C',100));
        res_map.insert(make_pair('D',500));
        res_map.insert(make_pair('M',1000));
        
        int sum=0;
        int num=0;
        for(int i=0;i<s.length();){
            if(i==s.length()-1 || res_map[s[i]]>=res_map[s[i+1]]){
                num=res_map[s[i]];
                i++;
            }
            else{
                num=res_map[s[i+1]]-res_map[s[i]];
                    i=i+2;
            }
            sum+=num;
           
        }
        
         return sum;
    }
};