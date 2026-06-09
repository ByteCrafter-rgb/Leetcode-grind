// Last updated: 6/9/2026, 9:10:44 PM
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();

        int ans  = n+1;

        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if((nums[i] == 1 && nums[j] == 2) || (nums[i] == 2 && nums[j] == 1)){
                    ans = min(ans,abs(i-j));
                }
            }
        }
        if(ans == n+1) return  -1;
        return ans;
    }
};