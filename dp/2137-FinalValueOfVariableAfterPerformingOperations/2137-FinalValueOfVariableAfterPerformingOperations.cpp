// Last updated: 6/9/2026, 9:13:17 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int x=0;
        for(auto i:op){
            if(i[1]=='-') x--;
            else x++;
        }
        return x;
    }
};