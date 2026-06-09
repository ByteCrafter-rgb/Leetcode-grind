// Last updated: 6/9/2026, 9:10:10 PM
class Solution {
public:
    int kthRoot(int n, int k) {
        // if(n == 0) return 0;
    int l = 1, r = n, ans = 0;

    while(l <= r) {
        int mid = (l + r) / 2;

        long long val = 1;
        bool ok = true;

        for(int i=0;i<k;i++) {
            if(val > n / mid) {
                ok = false;
                break;
            }
            val *= mid;
        }

        if(ok && val <= n) {
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }

    return ans;
}

    int countKthRoots(int l, int r, int k) {
        if(l == 0) return kthRoot(r,k) + 1;
        return kthRoot(r,k) - kthRoot(l-1,k);
    }
};