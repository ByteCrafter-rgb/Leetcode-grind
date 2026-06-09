// Last updated: 6/9/2026, 9:10:19 PM
class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int idx = -1;
        long long sumx = nums[0], sumy = nums[0];
        int n = nums.size();
        for(int i = 1;i<n;i++){
            if(nums[i] > nums[i-1]){
                idx = i;
                sumx += nums[i];
            }
            sumy += nums[i];
        }
        sumy = sumy - sumx + nums[idx];

        if(sumx > sumy) return 0;
        if(sumx < sumy) return 1;
        return -1;
    }
};