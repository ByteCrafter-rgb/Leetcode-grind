// Last updated: 6/9/2026, 9:13:59 PM
class Solution {
public:
    int sumBase(int n, int k) {
        int s=0;
        while(n>0){
            s+=n%k;
            n=n/k;
        }
        return s;
    }
};