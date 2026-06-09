// Last updated: 6/9/2026, 9:13:47 PM
class Solution {
public:
    bool isCovered(vector<vector<int>>& r, int left, int right) {
        vector<int> range(53,0);
        for(auto i:r){
            range[i[0]]++;
            range[i[1]+1]--;
        }
        vector<int> r2(53,0);
        int c=0,k=0;
        for(auto i:range){
            c+=i;
            r2[k]=c;k++;
            // cout<<r2[k]<<" ";
            // cout<<c<<" ";
        }
        for(int i=left;i<=right;i++){
            if(r2[i]<=0) return false;
        }
        return true;
    }
};