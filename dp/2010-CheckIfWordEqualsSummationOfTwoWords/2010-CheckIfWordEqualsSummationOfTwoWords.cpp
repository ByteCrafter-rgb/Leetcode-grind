// Last updated: 6/9/2026, 9:13:45 PM
class Solution {
public:
    bool isSumEqual(string f, string s, string t) {
        int s1=0,s2=0,s3=0;
        reverse(f.begin(),f.end());
        for(int i=f.size()-1;i>=0;i--){
            s1+=(f[i]-'a')*pow(10,i);
        }
         reverse(s.begin(),s.end());
        for(int i=s.size()-1;i>=0;i--){
            s2+=(s[i]-'a')*pow(10,i);
        }
         reverse(t.begin(),t.end());
        for(int i=t.size()-1;i>=0;i--){
            s3+=(t[i]-'a')*pow(10,i);
        }
        // cout<<f<<" "<<s
        return (s1+s2)==s3;
    }
};