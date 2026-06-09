// Last updated: 6/9/2026, 9:10:07 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int> mp;

        while(n){
            mp[n%10]++;
            n /=10;
        }

        int ans = 0;

        for(auto i:mp){
            ans += (i.first)*i.second;
        }
        return ans;
    }
};