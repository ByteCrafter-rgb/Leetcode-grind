// Last updated: 6/9/2026, 9:10:14 PM
class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int sum = 0;
        vector<bool> isPrime(1001, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= 1000; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= 1000; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        string s = to_string(n);
        reverse(s.begin(),s.end());

        int x = stoi(s);

        int y = max(n,x);
         x = min(x,n);

        for(int i=x;i<=y;i++){
            if(isPrime[i]) sum += i;
        }
        return sum;
    }
};