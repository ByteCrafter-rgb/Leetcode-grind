// Last updated: 6/9/2026, 9:11:11 PM
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> freq;

        for(auto i:nums){
            freq[i]++;
        }
        int sum = 0;
        for(auto i:freq){
            if(i.second%k == 0){
                sum += (i.first)*(i.second);
            }
        }
        return sum;
    }
};