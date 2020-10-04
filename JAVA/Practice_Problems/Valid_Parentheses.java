/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

 Solution: stack.
 */
public class Solution {
    public boolean isValid(String s) {
        Stack<Character> stk = new Stack<Character>();
        for (int i = 0; i < s.length(); ++i) {
            char ch = s.charAt(i);
            if (ch == '(' || ch == '[' || ch== '{') {
                stk.push(ch);
            }
            else {
                if (stk.empty() || Math.abs(stk.pop() - ch) > 2) 
                    return false;
            }
        }
        return stk.empty(); 
    }
}
