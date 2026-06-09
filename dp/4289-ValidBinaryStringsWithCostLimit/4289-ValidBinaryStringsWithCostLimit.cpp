// Last updated: 6/9/2026, 9:10:22 PM
class Solution {
public:
    int n,k;
    vector<string> ans;

    void rec(int idx,int kleft, int last,string s){
        if(idx >= n) {
            if(kleft <= k){
                ans.push_back(s);
                return;
            } else {
                return;
            }
        }
        if(last == 0 || idx == 0){
            s += '1';
            rec(idx + 1, kleft + idx,1, s);
            s.erase(idx,1);
            
        } 

        s+= '0';
        rec(idx + 1, kleft, 0, s);
        s.erase(idx,1);
        return ;
        
    }
    vector<string> generateValidStrings(int n_, int k_) {
        n = n_;
        k = k_;
        rec(0,0,0,"");
        return ans;
    }
};