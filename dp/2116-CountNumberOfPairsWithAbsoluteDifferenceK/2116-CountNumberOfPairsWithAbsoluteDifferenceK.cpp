// Last updated: 6/9/2026, 9:13:24 PM
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[j]-nums[i])==k) c++;
            }
        }
        return c;
    }
};