// Last updated: 6/9/2026, 9:13:14 PM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        // auto mx=max_element(nums.begin(),nums.end())-nums.begin();
        // auto mn=min_element(nums.begin(),nums.end())-nums.begin();
        // cout<<mx<<" "<<mn;
        // if(mx-mn>0) return nums[mx]-nums[mn];
        // else return -1;
        int mx=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                mx=max(mx,nums[j]-nums[i]);
            }
        }
        if(mx>0) return mx;
        else return -1;
    }
};