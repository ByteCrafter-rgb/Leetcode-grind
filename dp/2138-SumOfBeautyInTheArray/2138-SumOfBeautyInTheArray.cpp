// Last updated: 6/9/2026, 9:13:16 PM
class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int> gb(n,0),gs(n,0);gb[n-1]=nums[n-1];
        gs[0]=nums[0];
        for(int i=n-2;i>=0;i--){
            gb[i]=min(nums[i+1],gb[i+1]);
        }
        
        for(int i=1;i<n;i++){
            gs[i]=max(nums[i-1],gs[i-1]);
        }
        // for(auto i:gs) cout<<i<<" ";
        bool f1=1,f2=1;
        int sm=0;
        for(int i=1;i<n-1;i++){
            if(gs[i]<nums[i] and gb[i]>nums[i]) {sm+=2;}//cout<<nums[i]<<" ";
            else if(nums[i-1]<nums[i] and nums[i+1]>nums[i]) sm+=1;
        }
        
        
        return sm;
        // return 0;[6,7,7,9,3,9,3,4,4,1]
    }
};