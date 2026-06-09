// Last updated: 6/9/2026, 9:14:03 PM
class Solution {
public:
    string replaceDigits(string s) {
        
        
        for(int i=1;i<s.size();i+=2){
            s[i]=(char)('a'+s[i-1]-'a'+s[i]-'0');
        }
        return s;
    }
};