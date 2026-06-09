// Last updated: 6/9/2026, 9:12:00 PM
class Solution {
public:
    vector<int> fun1(vector<int>&nums){
        vector<int> ans;
        for(auto i:nums){
            int x=i;
            while(x>=10){
                x/=10;
            }
            ans.push_back(x);
        }
        // for(auto i:ans) cout<<i<<" ";
        // cout<<"\n";
        return ans;
    }
    vector<int> fun2(vector<int>nums){
         vector<int> ans;
        for(auto i:nums){
            ans.push_back(i%10);
        }
        //  for(auto i:ans) cout<<i<<" ";
        // cout<<"\n";
        return ans;
    }
    int countBeautifulPairs(vector<int>& nums) {
        vector<int> first=fun1(nums);
        vector<int> second=fun2(nums);
        // int ans=0;
        int n=nums.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(__gcd(first[i],second[j])==1 ) {
                
                ans.push_back({i,j});
                // else ans.insert({j,i});
                // cout<<i<<" "<<j<<"\n";
            }   
            }
        }
        // for(auto i:ans){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        // cout<<__gcd(3,9)<<"\n";
        return ans.size();
    }
};