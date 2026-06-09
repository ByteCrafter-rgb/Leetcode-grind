// Last updated: 6/9/2026, 9:12:57 PM
class Solution {
public:
    int convertTime(string cur, string cor) {
        string h,m;
        for(int i=0;i<2;i++) h+=cur[i];
        int hh=stoi(h);
       
        for(int i=3;i<5;i++) m+=cur[i];
        int mm=stoi(m);
        // cout<<m<<"\n";
        string rh,rm;
        for(int i=0;i<2;i++) rh+=cor[i];
        int rhh=stoi(rh);
         for(int i=3;i<5;i++) rm+=cor[i];
        int rmm=stoi(rm);
        int ft=hh*60+mm;
        int rt=rhh*60+rmm;
        // cout<<rt-ft;
        int dif=rt-ft;
        
        if(dif<0) dif=-dif;
        int ans=dif/60;
        dif%=60;
        ans+=dif/15;
        dif%=15;
        ans+=dif/5;
        dif%=5;
        ans+=dif;
        
        return ans;
    }
};