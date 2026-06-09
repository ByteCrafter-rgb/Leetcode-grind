// Last updated: 6/9/2026, 9:10:54 PM
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        int gcd[n];
        // int INF = -1e9;
        vector<int> mx(n,0);
        for(int i=0;i<n;i++){
            if(i==0){
                mx[i] = nums[i];
            } else {
                mx[i] = max(mx[i-1],nums[i]);
            }
            
            gcd[i] = __gcd(nums[i],mx[i]);
        }

        sort(gcd,gcd + n);

        // for(int i=0;i<n;i++){
        //     cout<<mx[i]<<" ";
        // }
        long long ans = 0;

        for(int i=0;i<n/2;i++){
            ans += __gcd(gcd[i],gcd[n-i-1]);
        }

        return ans;
        
    }
};