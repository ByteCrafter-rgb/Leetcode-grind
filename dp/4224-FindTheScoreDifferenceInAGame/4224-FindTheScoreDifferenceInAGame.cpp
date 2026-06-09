// Last updated: 6/9/2026, 9:11:01 PM
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int diff = 0;
        int a = 0, ina = 0;
        int n = nums.size();
        int arr[2];
        int idx = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 1){
                idx = 1 - idx;
            }
            if((i+1)%6 == 0){
                idx = 1 - idx;
            }
            // cout<<idx<<"\n";
            arr[idx] += nums[i];
        }
        return arr[0] - arr[1];
    }
};