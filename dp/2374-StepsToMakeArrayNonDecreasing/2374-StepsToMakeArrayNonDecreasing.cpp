// Last updated: 6/9/2026, 9:12:42 PM
class Solution {
public:
    int totalSteps(vector<int>& v) {
        int n=v.size();
        if(n==1) return 0;
        stack<pair<int,int>> st;
        st.push({n-1,0});
        int ans=INT_MIN;
        for(int i=n-2;i>=0;i--){
            int cnt=0;
            while(!st.empty() and v[i]>v[st.top().first]){
                cnt++;
                cnt=max(cnt,st.top().second);
                st.pop();
            }
            ans=max(ans,cnt);
            st.push({i,cnt});
        }
        return ans;
    }
};