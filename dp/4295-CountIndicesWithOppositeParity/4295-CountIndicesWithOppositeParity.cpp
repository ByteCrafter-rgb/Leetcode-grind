// Last updated: 6/9/2026, 9:10:16 PM
class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int o = 0, e = 0;
        vector<int> v;
        int n = nums.size();

        for(int i=n-1;i>=0;i--){
            if(nums[i]%2) o++;
            else e++;

            int score = 0;
            if(nums[i]%2) score += e;
            else if(nums[i]%2 == 0) score += o;

            v.push_back(score);
        }

        reverse(v.begin(),v.end());
        return v;
    }
};