// Last updated: 6/9/2026, 9:12:18 PM
class Solution {
public:
    string bestHand(vector<int>& r, vector<char>& s) {
        map<int,int> mp;
        for(auto i:r) mp[i]++;
        map<char,int> mp2;
        for(auto i:s) mp2[i]++;
        int mx=0;
        for(auto i:mp2) mx=max(mx,i.second);
        if(mx>=5) return "Flush";
        mx=0;
        for(auto i:mp) mx=max(mx,i.second);
        if(mx>=3) return "Three of a Kind";
        if(mx>=2) return "Pair";
        return "High Card";
    }
};