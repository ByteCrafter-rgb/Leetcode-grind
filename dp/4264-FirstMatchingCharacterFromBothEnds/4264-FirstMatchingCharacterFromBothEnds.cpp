// Last updated: 6/9/2026, 9:10:39 PM
class Solution {
public:
    int firstMatchingIndex(string s) {
        int idx = -1;

        int n = s.size();

        for(int i=0;i<n;i++){
            if(s[i] == s[n-i-1]){
                idx = i;
                break;
            }
        }
        return idx;
    }
};