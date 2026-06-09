// Last updated: 6/9/2026, 9:10:29 PM
class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        map<string,int> mp;
        mp["1"] = 1;
        mp["2"] = 2;
        mp["3"] = 3;
        mp["4"] = 4;
        mp["0"] = 0;
        mp["6"] = 6;
        mp["W"] = 0;
        mp["WD"] = 1;
        mp["NB"] = 1;
        int sc  = 0, w = 0;

        for(auto i:events){
            if(i == "W" && w >= 10) break; 
            sc += mp[i];
            
            if(i == "W") w++;
            if(w == 10) break;
        }
        return {sc,w};
    }
};