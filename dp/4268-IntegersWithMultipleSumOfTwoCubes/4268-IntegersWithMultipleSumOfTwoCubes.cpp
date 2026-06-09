// Last updated: 6/9/2026, 9:10:36 PM
class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        vector<int> ans;

        unordered_map<long long,int> freq;

        int m = cbrt(n) + 2;

        for(long long a = 1; a <= m ; a++){
            int a3 = a*a*a;

            for(long long b = a;b<=m;b++){
                int sum = a3 + b*b*b; 
                if(sum > n) break;

                freq[sum]++;
            }  
        }

        for(auto [x,cnt]:freq){
            if(cnt>=2) ans.push_back(x);
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};