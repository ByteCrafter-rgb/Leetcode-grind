// Last updated: 6/9/2026, 9:13:28 PM
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n+1,0);
        vector<int> suf(n+1,0);
        int sm=0;
        for(int i=1;i<=n;i++) {
            sm+=nums[i-1];
            pre[i]=sm;
        }
       
        sm=0;
        for(int i=n-1;i>=0;i--){
            sm+=nums[i];
            suf[i]=sm;
        }
         // for(auto i:suf) cout<<i<<" ";
        for(int i=0;i<n;i++){
            if(pre[i]==suf[i+1]) return i;
            // cout<<pre[i]<<" "<<suf[i]<<"\n";
        }
        return -1;
    }
};