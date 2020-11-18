import java.math.BigInteger;

public class ProblemTwenty {
	public static void main( String atgs[]) {
		int num = 100;
		int sum = 0;
		BigInteger factorial = new BigInteger("1");
		
		while(num > 0) {
			factorial = factorial.multiply(new BigInteger(String.valueOf(num)));
			num -= 1;
		}
		char[] singleValues = factorial.toString().toCharArray();
		
		for(int i = 0; i < singleValues.length; i++) {
			sum += Character.getNumericValue(singleValues[i]);
		}
		System.out.print("Value is: " + sum);
	}
}
