// Last updated: 6/9/2026, 9:12:38 PM
class Solution {
public:
    int wordcnt(string s){
        int cnt=0;
        for(auto i:s){
            if(i==' ') cnt++;
        }
        return cnt+1;
    }
    string largestWordCount(vector<string>& m, vector<string>& s) {
        int n=s.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            int x=wordcnt(m[i]);
            v.push_back(x);
        }
        // for(auto i:v) cout<<i<<" ";
        // cout<<"\n";
        map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]+=v[i];
            
        }
        vector<string> ans;
        int mx=0;
        for(auto i:mp) mx=max(mx,i.second);
        
        for(auto i:s){
            if(mp[i]==mx) ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        // for(auto i:ans) cout<<i<<"\n";
        return ans.back();
    }
};