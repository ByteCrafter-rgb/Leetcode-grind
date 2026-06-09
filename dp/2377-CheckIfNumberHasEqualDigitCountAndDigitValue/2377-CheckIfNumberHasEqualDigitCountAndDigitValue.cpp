// Last updated: 6/9/2026, 9:12:39 PM
class Solution {
public:
    bool digitCount(string num) {
        map<int,int> mp;
        for(int i=0;i<num.size();i++){
            mp[num[i]-'0']++;
        }
        bool f=1;
       for(int i=0;i<num.size();i++){
           if((num[i]-'0')!=mp[i]){ f=0;} 
       }
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        return f;
    }
};