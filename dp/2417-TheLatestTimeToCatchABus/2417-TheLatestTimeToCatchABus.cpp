// Last updated: 6/9/2026, 9:12:28 PM
class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& b, vector<int>& p, int cap) {
        sort(b.begin(),b.end());
        sort(p.begin(),p.end());
        
        int r=0,j=0,tmp=0;
         set<int> s;
        for(auto i:p) s.insert(i);
        bool f=0;
        for(int i=0;i<b.size();i++){
            tmp=0;
            while(j<p.size() and p[j]<=b[i] and tmp<cap){
                tmp++;
                j++;
            }
            f=(tmp==cap);
        
        }
        int x;
        if(f) x=p[j-1];
        else x=b.back();
        while(s.find(x)!=s.end()) x--;
        return x;
        
    }
};