// Last updated: 6/9/2026, 9:13:41 PM
class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& t) {
        vector<int> res(3);
        for(auto &i:triplets){
            if(i[0]<=t[0] and i[1]<=t[1] and i[2]<=t[2]){
                res={max(res[0],i[0]),max(res[1],i[1]),max(res[2],i[2])};
            }
        }
        return res==t;
    }
};