// Last updated: 6/9/2026, 9:11:49 PM
class Solution {
public:
    int dp[200][3];
    vector<int> arr;
    int n;
    int rec(int level,int pre){
        if(level == n) return 0;

        if(dp[level][pre+1]!=-1) return dp[level][pre+1];

        int ans = 0;
        if(pre == -1 || arr[level]!=pre){
            ans = max(rec(level+1,arr[level])+1,rec(level+1,pre));
        } else {
            ans = max(ans,rec(level+1,pre));
        }
        
        return dp[level][pre+1] = ans;
    }

    vector<string> generate(int level,int pre,vector<string> &w){
        if(level == n) return {""};

        vector<string> res;
        int best = rec(level,pre);

        if(rec(level+1,pre) == best){
            auto temp = generate(level+1,pre,w);
            for(auto i:temp) res.push_back(i);
        } else if(pre == -1 || arr[level]!=pre){
            if(1+rec(level+1,arr[level]) == best){
                res.push_back(w[level]);
                auto temp = generate(level+1,arr[level],w);
                for(auto i:temp) {
                    if(i!="") res.push_back(i);
                }
            }
        }
        return res;
    }

    vector<string> getLongestSubsequence(vector<string>& w, vector<int>& g) {
        arr = g;
        n = g.size();
        memset(dp,-1,sizeof(dp));
        int x = rec(0,-1);
        vector<string> ans = generate(0,-1,w);
        // cout<<x;
        return ans;
    }
};