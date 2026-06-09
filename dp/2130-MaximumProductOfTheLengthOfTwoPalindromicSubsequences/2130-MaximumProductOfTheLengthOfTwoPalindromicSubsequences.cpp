// Last updated: 6/9/2026, 9:13:19 PM
class Solution {
public:
    string s;
    int n;
    map<pair<int, pair<string,string>>,int> dp;
    bool is_pal(string a){
        int m = a.size();
        if(m == 0) return true;
        if(a[0] == a[m-1]){
            return is_pal(a.substr(1,m-2));
        }
        return false;
    }
    int rec(int level, string a, string b) {
        if (level == n) {
            if (is_pal(a) && is_pal(b)) {
                return a.size() * b.size();
            } else
                return 1;
        }
        // if(dp.find({level,{a,b}})!=dp.end()) {
        //     return dp[{level,{a,b}}];
        // }
        int ans = 1;
        ans = max({ans, rec(level + 1, a, b), rec(level + 1, a + s[level], b),
                   rec(level + 1, a, b + s[level])});

        return ans;
    }

    int maxProduct(string str) {
        s = str;
        n = s.length();
        return rec(0, "", "");
    }
};