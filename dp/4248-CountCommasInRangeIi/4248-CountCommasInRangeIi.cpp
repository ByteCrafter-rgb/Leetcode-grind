// Last updated: 6/9/2026, 9:10:49 PM
class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0, div = 999, t = 999;
        
        for(int i=0;i<5;i++){
            if(n < div) break;
            ans += (n - div);
            div *= 1000;
            div += t;
            // cout<<div<<"\n";
        }
        return ans;
    }
};