// Last updated: 6/9/2026, 9:11:33 PM
class Solution {
public:
    bool comp(const pair<int,int> &a,const pair<int,int> &b){
        if(a.first==b.first) return a.second>b.second;
        return a.first > b.first;
    }
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        vector<pair<int,int>> vp;
        int n = x.size();
        for(int i=0;i<n;i++){
            vp.push_back({x[i],y[i]});
        }
        sort(vp.begin(),vp.end(),[](const pair<int,int> &a, const pair<int,int> &b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first > b.first;
});
        long long ans = 0;
        vector<int> temp;
        map<int,int> mp;
        for(auto i: vp){
            // cout<<i.first<<" "<<i.second<<"\n";
            if(mp[i.first]==0){
                // ans += i.second;
                temp.push_back(i.second);
            }
            mp[i.first]++;
        }
        sort(temp.begin(),temp.end());
        
        if(temp.size()<3) {return -1;}
        int k = temp.size()-1;
        ans = temp[k] + temp[k-1] + temp[k-2];
        return ans;
    }
};