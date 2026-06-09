// Last updated: 6/9/2026, 9:11:51 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        vector<int> v(k+1);
        int x=0,y=k;
        for(int i=n-1;i>=0;i--){
            if(k==0) break;
            if(nums[i]<=y and nums[i]>=1 and v[nums[i]]==0) {
                v[nums[i]]=1;x=i;
            }
            cnt++;
        }
        return n-x;
    }
};