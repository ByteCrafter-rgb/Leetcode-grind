// Last updated: 6/9/2026, 9:10:03 PM
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;

        for(int i=n-k;i<= n+k;i++){
            if(abs(n-i) <= k && (n&i) == 0 && i >= 0) {
                // cout<<i<<"\n";
                sum += i;
            }
        }
        return sum;
    }
};