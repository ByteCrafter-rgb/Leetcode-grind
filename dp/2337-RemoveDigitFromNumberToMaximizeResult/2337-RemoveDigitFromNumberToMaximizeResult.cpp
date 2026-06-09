// Last updated: 6/9/2026, 9:13:03 PM
class Solution {
public:
    string removeDigit(string s, char d) {
        int fi=0,li=0;
    //     for(int i=0;i<s.size();i++){
    //         if(s[i]==d and i+1<s.size() and s[i+1]-'0'>=d-'0') {
    //             fi=i;break;
    //         }
    //         else if(s[i]==d){
    //             fi=i;
    //         }
    //     }
    //     // cout<<s.size()<<"\n";
    // for(int i=s.size()-1;i>=0;i--){
    //         if(s[i]==d) {
    //             li=i;break;
    //         }
    //     }   
        for(int i=0;i<s.size();i++){
            if(s[i]==d and i+1<s.size() and s[i+1]-'0'>d-'0'){
                fi=i;break;
            }
            else if(s[i]==d) fi=i;
        }
        string ans="";
        for(int i=0;i<s.size();i++){
                if(i!=fi) ans+=s[i];
            }
//         if(fi+1<s.size() and s[fi+1]-'0'>d-'0'){
            
//         }
//         else {
//            for(int i=0;i<s.size();i++){
//                 if(i!=li) ans+=s[i];
//             }
//         }
        // cout<<fi<<" "<<li<<endl;
        return ans;
    }
};