// Last updated: 6/9/2026, 9:11:23 PM
class Solution {
public:
    string mergeCharacters(string s, int k) {
        // int first[26],last[26];
        vector<int> first(26,-1), last(26,-1);

        int n = s.size();
        for(int i=0;i<s.size();i++){
            int ch = s[i] - 'a';
            if(first[ch] == -1){
                first[ch] = i;
                continue;
            }

            if(i-first[ch] <= k){
                s.erase(i,1);
                i--;
            } else {
                first[ch] = i;
            }
            // cout<<s<<"\n";
        }
        return s;
    }
};