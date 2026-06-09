// Last updated: 6/9/2026, 9:13:36 PM
class Solution {
public:
    int countTriples(int n) {
        vector<int> square(n*n+1);
        for(int i=1;i<=n;i++){
            square[i*i]=1;
        }
        int res=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;i*i+j*j<=n*n;j++){
               res+=square[i*i+j*j]*2;
            }
        }
        return res;
    }
};