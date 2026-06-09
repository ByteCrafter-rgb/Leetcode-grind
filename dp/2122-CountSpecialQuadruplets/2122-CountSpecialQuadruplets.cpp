// Last updated: 6/9/2026, 9:13:20 PM
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        if(nums[i]+nums[j]+nums[k]==nums[l]) c++;
                    }
                }
            }
        }
        return c;
    }
};