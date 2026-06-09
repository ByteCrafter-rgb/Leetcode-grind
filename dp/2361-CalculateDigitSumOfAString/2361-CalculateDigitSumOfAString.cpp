// Last updated: 6/9/2026, 9:12:51 PM
class Solution {
public:
    int sum(string s){
        int ans=0;
        for(auto i:s){
            ans+=(i-'0');
        }
        return ans;
    }
    string str(string tmp2,int i,int k){
        string tmp;
        for(int idx=i;idx<tmp2.size() and idx<i+k;idx++){
            tmp+=tmp2[i];
        }
        return tmp;
    }
    string digitSum(string s, int k) {
        int n=s.size();
        string tmp2=s;
        
        int d=4;
        while(tmp2.size()>k ){
            string tmp3;
            for(int i=0;i<tmp2.size();i+=k){
            string tmp=tmp2.substr(i,k);
                // cout<<i<<" "<<i+k<<" --";
            int x=sum(tmp);
            tmp3+=to_string(x);
                // cout<<tmp<<" "<<tmp3<<"\n";
                tmp.clear();
        }
            tmp2=tmp3;
        }
        return tmp2;
    }
};