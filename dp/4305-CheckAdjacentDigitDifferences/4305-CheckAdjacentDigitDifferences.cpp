// Last updated: 6/9/2026, 9:10:01 PM
class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int f = s[0] - '0';
        int n = s.size();
        bool flg = 1;
        for(int i=1;i<n;i++){
            if(abs(s[i]-s[i-1]) > 2) flg = false;
        }
        return flg;
    }
};