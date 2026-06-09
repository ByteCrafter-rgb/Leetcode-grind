// Last updated: 6/9/2026, 9:10:59 PM
class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> arr(11,0);
        arr[0] = 1;
        arr[1] = 1;
        long long sum = 0;
        map<char,int> mp;
        string s = to_string(n);

        int cnt = 0;
        for(auto i:s){
            mp[i - '0']++;
        }
        
        for(int i=0;i<11;i++){
            if(i != 0) {
                arr[i] = arr[i-1]*i;
            }
            if(mp[i])
            sum += arr[i]*mp[i];
            cnt += mp[i];
        }
        // for(auto i:arr) cout<<i<<" ";

        sort(s.begin(),s.end());
        // cout<<sum;
        // cout<<s.size()<<" "<<cnt<<" ";
        do{
            long long res = stoi(s);
            string s2 = to_string(res);
            if(res == sum && s2.size() == s.size()) {
                return true;
            }
        } while(next_permutation(s.begin(),s.end()));
        
        
        return false;
    }
};