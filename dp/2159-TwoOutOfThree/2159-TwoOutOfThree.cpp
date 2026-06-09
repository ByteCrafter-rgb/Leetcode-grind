// Last updated: 6/9/2026, 9:13:11 PM
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& num1, vector<int>& num2, vector<int>& num3) {
        map<int,vector<int>> mp;
        for(auto i: num1){
            if(mp[i].size()==0)
            mp[i].push_back(1);
        }
        for(auto i:num2) {
            if((mp[i].size()!=0 &&mp[i].back()!=2) || mp[i].size()==0)
            mp[i].push_back(2);
        }
        for(auto i:num3) {
            if((mp[i].size()!=0 && mp[i].back()!=3)  || mp[i].size()==0)
           mp[i].push_back(3);
        }

        vector<int> ans;
        for(auto i: mp){
            if(i.second.size()>=2) ans.push_back(i.first);
            // cout<<i.first<<" { ";
            // for(auto j: i.second){
            //     cout<<j<<" , ";
            // }
            // cout<<" }\n";
        }
        return ans;
    }
};