// Last updated: 6/9/2026, 9:10:51 PM
class Solution {
public:
    int minimumIndex(vector<int>& cap, int sz) {
        int ans = 1e9;

        for(int i=0;i<cap.size();i++){
            if(cap[i] >= sz){
                ans = min(ans,cap[i]);
            }
        }
        for(int i=0;i<cap.size();i++){
            if(cap[i] == ans){
                return i;
            }
        }
        return -1;
    }
};