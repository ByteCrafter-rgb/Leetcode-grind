// Last updated: 6/9/2026, 9:12:11 PM
class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        vector<int> f(27,-1);
        bool ans=1;
        for(int i=0;i<s.size();i++){
            if(f[s[i]-'a']==-1) f[s[i]-'a']=i;
            else 
           { f[s[i]-'a']=i-f[s[i]-'a']-1;
           if(f[s[i]-'a']!=d[s[i]-'a']) ans=0;
            // cout<<f[s[i]-'a']<<" "<<d[s[i]-'a']<<"\n";
            }
            
            
        }
        // for(auto i:f) cout<<i<<" ";
        return ans;
    }
};