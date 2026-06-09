// Last updated: 6/9/2026, 9:12:03 PM
class Solution {
public:
    vector<int> arr;
    int n,k;

    bool check(int mid){
        // count of numbers less than mid from the k sized sub-seq
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(arr[i] <= mid){
                cnt++;i++;
            }
        }
        return cnt >= k;
    }

    int minCapability(vector<int>& nums, int kk) {
        arr = nums;
        k = kk;
        n = arr.size();
        int mn = 1e9,mx = -1e9;
        for(auto i:nums){
            mn = min(mn,i);
            mx = max(mx,i);
        }
        int low = mn,high = mx;
        int ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(check(mid)){
                high = mid - 1;
                ans = mid;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};