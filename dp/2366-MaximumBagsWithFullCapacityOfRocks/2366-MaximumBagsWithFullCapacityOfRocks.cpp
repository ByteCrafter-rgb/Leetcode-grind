// Last updated: 6/9/2026, 9:12:47 PM
class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& r, int x) {
        int n=cap.size();
        vector<int> dif(n,0);
        for(int i=0;i<n;i++){
            dif[i]=cap[i]-r[i];
        }
        sort(dif.begin(),dif.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(x>0 and dif[i]<=x){
                ans++;
                x-=dif[i];
            }
        }
        return ans;
    }
};