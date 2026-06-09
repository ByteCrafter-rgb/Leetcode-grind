// Last updated: 6/9/2026, 9:13:30 PM
class Solution {
public:
    int n, m;
    vector<vector<int>> a, b;
    vector<vector<int>> dp;

    int calc(int i, int j) {
        int sum = 0;
        for (int k = 0; k < n; k++) {
            sum += (a[i][k] == b[j][k]);
        }
        return sum;
    }

    int rec(int level, int mask) {
        if (level == m) return 0;
        if (dp[level][mask] != -1) return dp[level][mask];

        int score = 0;
        for (int j = 0; j < m; j++) {
            if (!(mask & (1 << j))) {
                score = max(score, calc(level, j) + rec(level + 1, mask | (1 << j)));
            }
        }
        return dp[level][mask] = score;
    }

    int maxCompatibilitySum(vector<vector<int>>& stud, vector<vector<int>>& men) {
        m = stud.size();
        n = stud[0].size();
        a = stud;
        b = men;
        dp.assign(m, vector<int>(1 << m, -1));
        return rec(0, 0);
    }
};
