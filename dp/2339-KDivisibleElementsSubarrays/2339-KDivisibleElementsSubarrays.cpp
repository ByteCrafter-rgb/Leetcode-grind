// Last updated: 6/9/2026, 9:13:00 PM
class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int n=nums.size();
        set<vector<int>> ans;
        
        for(int i=0;i<n;i++){
            vector<int> tt;
            int cnt=0;
            for(int j=i;j<n;j++){
                tt.push_back(nums[j]);
                
                if(nums[j]%p==0){
                    cnt++;
                }
                if(cnt>k) break;
                ans.insert(tt);
            }
        }
        return ans.size();
        
    }
};