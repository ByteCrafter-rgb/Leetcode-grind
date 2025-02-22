class Solution {
    public int finalValueAfterOperations(String[] op) {
        int sz = op.length;

        int result = 0;

        for (int i = 0; i < sz ; i++) {
            if(isAddition(op[i])) result++;
            else result--;
        }
        return result;
    }

    private boolean isAddition(String s) {
        if (s.length() == 0) return false;

        if (s.charAt(1) == '+') return true;
        return false;
    }
}
