// Last updated: 6/9/2026, 9:10:25 PM
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int idx = -1;
        int n = nums.size();
        vector<int> mx(n,0),mn(n,0);
        int temp = 0;
        for(int i=0;i<n;i++){
            temp = max(nums[i],temp);
            mx[i] = temp;
        }
        temp = INT_MAX;
        for(int i=n-1;i>=0;i--){
            temp = min(nums[i],temp);
            mn[i] = temp;
        }
        int st = 0;
        for(int i=0;i<n;i++){
            st = mx[i] - mn[i];
            if(st <= k){
                return i;
            }
        }
        return idx;
    }
};