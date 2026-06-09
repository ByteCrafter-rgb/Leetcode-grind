// Last updated: 6/9/2026, 9:13:54 PM
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int a[2055]={0};
        for(int i=0;i<logs.size();i++){
            a[logs[i][0]]++;
            a[logs[i][1]]--;
        }
        int mx=INT_MIN,cnt=0;
        for(int i=1940;i<2055;i++){
            cnt+=a[i];
            mx=max(cnt,mx);
        }
        // for(int i=1948;i<1972;i++){
        //     cout<<a[i]<<" ";
        // }
        int ans=0,cc=0;
        for(int i=1940;i<2055;i++){
            cc+=a[i];
            if(cc==mx) {
                ans=i;
                // cout<<mx;
                break;
            }
        }
        return ans;
    }
};