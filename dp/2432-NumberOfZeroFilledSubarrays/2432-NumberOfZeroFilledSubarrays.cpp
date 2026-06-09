// Last updated: 6/9/2026, 9:12:20 PM
class Solution {
public:
    #define ll long long
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        ll cnt=0,ans=0;
        int i=0,j=0;int k=10;
        while(i<n ){
            while(j<n and nums[j]>0) j++;
            while(j<n and nums[j]==0) {
                cnt++;
                j++;
            }
            ans+=((cnt)*(cnt+1)/2ll);
            cnt=0;
            if(j<n and nums[j]<0) j++;
            i=j;
            
            // cout<<nums[j]<<" ";
        }
        return ans;
    }
};