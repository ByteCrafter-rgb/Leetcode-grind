// Last updated: 6/9/2026, 9:11:14 PM
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int cnt = 0;

        for(int x = num1;x<=num2;x++){
            vector<int> t;
            int n = x;
            while(n>0){
                t.push_back(n%10);
                n/=10;
            }
            for(int j=1;j<t.size()-1;j++){
                if(t[j] > t[j-1] && t[j] > t[j+1]){
                    cnt++;
                }
                 else if (t[j] < t[j-1] && (t[j] < t[j+1])) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};