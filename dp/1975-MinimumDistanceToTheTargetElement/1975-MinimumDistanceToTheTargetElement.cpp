// Last updated: 6/9/2026, 9:13:56 PM
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int> index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
            index.push_back(i);
        }
        int mn=INT_MAX;
        for(int i:index){
            mn=min(mn,abs(i-start));
        }
        return mn;
    }
};