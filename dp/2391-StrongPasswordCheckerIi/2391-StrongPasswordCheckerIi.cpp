// Last updated: 6/9/2026, 9:12:35 PM
class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        bool f=1;
        int n=p.size();
        if(n<8) f=0;
        int c1=0,c2=0,c3=0,c4=0;
        for(auto i:p) {
            if(i>='a' and i<='z') c1++;
            if(i>='A' and i<='Z') c2++;
            if(i>='0' and i<='9') c3++;
            if(i=='!' or i=='@' or i=='#' or i=='$' or i=='%' or i=='^' or i=='&' or i=='*' or i=='(' or i==')' or i=='-' or i=='+') c4++;
        }
        if(c1==0 or c2==0 or c3==0 or c4==0 ) f=0;
        for(int i=1;i<n;i++){
            if(p[i]==p[i-1]) f=0;
        }
        return f;
    }
};