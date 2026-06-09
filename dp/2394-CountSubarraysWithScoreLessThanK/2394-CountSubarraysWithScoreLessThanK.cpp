// Last updated: 6/9/2026, 9:12:33 PM
class Solution {
public:
    #define ll long long 
    long long countSubarrays(vector<int>& nums, long long k) {
        
        int n=nums.size();
        vector<ll> pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
        // for(auto i:pref) cout<<i<<" ";
        // cout<<"\n";
        ll cnt=0,res=0;
        for(int i=0;i<n;i++){
            ll lo=i,hi=n-1;
            ll ans = 0;
            
            while(lo<=hi){
                ll mid=lo+(hi-lo)/2;
                if((pref[mid]-res)*(mid-i+1) < k)
                {
                    ans = mid-i+1 ;
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
		      }

		      res = pref[i];
              // cout<<pref[ans-1+i]<<"\n";
              cnt += ans ;
            // mid--;
            //  int len=mid-i+1;
            // if((pref[mid]-pref[i-1])*(mid-i)>k) len=mid-i-2;
            
            // cnt+=(mid-i+1);
        }
//         vector<int> pref(n+1);
//         for(int i=1;i<=n;i++){
//             pref[i]=pref[i-1]+nums[i-1];
//         }
//         // for(auto i:pref) cout<<i<<" ";
//         // cout<<"\n";
//         long long cnt=0;
//         for(int i=1;i<=n;i++){
//             int lo=i,hi=n;
//             int mid;
//             while(lo<=hi){
//                  mid=lo+(hi-lo)/2;
//                 if((pref[mid]-pref[i-1])*(mid-i+1)<k)
//                 {
//                     lo=mid+1;
//                 }
//                 else{
//                     // hi=mid-1;
//                 }
//             }
//             cout<<pref[mid]<<"\n";
//             // mid--;
//              int len=mid-i+1;
//             if((pref[mid]-pref[i-1])*(mid-i)>k) len=mid-i-2;
            
//             cnt+=(mid-i+1);
//             // cout<<cnt<<"\n";
            
        // 
        return cnt;
    }
};