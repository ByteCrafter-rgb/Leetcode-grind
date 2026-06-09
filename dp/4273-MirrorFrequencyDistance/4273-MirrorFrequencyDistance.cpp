// Last updated: 6/9/2026, 9:10:33 PM
class Solution {
public:
    int mirrorFrequency(string s) {
        map<char,int> mp,mpb;
        for(auto i:s){
            mp[i]++;
            mpb[i]++;
        }
        int ans=  0;
        vector<bool> vc(26,0);
        vector<bool> va(10,0);
        // cout<<(char)('z' - (25 - ('c' - 'a')))<<"\n";
        for(auto i: mp){
            int fa = i.second;
            int fb = -1;
            char c = i.first;
            if(c >='a' && c <= 'z' && !vc[(c - 'a')]) {
                vc[c - 'a'] = 1;
                int off = (c - 'a');
               char d = ('z' - off);
                vc[d - 'a'] = 1;
                // cout<<i.first<<" "<<d<<"\n";
                fb = mpb[d];
            } else if( c >= '0' && c<= '9' && !va[(c - '0')]){
                va[c -  '0'] = 1;
                int off = ((c - '0'));
                char d = ('9' - off);
                va[d -  '0'] = 1;
                fb = mpb[d];
                // cout<<c<<" "<<d<<"\n";
            }
            // cout<<fa <<" "<<fb<<"\n";
            if(fa >= 0 && fb >= 0)
            ans += abs(fb - fa);
        }
        return ans;
    }
};