// Last updated: 6/9/2026, 9:11:17 PM
class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();

        int ans = 0;
        for(int i=0;i<n;i++){
            int freq[26] = {};
            for(int j = i;j<n;j++){
                freq[s[j]-'a']++;
                int mn = 1e9,mx = 0;
                for(auto k:freq){
                    if(k==0) continue;
                    mn = min(mn,k);
                    mx = max(mx,k);
                }
                // cout<<i<<" "<<j<<"\n";
                
                // cout<<"min "<<mn<<" "<<mx<<"\n";
                if(mn == mx){
                    ans = max(ans, j - i +1);
                }
                // cout<<"ans - > "<<ans<<"\n";
            }
        }
        return ans;
    }
};