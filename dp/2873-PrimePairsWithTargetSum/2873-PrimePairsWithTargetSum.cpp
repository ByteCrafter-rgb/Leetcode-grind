// Last updated: 6/9/2026, 9:11:52 PM
class Solution {
public:
//     int n=1000005;
    
//     void prime(){
       
        
//     }
    
    vector<vector<int>> findPrimePairs(int x) {
        vector<vector<int>> ans;
        // prime();
        int n=1000005;
        vector<bool> seive(1000005,true);
         seive[0]=seive[1]=false;
        for(int i=2;i*i<n;i++){
            if(seive[i]){
                for(int j=i*i;j<n;j+=i) seive[j]=false;
            }
        }
        // for(int i=1;i<20;i++) cout<<i<< " "<< seive[i]<<"\n";
        for(int i=1;2*i<=x;i++){
            // cout<<seive[i]<<seive[x-i]<<" "<<i<<" "<<x-i<<"\n";
            if(seive[i]==true and seive[x-i]==true){
                ans.push_back({i,x-i});
            }
        }
        return ans;
    }
};