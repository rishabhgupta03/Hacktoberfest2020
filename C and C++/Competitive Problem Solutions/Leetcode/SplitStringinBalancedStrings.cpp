/*
1221. Split a String in Balanced Strings: https://leetcode.com/problems/split-a-string-in-balanced-strings/
*/

class Solution {
public:
    int balancedStringSplit(string s) {
        int b = 0;
        int count = 0;
        for(char c: s){
            if(b == 0){
                count++;
                b = 0;
            }
            if(c == 'R'){
                b++;
            }
            else if(c == 'L'){
                b--;
            }
        }
        return count;
    }
};