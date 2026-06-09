// Last updated: 6/9/2026, 9:13:02 PM
class Solution {
public:
    int minimumCardPickup(vector<int>& a) {
//         map<int,pair<int,int>> mp;
//         map<int,int> mf;
        
//         for(auto i:c) mf[i]++;
        
//         for(int i=0;i<c.size();i++){
//             if(mf[c[i]]>1) {
//             if(mp.find(c[i])==mp.end())
//             mp[c[i]].first=i;
//             else if(mp[c[i]].second==0) mp[c[i]].second=i;
//             }
//         }
        
//         vector<int> v;
        
//         for(auto i:mp){
//             int x=(i.second.second)-(i.second.first);
            
//             v.push_back(x);
//         }
        
//         int ans=INT_MAX;
        
//         for(auto i:v){
        
//             ans=min(ans,i);
        
//             }
//         return (ans==INT_MAX)? -1:ans+1;
        // map<int,int> mp;
        // for(int i=0;i<c.size();i++){
        //     if(mp.find(c[i])==mp.end()){
        //         mp[c[i]]=i;
        //     }
        //     else {
        //         v.push_back()
        //     }
        // }
        map<int,int> hmap;
 
    int minDistance = INT_MAX;
    int previousIndex = 0, currentIndex = 0;
    for (int i = 0; i < a.size(); i++) {
 
        if (hmap.find(a[i])!=hmap.end()) {
            currentIndex = i;
            previousIndex = hmap[a[i]];
            minDistance = min((currentIndex -
                        previousIndex),minDistance);
        }
 
        hmap[a[i]] = i;
    }
 
    return (minDistance == INT_MAX ? -1 : minDistance+1);
    }
};