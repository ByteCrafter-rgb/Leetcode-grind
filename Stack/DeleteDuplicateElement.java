class Solution {
    public String removeDuplicates(String s) {
        
        String result = "";
        Stack<Character> stk = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            if (!stk.isEmpty()) {
                // System.out.println(stk.peek());
                if (stk.peek() != s.charAt(i)) {
                    stk.push(s.charAt(i));
                } else {
                    stk.pop();
                }
            } else {
                stk.push(s.charAt(i));
            }
        }

        for (Character c : stk) {
            result += c;
        }
        return result;
    }
}
