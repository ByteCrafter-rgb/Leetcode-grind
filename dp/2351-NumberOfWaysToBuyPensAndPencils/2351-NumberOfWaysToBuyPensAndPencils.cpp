// Last updated: 6/9/2026, 9:12:54 PM
class Solution {
public:
    long long waysToBuyPensPencils(int t, int c1, int c2) {
        long long ans=0;
        for(int i=0;i<=(t/c1);i++){
            int r=t-(c1*i);
            ans+=(r/c2)+1;
        }
        return ans;
    }
};