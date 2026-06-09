// Last updated: 6/9/2026, 9:14:02 PM
class Solution {
public:
    bool checkIfPangram(string s) {
        int f[26]={};
        
        for(char i:s)
            f[i-'a']++;
        bool fl=true;
        for(int i:f)
            if(i==0) {
                fl=false;break;
            }
        
        return fl;
    }
};