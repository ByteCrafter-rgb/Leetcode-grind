// Last updated: 6/9/2026, 9:12:48 PM
class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int> mp;
        for(auto i:s){
        mp[i]++;
        }
        // for(auto i:mp) cout<<i.first<<" "<<i.second<<"\n";
        int ans=0;
        ans=(mp[letter]*100/s.size());
        return ans;
    }
};