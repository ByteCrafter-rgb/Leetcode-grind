// Last updated: 6/9/2026, 9:10:20 PM
class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ngr(n,0),ngl(n,0);
        if(nums.size() == 0) return {};
        
        stack<int> st;
        st.push(nums[0]);
        ngl[0] = -1,ngl[n-1] = -1;
        for(int i=1;i < n ;i++){
            if(nums[i] > st.top()){
                ngl[i] = -1;
                st.pop();
                st.push(nums[i]);
            } else {
                ngl[i] = i;
            }
        }

        stack<int> st1;
        st1.push(nums[n-1]);
        ngr[0] = -1,ngr[n-1] = -1;
        for(int i=n-2;i > 0 ;i--){
            if(nums[i] > st1.top()){
                ngr[i] = -1;
                st1.pop();
                st1.push(nums[i]);
            } else {
                ngr[i] = i;
            }
        }

        vector<int> ans;

        for(int i=0;i<n;i++){
            if(ngr[i] == -1 || ngl[i]==-1){
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};