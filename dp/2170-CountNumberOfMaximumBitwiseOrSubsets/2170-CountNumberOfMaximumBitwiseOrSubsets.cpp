// Last updated: 6/9/2026, 9:13:08 PM
class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        /*
            n <= 16 means 2^16 which is less than 10^6
            so we need to generate all subsets and take or
        */
        int n = nums.size();
        int _or = 0, cnt = 0;
        for(auto i: nums) _or |= i;

        for(int i=1;i<(1<<n);i++){
            // cout<<bitset<16>(i)<<"\n";
            bitset<16> b(i);
            int ans = 0;
            for(int j=0;j<n;j++){
                if(b[j]&1) ans |= nums[j];
            }
            if(ans==_or) cnt++;
        }
        return cnt;
    }
};