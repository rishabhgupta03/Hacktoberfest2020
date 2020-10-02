

/*Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.

Example 1:

Input:
S = Bawds jog, flick quartz, vex nymph
Output: 1
Explantion: In the given input, there
are all the letters of the English
alphabet. Hence, the output is 1.
Example 2:

Input:
S = sdfs
Output: 0
Explantion: In the given input, there
aren't all the letters present in the
English alphabet. Hence, the output
is 0.
Your Task:
 You need to complete the function checkPangram() that takes a string as a parameter and returns true if the string is a pangram, else it returns false.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).

Constraints:
1 <= |S| <= 104*/
import java.util.*;
class PangramCheck
{
    public static void main (String[] args)
    {
    	Scanner sc=new Scanner(System.in);
    	String str=sc.next();
        int arr[]=new int[26];
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='a'&&str.charAt(i)<='z')
            {
                arr[str.charAt(i)-'a']++;
            }
            else if(str.charAt(i)>='A'&&str.charAt(i)<='Z')
            {
                arr[str.charAt(i)-'A']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            {
             System.out.println("Not Pangram");
             return;
            }
        }
        System.out.println("Pangram");
        sc.close();
    }

    
}
