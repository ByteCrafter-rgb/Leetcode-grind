// Last updated: 6/9/2026, 9:10:24 PM
class Solution {
public:
    bool validDigit(int n, int x) {
        bool fl = 1;

        map<int,int> mp;
        vector<int> v;

        while(n){
            int y = n%10;
            n = n/10;
            mp[y]++;
            v.push_back(y);
        }

        return mp[x]!=0 && v[v.size()-1]!=x;
    }
};