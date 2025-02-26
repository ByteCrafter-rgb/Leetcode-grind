class Solution {
    public boolean isSubsequence(String s, String t) {
        boolean res = true;
        int ind = 0;
        for(int i = 0; i< s.length();i++) {
            boolean flg = false;
            for(int j = ind;j< t.length();j++) {
                if(s.charAt(i) == t.charAt(j)) {
                    flg = true;
                    ind = ++j;
                    break;
                }
            }
            // System.out.println("i: " + i + " ind: " + ind);
            if(!flg) {
                res = false;
            }
        }
        return res;
    }
}
