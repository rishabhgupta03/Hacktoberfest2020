
/**
 * Determine if the given letter is a vowel or a consonant. 
 * 
 * @author Sebastian
 * @version 1.0
 */
public class ConsonantOrVowel
{
    public static void check(char let) {
        char ch = let;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
            System.out.println(ch + " is a vowel");
        } else {
            System.out.println(ch + " is a consonant");
        }
    }
}
