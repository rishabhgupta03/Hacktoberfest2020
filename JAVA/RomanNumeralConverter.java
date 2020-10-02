import java.util.HashMap;


public class Converter {
        HashMap<Character, Integer> romans;



        public Converter() {
                romans = new HashMap();
                romans.put('I', 1);
                romans.put('V', 5);
                romans.put('X', 10);
                romans.put('L', 50);
                romans.put('C', 100);
                romans.put('D', 500);
                romans.put('M', 1000);

        }

        int convert(String input) {
                int result = 0;
                char[] inputArray = input.toCharArray();
                for (int i = 0; i < inputArray.length; i++) {
                        int previousIndex = i == 0 ? 0 : i-1;

                        int pv = romans.get(inputArray[previousIndex]);
                        int cv = romans.get(inputArray[i]);
                        if(pv < cv) {
                                result += ( cv - 2 * pv);
                        } else {

                                result += cv;
                        }
                }
                return result;
        }

}