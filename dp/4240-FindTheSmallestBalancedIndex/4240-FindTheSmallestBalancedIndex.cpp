// Last updated: 6/9/2026, 9:10:56 PM
class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();

        vector<long long> prod(n+2,1), sum(n+2,0);
        // long long sum = accumulate(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            sum[i] = nums[i-1] + sum[i-1];
        }

        for(int i=n-1;i>=0;i--){
            if(prod[i+1] < (LLONG_MAX)/nums[i])
            prod[i] = nums[i] * prod[i+1];
            else {
                 prod[i] = 1e17;
            }
               
            
        }

        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(sum[i] == prod[i+1]){
                mp[i]++;
            }
        }
        if(mp.size() == 0) return -1;
        return mp.begin()->first;
    }
};