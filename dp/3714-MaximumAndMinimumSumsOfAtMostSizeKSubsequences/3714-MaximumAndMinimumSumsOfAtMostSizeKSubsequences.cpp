// Last updated: 6/9/2026, 9:11:44 PM
#define ll long long
class Solution {
public:
    int mod = 1e9 + 7;
    vector<ll> fact,invfact;

    ll modpow(ll base,int exp){
        ll result = 1;
        while(exp > 0){
            if(exp%2) result = result*base % mod;
            base = (base*base)%mod;
            exp >>= 1;
        }
        return result;
    }
    void calcFactorial(int n){
        fact.resize(n+1);
        invfact.resize(n+1);

        fact[0] = fact[1] = 1;
        invfact[0] = 1;
        for(int i=2;i<=n;i++){
            fact[i] = (i*fact[i-1])%mod;
        }
        
        invfact[n] = modpow(fact[n],mod-2);
        for(int i=n-1;i>0;i--){
            invfact[i] = (invfact[i+1]*(i+1))%mod;
        }

    }

    ll nCr(int n,int r){
        if(r > n || r < 0) return 0;
        return ((fact[n] * invfact[r])%mod * invfact[n-r])%mod;
    }
    int minMaxSums(vector<int>& nums, int k) {
        int mod = 1e9 + 7;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        calcFactorial(n);
        ll ans = 0;
        for(int i=0;i<n;i++){
            for(int sz = 1;sz <= k;sz++){
                ll mn = (nums[i] * nCr(n-i-1,sz-1))%mod;
                ll mx = (nums[i]* nCr(i,sz-1))%mod;
                ans = (ans + mn + mx)% mod;
            }
        }
        return ans;
    }
};