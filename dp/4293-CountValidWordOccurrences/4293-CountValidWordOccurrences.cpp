// Last updated: 6/9/2026, 9:10:17 PM
class Solution {
public:
    bool ischar(char c){
        return (c >= 'a' && c <= 'z');
    }
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        string full_word = "";

        for(auto i:chunks) full_word += i;

        map<string, int> mp;
        string curw = "";

        int n = full_word.size();
        // cout<<full_word<<"\n";
        for(int i=0;i<n;i++){
            if(ischar(full_word[i])){
                curw += full_word[i];
                continue;
            } else if( full_word[i] == '-' && (i != n-1 && i != 0) && ischar(full_word[i-1]) && ischar(full_word[i+1])){
                curw += full_word[i];
                continue;
            }
            mp[curw]++;
            curw = "";
        }
        mp[curw]++;
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        vector<int> ans;
        for(auto i:queries){
            ans.push_back(mp[i]);
        }

        
        return ans;
    }
};