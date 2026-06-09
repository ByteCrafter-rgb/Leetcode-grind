// Last updated: 6/9/2026, 9:11:18 PM
class Solution {
public:
    string maximumXor(string s, string t) {
        string ans = "";
        map<char,int> mp;
        for(auto i:t){
            mp[i]++;
        }

        for(auto i:s){
            if(i == '0'){
                if(mp['1']>0) {ans += '1';mp['1']--;}
                else ans += '0';
            } else {
                if(mp['0'] > 0) {ans += '1';mp['0']--;}
                else ans += '0';
            }
        }
        return ans;
    }
};