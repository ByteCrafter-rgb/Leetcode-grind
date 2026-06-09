// Last updated: 6/9/2026, 9:13:53 PM
class Solution {
public:
    int countGoodSubstrings(string s) {
        int c=0;
        int n=s.size();
        for(int i=0;i<n-2;i++){
            set<char> tmp;
            tmp.insert(s[i]);
            tmp.insert(s[i+1]);
            tmp.insert(s[i+2]);
            (tmp.size()==3)? c++:c=c;
        }
        return c;
    }
    
};