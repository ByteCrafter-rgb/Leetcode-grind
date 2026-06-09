// Last updated: 6/9/2026, 9:12:23 PM
class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& q) {
        int n=nums[0].size();
        vector<int> ans;
        for(auto i:q){
            int cut=i[1];
            vector<pair<string,int>> v;
            for(int j=0;j<nums.size();j++){
                string x=nums[j].substr(n-cut);
                // int y=stoi(x);
                v.push_back({x,j+1});
            }
           
            sort(v.begin(),v.end());
        //      for(auto i:v){
        //     cout<<i.first<<" ";
        // }
        //     cout<<"\n";
            int idx=i[0]-1;
            // cout<<idx<<"\n";
            ans.push_back(v[idx].second-1);
        }
        
        return ans;
    }
};