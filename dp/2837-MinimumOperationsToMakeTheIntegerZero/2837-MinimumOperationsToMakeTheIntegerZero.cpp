// Last updated: 6/9/2026, 9:11:58 PM
class Solution {
public:
    unsigned int countSetBits(long long n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    int makeTheIntegerZero(int num1, int num2) {
        if(num2>num1) return -1;
        
        for(int i=0;i<=32;i++){
            long long x=num1-(long long)((long long)i*num2);
            if(x<=0) return -1;
            int y=countSetBits(x);
            // cout<<x<<" "<<y<<"\n";
            if(y<=i and i<=x) return i;
        }
        return -1;
    }
};