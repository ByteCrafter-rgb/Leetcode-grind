// Last updated: 6/9/2026, 9:12:50 PM
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(auto i:tasks){
            mp[i]++;
        }
        int ans=0;
        for(auto i:mp){
           int tmp=i.second;
            if(tmp==1) return -1;
            ans+=(tmp/3)+(tmp%3!=0);
            // else if(tmp%2==0) ans+=(tmp/2);
             
        }
        return ans;
    }
};