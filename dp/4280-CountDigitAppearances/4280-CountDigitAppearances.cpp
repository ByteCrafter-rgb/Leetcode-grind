// Last updated: 6/9/2026, 9:10:30 PM
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int d) {
        int cnt = 0;

        for(auto i:nums){
            int x = i;

            while(x > 0){
                if(x%10 == d) cnt++;
                x /= 10;
            }
        }
        return cnt;
    }
};