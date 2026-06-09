// Last updated: 6/9/2026, 9:13:48 PM
class Solution {
public:
    int ans=0;
    int subsetXORSum(vector<int>& nums) {
        
        int n=nums.size();
        bt(nums,0,n,0);
        return ans;
    }
    void bt(vector<int>& nums,int i,int sz,int x){
        if(i>=sz) {
            ans+=x;
            return;}
        
        bt(nums,i+1,sz,x^nums[i]);
        bt(nums,i+1,sz,x);
    }
};