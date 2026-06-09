// Last updated: 6/9/2026, 9:11:57 PM
class Solution {
public:
    vector<string> rverse(vector<string>& words){
        vector<string> ans;
        for(auto i:words){
            reverse(i.begin(),i.end());
            ans.push_back(i);
        }
        return ans;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        vector<string> rwrd=rverse(words);
        int ans=0;
        for(int i=0;i<n;i++){
        int cnt=0;
            for(int j=i+1;j<n;j++){
                if(words[i]==rwrd[j]) cnt++;
            }
            ans+=cnt;
        }
        return ans;
        
    }
};