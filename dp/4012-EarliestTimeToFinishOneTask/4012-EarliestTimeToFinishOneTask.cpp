// Last updated: 6/9/2026, 9:11:25 PM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int> vp;
        for(auto i:tasks){
            // if(i[1] >= i[0])
            vp.push_back(i[1]+i[0]);
        }
        sort(vp.begin(),vp.end());

        // for(auto i:vp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        
        return vp[0];
    }
};