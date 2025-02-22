class Solution {
    public int scoreOfString(String s) {
        
       int n = s.length();

        if(n <= 1) {
            return 0;
        }

    int c_sum =0;
       for(int i=0; i<n-1 ;i++) {
        char c = s.charAt(i);
        char nc = s.charAt(i+1);

            c_sum += Math.abs(c - nc);
// System.out.println("Char c is " + c + "next char is " + nc);
       }

       return c_sum;
    }
}

