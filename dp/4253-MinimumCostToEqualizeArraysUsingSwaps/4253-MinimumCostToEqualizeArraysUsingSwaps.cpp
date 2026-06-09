// Last updated: 6/9/2026, 9:10:46 PM
class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        map<int,int> mp;
        for(auto i:nums1) mp[i]++;
        for(auto i:nums2) mp[i]++;

        bool flg = true;
        for(auto i:mp){
            if(i.second%2!=0) {flg = false;break;}
        }
        if(!flg) return -1;

        flg = true;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]!=nums2[i]) flg = false;
        }
        if(flg) return 0;

        map<int,int> fr1,fr2;

        for(auto i:nums1) fr1[i]++;
        for(auto i:nums2) fr2[i]++;

        int cnt = 0;

        set<int> st;
        int n = nums1.size();
        for(int i=0;i<n;i++){
            st.insert(nums1[i]);
            st.insert(nums2[i]);
        }
        for(auto i:st){
            int avg = (fr1[i] + fr2[i])/2;
            // cout<<avg<<" ";
            cnt += (abs(avg - fr1[i]));
        }
        return cnt/2;
    }
};