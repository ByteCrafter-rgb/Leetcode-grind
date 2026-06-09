// Last updated: 6/9/2026, 9:11:04 PM
class Solution {
public:
    long long maximumSum(vector<int>& nums, int m, int l, int r) {
           int n = nums.size();

        vector<long long> pref(n + 1);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + nums[i];

        const long long NEG = -(long long)4e18;

        vector<vector<long long>> dp(m + 1,
                                     vector<long long>(n + 1, NEG));

        for (int i = 0; i <= n; i++)
            dp[0][i] = 0;

        long long ans = NEG;

        for (int k = 1; k <= m; k++) {

            deque<pair<long long,int>> dq;

            for (int i = 1; i <= n; i++) {

                dp[k][i] = dp[k][i - 1];

                int addPos = i - l;

                if (addPos >= 0) {
                    long long val =
                        dp[k - 1][addPos] - pref[addPos];

                    while (!dq.empty() &&
                           dq.back().first <= val)
                        dq.pop_back();

                    dq.push_back({val, addPos});
                }

                while (!dq.empty() &&
                       dq.front().second < i - r)
                    dq.pop_front();

                if (!dq.empty()) {
                    dp[k][i] = max(
                        dp[k][i],
                        pref[i] + dq.front().first
                    );
                }

                ans = max(ans, dp[k][i]);
            }
        }

        return ans;
    }
};