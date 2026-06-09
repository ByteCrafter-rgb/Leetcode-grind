// Last updated: 6/9/2026, 9:12:45 PM
class Solution {
public:
    int minimumLines(vector<vector<int>>& sp) {
        int cnt=1;
        sort(sp.begin(),sp.end());
        for(int i=1;i<sp.size()-1;i++){
            long double slp;
            if((long long)(sp[i+1][1]-sp[i][1])*(sp[i][0]-sp[i-1][0])==(long long)(sp[i][1]-sp[i-1][1])*(sp[i+1][0]-sp[i][0])) cnt++;
            
        }
       
        return sp.size()-cnt;
        
    }
};