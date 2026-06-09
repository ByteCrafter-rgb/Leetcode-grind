// Last updated: 6/9/2026, 9:13:50 PM
class Solution {
public:
    bool checkZeroOnes(string s) {
        int lz=0,lo=0,mo=INT_MIN,mz=INT_MIN;char p='l';
        for(char i:s){
            if(p=='l' or p!=i){
                if(i=='1') { lo=0;
                    lo++;
                mo=max(mo,lo);
                }
                else { lz=0;
                    lz++;mz=max(mz,lz);
                }
            }
            else if(p=='0' and i=='0') {
                lz++;mz=max(mz,lz);
            }
            else if(p=='1' and i=='1') {
                lo++;
                mo=max(mo,lo);
            }
            
            p=i;
        }
        cout<<mz<<" "<<mo;
        return (mo>mz)? true:false;
    }
};