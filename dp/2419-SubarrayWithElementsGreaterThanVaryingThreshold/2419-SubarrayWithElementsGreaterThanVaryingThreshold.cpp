// Last updated: 6/9/2026, 9:12:27 PM
class Solution {
public:
    int validSubarraySize(vector<int>& num, int t) {
        int n=num.size();
        vector<int> nsr(n,n),nsl(n,-1),v;
        for(int i=0;i<n;i++){
            while(v.size()>0 and num[v.back()]>num[i]){
                nsr[v.back()]=i;
                v.pop_back();
            }
            v.push_back(i);
        }
        while(v.size()>0) v.pop_back();
        for(int i=n-1;i>=0;i--){
            while(v.size()>0 and num[v.back()]>num[i]){
                nsl[v.back()]=i;
                v.pop_back();
            }
            v.push_back(i);
        }
        // for(auto i:nsr) cout<<i<<" ";
        // cout<<"\n";
        // for(auto i:nsl) cout<<i<<" ";
        
        int len=0,cnt=0;
        for(int i=0;i<n;i++){
            len=nsr[i]-nsl[i]-1;
            if((long long)len*((long long)num[i])>(long long)t) return len;
        }
        return -1;
    }
};