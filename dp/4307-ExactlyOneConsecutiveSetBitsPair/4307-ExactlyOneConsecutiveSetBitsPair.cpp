// Last updated: 6/9/2026, 9:10:05 PM
class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s;
        while(n>0){
            int d = n%2;
            s += to_string(d);
            n/=2;
        }
        // cout<<s;
        if(s.size() < 2) return false;
        bool flg = 0; int cnt = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == '1' && s[i+1] == '1') {
                flg = 1;
                // break;
                cnt++;
            }
        }
        return flg && (cnt == 1);
    }
};