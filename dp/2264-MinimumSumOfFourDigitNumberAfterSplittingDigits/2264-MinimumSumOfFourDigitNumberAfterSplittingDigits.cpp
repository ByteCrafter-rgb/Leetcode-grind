// Last updated: 6/9/2026, 9:13:13 PM
class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());
        // for(auto i:v) cout<<i<<" ";
        string n1,n2;
        int c=0;
        for(auto i:v){
            if(c%2) n2+=(i+'0');
            else n1+=(i+'0');
            c++;
        }
        // cout<<n1<<" "<<n2<<endl;
        // cout<<<<endl;
        int ans=stoi(n1)+stoi(n2);
        return ans;
        
    }
};