// Last updated: 6/9/2026, 9:10:11 PM
class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        map<int,int> mp;

        for(auto i:nums) mp[i]++;

        for(auto &x:nums){
            vector<int> fact;
            for(int i=1;i<=sqrt(x);i++){
                if(x%i!=0) continue;
                if(mp[i]) {
                    x = i;
                    break;
                }
                fact.push_back(x/i);
            }

            while(!fact.empty()){
                int y = fact.back();
                fact.pop_back();
                if(mp[y]){
                    x = min(x,y);
                    break;
                }
            }
        }

        return accumulate(nums.begin(),nums.end(),0ll);
    }
};