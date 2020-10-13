//https://leetcode.com/problems/roman-to-integer/
//Given a roman numeral, convert it to an integer.

/* Sample inputs and outputs
Example 1:
Input: s = "III"   Output: 3
Input: s = "IV"    Output: 4
Input: s = "IX"    Output: 9
Input: s = "LVIII" Output: 58       ( Explanation: L = 50, V= 5, III = 3. )
Input: s = "MCMXCIV"  Output: 1994  ( Explanation: M = 1000, CM = 900, XC = 90 and IV = 4. )

*/
class Solution {
public:
   int getValue(char s){
       
        if(s == 'I')return 1; 
        else if(s == 'V')return 5;
        else if(s == 'X')return 10;
        else if(s == 'L')return 50;
        else if(s == 'C')return 100;
        else if(s == 'D')return 500;
        else if(s == 'M')return 1000;
        return -1;
   }

    int romanToInt(string s) {
        
        int size = s.size();

         //To store final numberical value
        int ans = 0;

        for (int i = 0; i < n; i++){
            int value1 = getValue(s[i]);
            int value2 = 0;

            //get numberical value of the next character
            if(i < n-1)
                value2 = getValue(s[i + 1]);

            //if value of character at next position is greater than value of character at current position
            //for example when s[i]=='I' and s[i+1]=='V' ,then ans would be 5-1=4
            if(value2 > value1 ){
                ans += (value2 - value1);
                i++;
            }
            
            else ans += value1;
        }
        return ans;
        
    }
};