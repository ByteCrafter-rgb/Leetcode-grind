// Last updated: 6/9/2026, 9:12:16 PM
class Solution {
public:
    int maximumGroups(vector<int>& g) {
        int n=g.size();
        int x=0,cnt=0;
        while((x*(x+1))<=2*n){
            // cout<<x<<" \n";
            // x=/2;
            x++;
            cnt++;
        }
        cnt--;
        // sort(g.begin(),g.end());
        // for(auto i:g) cout<<i<<" ";
        return cnt;
    }
};