// Last updated: 6/9/2026, 9:12:06 PM
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for(auto i:nums){
            string tmp=to_string(i);
            reverse(tmp.begin(),tmp.end());
            int x=stoi(tmp);
            // cout<<x<<" \n";
            // if(x==21){
            //     cout<<"hello \n";
            //     st.insert(x);
            // }
            st.insert(x);
        }
        // st.insert(21);
        for(auto i:nums){
            st.insert(i);
        }
        for(auto i:st) cout<<i<<" ";
        return st.size();
    }
};