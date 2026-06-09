// Last updated: 6/9/2026, 9:13:09 PM
class Solution {
public:
    vector<vector<int>> arr;
    int n;

    int dp[100010][4];
    int rec(int level, int cnt) {
        if (cnt == 2)
            return 0;
        if (level == n)
            return 0;

        if(dp[level][cnt]!=-1) return dp[level][cnt];
        int ans = 0;
        ans = rec(level + 1, cnt);

        auto itr = upper_bound(
            arr.begin(), arr.end(), arr[level][1],
            [](int val, const vector<int>& a) { return val < a[0]; });
        
        int idx = itr - arr.begin();
        ans = max(ans, arr[level][2] + rec(idx, cnt + 1));

        return dp[level][cnt] = ans;
    }

    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        arr = events;
        n = events.size();
        memset(dp,-1,sizeof(dp));
        return rec(0, 0);
    }
};