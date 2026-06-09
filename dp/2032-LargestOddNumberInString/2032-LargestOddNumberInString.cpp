// Last updated: 6/9/2026, 9:13:38 PM
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2) {
                break;
            }
            else num.pop_back();
        }
        return num;
    }
};