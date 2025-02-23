class Solution {
    public List<List<Integer>> generate(int n) {
        List<List<Integer>> result = new ArrayList<>();
        
        List<Integer> rw = new ArrayList<>();
            rw.add(1);

            result.add(rw);

        if (n <=1) {
            return result;
        }

        for (int i =1 ;i < n; i++ ) {
            List<Integer> prev = result.get(i-1);
            List<Integer> cur = new ArrayList<>();

            cur.add(1);

            for (int j = 1; j < i ; j++ ) {
                cur.add(prev.get(j-1) + prev.get(j));
            }
            cur.add(1);
            result.add(cur);
        }
        
        return result;
    }
} 
