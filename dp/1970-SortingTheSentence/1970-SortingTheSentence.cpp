// Last updated: 6/9/2026, 9:13:57 PM
class Solution {
public:
    string sortSentence(string s) {
        string ans="";
        vector<pair<int,string>> tmp;string t="";
        for(int i=0;i<s.size();i++){
            
            
            if(s[i]>'0' and s[i]<='9'){
                tmp.push_back(make_pair((int)(s[i]-'0'),t));
                t="";i++;
                continue;
            }
            t+=s[i];
        }
        sort(tmp.begin(),tmp.end());
        for(auto i:tmp){
            ans+=i.second;
            if(i!=tmp[tmp.size()-1])
            ans+=" ";
            // cout<<i.second<<" "<<i.first<<endl;
        }
        return ans;
    }
};