// Last updated: 6/9/2026, 9:13:05 PM
class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        string x=to_string(num);
        string ev,o;
        for(auto i:s){
            if((i-'0')%2==0) ev+=i;
            else o+=i;
        }
        // cout<<ev<<" "<<o;
        sort(ev.begin(),ev.end(),greater<int>());
        sort(o.begin(),o.end(),greater<int>());
        // cout<<ev<<" "<<o;
        int k=0,j=0;
        // int len=ev.size()+o.size();
        string ans;
        for(int i=0;i<s.size();i++){
            // cout<<ans<<" ";
            if((s[i]-'0')%2==0){
                ans+=ev[k++];
            }
            else ans+=o[j++];
        }
        int answ=stoi(ans);
        return answ;
    }
};