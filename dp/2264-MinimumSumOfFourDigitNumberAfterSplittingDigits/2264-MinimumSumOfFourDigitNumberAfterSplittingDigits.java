// Last updated: 6/9/2026, 9:13:06 PM
class Solution {
    public int minimumSum(int num) {
        int cnt[]=new int[4];
        int i=0;
        while(i<4){
            cnt[i]=num%10;
            num/=10;
            i++;
        }
        Arrays.sort(cnt);
        int ans1=cnt[2]+cnt[3];
        int c1=ans1/10;
        int ans2=cnt[0]+cnt[1];
        int ans=(ans2+c1)*10+ans1%10;
        return ans;
    }
}