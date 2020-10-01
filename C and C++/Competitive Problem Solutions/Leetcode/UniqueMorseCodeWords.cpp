/*
804. Unique Morse Code Words: https://leetcode.com/problems/unique-morse-code-words/
*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> myset;
        
        string code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i = 0; i < words.size(); i++){
            string temp = "";
            for(char c: words[i]){
                temp += code[(int)c - 97];
            }
            myset.insert(temp);
        }
        return myset.size();
    }
};