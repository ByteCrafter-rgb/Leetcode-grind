// Last updated: 6/9/2026, 9:11:37 PM
class Solution {
    public int maxContainers(int n, int w, int maxWeight) {
        int sq = n*n;
    
        int result =0;
        
        if(sq*w <= maxWeight) {
            result = sq;
        } else {
            result = maxWeight/w;
        }
        return result;
    }
}