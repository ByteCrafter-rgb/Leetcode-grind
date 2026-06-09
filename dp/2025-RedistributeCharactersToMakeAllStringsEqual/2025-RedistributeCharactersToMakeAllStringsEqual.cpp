// Last updated: 6/9/2026, 9:13:42 PM
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        map<char,int> mp;
        for(auto i:words)
            for(auto j:i) 
                mp[j]++;
        
        for(auto i:mp){
            if(i.second%n) return false;
        }
        return true;
    }
};