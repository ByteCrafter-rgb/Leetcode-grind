// Last updated: 6/9/2026, 9:13:31 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=(int)nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
            if(i<n)
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;

    }
};