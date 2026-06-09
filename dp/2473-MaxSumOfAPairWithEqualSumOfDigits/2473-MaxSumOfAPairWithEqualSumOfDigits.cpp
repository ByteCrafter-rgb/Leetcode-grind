// Last updated: 6/9/2026, 9:12:13 PM
class Solution {
public:
    int getsum(int x){
        int sum=0;
        while(x>0){
            sum+=(x%10);
            x/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            int s=getsum(nums[i]);
            mp[s].push_back(nums[i]);
        }
        int ans=-1;
        for(auto i:mp){
            if(i.second.size()<=1) continue;
            sort(i.second.begin(),i.second.end());
            int m=i.second.size();
            ans=max(ans,i.second[m-1]+i.second[m-2]);
            // cout<<i.first<<" ";
            // cout<<i.second.size()<<"\n";
            
        }
        return ans;
    }
};