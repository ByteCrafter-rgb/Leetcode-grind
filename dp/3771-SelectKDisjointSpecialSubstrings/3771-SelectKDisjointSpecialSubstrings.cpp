// Last updated: 6/9/2026, 9:11:40 PM
class Solution {
public:
    int n;
    int dp[50001][27];
    string str;
    vector<int> first,last;
    bool rec(int idx,int k){
        
        if(k<=0) return true;
        if(idx >= n) return false;
        // cache check
        if(dp[idx][k]!=-1) return dp[idx][k];

        int c = str[idx] - 'a';

        bool ans = false;
        // choose
        if(first[c] == idx){
            int l = last[c];

            bool flg = true;
            for(int i=idx+1;i<=l;i++){
                int ch = str[i] - 'a';
                if(first[ch] < idx) flg = false;
                l = max(l,last[ch]);
            }
            if(flg && !(idx==0 && l==n-1)) {
                ans |= rec(l+1,k-1);
            }
        }

        // not choose
        ans |= rec(idx+1,k);

        return dp[idx][k] = ans;
    }

    bool maxSubstringLength(string s, int k) {
        if(!k) return true;
        // int first[26] = {},last[26];
        first.resize(26,-1);
        last.resize(26,-1);
        n = s.size();
        str = s;
        for(int i=0;i<n;i++){
            int c = s[i] - 'a';
            if(first[c] == -1) first[c] = i;
            last[c] = i;
        }
        // cout<<rec(0,k)
        memset(dp,-1,sizeof(dp));
        return rec(0,k);
    }
};