class Solution {
public:
    string intToRoman(int num) {
        //int numbers[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        //string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<pair<int,string>> mp;
        mp.push_back({1000,"M"});
        mp.push_back({900,"CM"});
        mp.push_back({500,"D"});
        mp.push_back({400,"CD"});
        mp.push_back({100,"C"});
        mp.push_back({90,"XC"});
        mp.push_back({50,"L"});
        mp.push_back({40,"XL"});
        mp.push_back({10,"X"});
        mp.push_back({9,"IX"});
        mp.push_back({5,"V"});
        mp.push_back({4,"IV"});
        mp.push_back({1,"I"});
        string ret_ans="";
        for(int i=0;num;i++){
            while(num>=mp[i].first){
                ret_ans+=mp[i].second;
                num-=mp[i].first;
            }
        }
        
        return ret_ans;
    }
};