// Last updated: 6/9/2026, 9:12:32 PM
class Solution {
public:
    int peopleAwareOfSecret(int n, int d, int f) {
        const int mod = 1e9 + 7;
        //    int pref[n+1] = {}, bnew[n+1] = {}, cnt[n+1] = {};
        vector<int> pref(n + 1, 0), bnew(n + 1, 0), cnt(n + 1, 0);
        for (int i = 1; i <= d; i++) {
            pref[i] = 1;
            if (i == 1)
                bnew[i] = 1;
            else
                bnew[i] = 0;
        }
        for (int i = d + 1; i <= n; i++) {
            bnew[i] = pref[i - d];
            if (i - f >= 0)
                bnew[i] = (bnew[i] - pref[i - f] + mod) % mod;
            pref[i] = (pref[i - 1] + bnew[i]) % mod;
        }
        for (int i = 1; i <= n; i++) {
            cnt[i] = (cnt[i - 1] + bnew[i]) % mod;
            if (i - f >= 0) {
                cnt[i] = (cnt[i] - bnew[i - f] + mod) % mod;
            }
        }
        // for(auto i:cnt){
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        //  for(auto i:pref){
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        //  for(auto i:bnew){
        //     cout<<i<<" ";
        // }
        return cnt[n];
    }
};