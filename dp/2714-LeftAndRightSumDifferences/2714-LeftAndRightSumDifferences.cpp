// Last updated: 6/9/2026, 9:12:02 PM
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> r,l(n);
        int x=0;
        for(int i=0;i<n;i++){
            r.push_back(x);
            if(i==n) break;
            x+=nums[i];
        }
        x=0;
        // for(auto u:r) cout<<u<<" ";
        for(int i=n-1;i>=0;i--){
            
            
            l[i]=x; x+=nums[i];
            
           
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(abs(l[i]-r[i]));
        }
        return ans;
    }
};