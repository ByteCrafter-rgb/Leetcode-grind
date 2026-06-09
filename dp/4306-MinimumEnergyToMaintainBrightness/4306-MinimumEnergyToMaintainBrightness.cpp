// Last updated: 6/9/2026, 9:10:08 PM
class Solution {
public:
    long long minEnergy(int n, int b, vector<vector<int>>& inter) {

        int total = 0;
        int last = -1;
        sort(inter.begin(),inter.end());
        for(auto i:inter){
            int f = i[0];
            int l = i[1];
            if(f > last){
                total += l - f + 1;
                last = l;
            } else if(last != l && l > last){
                // cout<<total<<" ";
                total += l - last ;
                last = l;
                // cout<<total<<"\n";
            }
            // cout<<total<<"\n";
        }
        // cout<<total;

        long long cnt = b/3 + (b%3 != 0);
        cout<<total<<" "<<cnt<<"\n";
        return cnt * total;
    }
};